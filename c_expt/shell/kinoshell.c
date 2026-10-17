// Tiny Shell (Untuk Percobaan dan Demonstrasi Saja)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

// Define agar tidak buffer overflow
#define MAX_INPUT 1024
#define MAX_ARGS 64

int main(){

  char input[MAX_INPUT];
  char* args[MAX_ARGS];

  
  while(1){
    printf("kino> ");
    fflush(stdout);


    if(fgets(input, MAX_INPUT, stdin) == NULL) { // CTRL + D
      printf("\n");
      break;
    }
     
    input[strcspn(input, "\n")] = '\0';

    if(strcmp(input, "exit\n") == 0) {
      printf("Bye\n");
      break;
    }


    char* token = strtok(input, " ");
    int i = 0;

    while (token != NULL && i < MAX_ARGS -1) {
      args[i++] = token;
      token = strtok(NULL, " ");
    }

    args[i] = NULL;

    if (strcmp(args[0], "cd") == 0){
      if (args[1] == NULL) {
        fprintf(stderr, "cd: missing arguments\n");
      } else if (chdir(args[1]) !=0) {
        perror("cd failed");
      } 
      continue;
    }
    //fork & clone program
    pid_t pid = fork();

    if (pid == 0) {

      execvp(args[0], args);
      perror("failed");
      exit(EXIT_FAILURE);

    } else if (pid > 0) {

      int status;
      waitpid(pid, &status, 0);
      if (WIFEXITED(status))
        printf("Exit status: %d\n", WEXITSTATUS(status));

    } else {
      perror("fork failed");
    }
  }


  return 0;
}
