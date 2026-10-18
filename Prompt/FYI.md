# FYI — Panduan Folder Prompt Visual Learning

Folder ini berisi **prompt siap pakai untuk membantu AI menjelaskan konsep dan membimbing proses belajar melalui visualisasi**. Tujuannya bukan sekadar mendapatkan jawaban panjang, tetapi memahami bagaimana sesuatu bekerja, mengapa bagian-bagiannya diperlukan, dan bagaimana teori terhubung dengan praktik.

Prompt di sini dirancang agar bisa digunakan ulang: salin prompt yang sesuai, ganti topiknya, lalu lanjutkan percakapan sedikit demi sedikit.

## Isi Folder

| File | Fungsi | Gunakan ketika... |
|---|---|---|
| `FYI.md` | Panduan folder ini | Kamu ingin tahu cara memilih dan memakai prompt. |
| `UPROMPT.md` | **Visual Learning** | Kamu ingin memahami konsep, teori, atau mekanisme yang abstrak. |
| `UPROMPT2.md` | **Build & Explore** | Kamu ingin merancang proyek, memahami komponen, atau belajar membangun sesuatu dari nol. |
| `FOLLOW_UP.md` | Prompt lanjutan | Kamu ingin memperdalam bagian tertentu atau melanjutkan tanpa mengulang penjelasan sebelumnya. |

## 1. Pilih Prompt yang Tepat

### `UPROMPT.md` — Pahami cara kerja suatu konsep

Pakai ini untuk mempelajari **apa sesuatu itu, bagaimana cara kerjanya, dan mengapa konsep tersebut berlaku**. AI diminta mulai dari intuisi sederhana, memperlihatkan visual yang relevan, lalu menghubungkannya dengan teori.

Contoh topik:
- Bagaimana register CPU menyimpan nilai dan berinteraksi dengan ALU.
- Mengapa integral dapat digunakan untuk menghitung luas di bawah kurva.
- Bagaimana arus listrik dan tegangan bekerja dalam rangkaian.
- Bagaimana pointer dan alamat memori berhubungan dalam C atau C++.

### `UPROMPT2.md` — Bongkar dan bangun sesuatu tahap demi tahap

Pakai ini ketika tujuanmu lebih praktis: **memahami bagian-bagian sistem, merancang sesuatu, membangun proyek, atau menyusun roadmap belajar**. AI diminta menunjukkan gambaran utuh, memecahnya menjadi komponen, menjelaskan alasan setiap bagian dibutuhkan, lalu membimbing proses pembangunan dan pengujian.

Contoh topik:
- Membuat robot penghindar rintangan untuk pemula.
- Memahami arsitektur text editor sederhana.
- Merancang aplikasi pencatat pengeluaran.
- Menyusun tahapan belajar sistem embedded atau software engineering.

Kalau kamu ingin memahami teori di balik sesuatu, mulai dari `UPROMPT.md`. Kalau kamu ingin membongkar atau membuat sesuatu, mulai dari `UPROMPT2.md`. Keduanya boleh dipakai bergantian: pahami konsepnya dahulu, kemudian terapkan lewat proyek.

## 2. Cara Memakai Prompt

1. **Buka file prompt yang sesuai**, lalu salin isinya ke AI pilihanmu.
2. **Ganti placeholder** seperti `[Masukkan topik]`, `[Pemula / menengah / lanjutan]`, dan `[Batasan]` dengan kebutuhanmu. Hapus bagian yang tidak relevan.
3. **Beri konteks secukupnya.** Sebutkan apa yang ingin kamu pahami, tingkat kemampuanmu, serta batasan penting. Tidak perlu menulis latar belakang panjang jika tidak membantu jawaban.
4. **Mulai dari fondasi.** Untuk topik besar, minta satu konsep atau satu tahap dahulu. Jangan langsung meminta seluruh teori sekaligus.
5. **Tinjau visualnya.** Pastikan label, arah panah, urutan proses, dan penjelasannya membantu menjawab pertanyaan. Minta AI memperbaiki bagian yang membingungkan, bukan mengulang semuanya.
6. **Lanjutkan menggunakan `FOLLOW_UP.md`.** Pilih instruksi yang cocok untuk bagian yang belum jelas, tahap berikutnya, atau rangkuman progres.

### Contoh permintaan yang sudah disesuaikan

**Untuk konsep:**
> Topik: Apa yang terjadi di dalam CPU ketika instruksi `ADD` dijalankan? Saya pemula dan mengenal sedikit assembly. Tunjukkan aliran nilai antara register, ALU, dan hasil operasi melalui diagram berlabel. Jelaskan satu tahap dahulu.

**Untuk proyek:**
> Topik: Text editor sederhana. Tujuan: memahami bagaimana program menerima input keyboard dan menampilkan teks. Level: pemula C. Bimbing saya tahap demi tahap; tampilkan diagram alur, jelaskan fungsi tiap bagian, dan jangan langsung memberikan seluruh kode.

## 3. Cara Mendapatkan Visual yang Benar-Benar Membantu

Visualisasi harus menjelaskan **struktur, perubahan, aliran, atau hubungan sebab-akibat**—bukan sekadar menjadi hiasan.

- Pilih bentuk visual sesuai topik: grafik untuk matematika, diagram alur untuk algoritma, skema rangkaian untuk elektronika, diagram arsitektur untuk software, atau ilustrasi berlapis/3D untuk struktur fisik.
- Untuk proses yang berubah, minta visual berurutan: **kondisi awal → proses → kondisi akhir**. Tanyakan apa yang berubah dan mengapa.
- Minta label yang jelas dan jelaskan setiap simbol yang belum dikenal.
- Jika AI atau aplikasi tidak dapat menghasilkan gambar, animasi, simulasi interaktif, atau 3D sungguhan, minta alternatif seperti diagram teks, Mermaid, grafik, atau skema. Jangan menganggap deskripsi tentang sebuah visual sama dengan visual yang benar-benar sudah dibuat.
- Analogi boleh membantu, tetapi tanyakan batas analoginya ketika detail teknis menjadi penting.

## 4. Hemat Token Tanpa Mengorbankan Pemahaman

Hemat token bukan berarti membuat semua jawaban sesingkat mungkin. Yang ingin dihindari adalah **pengulangan dan detail yang belum diperlukan**, bukan penjelasan penting.

- Ajukan satu pertanyaan yang spesifik pada satu waktu.
- Jika satu bagian belum jelas, sebutkan bagian itu saja. Contoh: *"Jelaskan ulang hubungan register dan ALU saja. Jangan ulangi pengantar CPU."*
- Minta AI mengembangkan visual atau menjelaskan satu panah, komponen, rumus, atau langkah tertentu—bukan mengulang seluruh topik.
- Jangan meminta ringkasan setelah setiap pesan. Minta checkpoint saat percakapan mulai panjang, sebelum berpindah topik, atau ketika ingin pindah ke percakapan baru.
- Saat meminta checkpoint, simpan hanya tujuan, konteks minimum, hal yang sudah dipahami, keputusan penting, bagian yang belum jelas, dan langkah berikutnya.
- Jika AI kehilangan konteks, berikan checkpoint terakhir. Jangan mengandalkan AI untuk mengingat seluruh percakapan panjang.

## 5. Contoh Follow-up yang Efisien

Salin salah satu kalimat ini atau gunakan prompt yang tersedia di `FOLLOW_UP.md`:

- **Bagian belum jelas:** "Saya belum memahami [bagian tertentu]. Jelaskan ulang bagian itu dengan satu visual yang lebih sederhana dan satu contoh."
- **Perlu melihat proses:** "Tunjukkan urutan kondisi awal, proses, dan hasil akhir. Jelaskan apa yang berubah di setiap tahap."
- **Lanjut belajar:** "Lanjutkan dari tahap terakhir. Jangan ulangi penjelasan yang sudah dipahami. Berikan satu langkah berikutnya beserta tujuan dan cara memeriksanya."
- **Periksa pemahaman:** "Ajukan satu pertanyaan kecil untuk menguji apakah saya memahami konsepnya. Jangan langsung berikan jawabannya; koreksi pemikiran saya setelah saya menjawab."
- **Simpan progres:** "Buat checkpoint ringkas berisi tujuan, konteks minimum, hal yang sudah dipahami, keputusan penting, pertanyaan yang belum terjawab, dan langkah berikutnya. Jangan salin seluruh riwayat."

## 6. Hal yang Perlu Diingat

Prompt adalah **panduan perilaku**, bukan jaminan bahwa setiap AI bisa membuat visual 3D, animasi, atau simulasi interaktif. Kemampuan itu bergantung pada model dan fitur aplikasi yang digunakan. AI juga dapat keliru; untuk detail teknis penting, minta alasan atau sumber dan verifikasi sebelum menerapkannya.

Kamu tidak harus memahami semuanya dalam satu sesi. Tujuan folder ini adalah membantu kamu belajar secara bertahap sampai kamu dapat menjelaskan kembali konsepnya dan, jika relevan, menerapkannya sendiri.

**Prinsip utamanya: visual yang jelas + penjelasan yang tepat + langkah kecil + konteks yang ringkas.**

## 7. My Thoughts

Well aku buat ini gegara gabut ajasih, aku agak teledor naroh folder jadi mesti hilang, nah kalo taroh disini meskipun laptopku kebakar nanti ini masih aman lah yo, ya gitu aja sih dawg, i forgor what am i gonna say, maybe this is all, bye.

- Deril
