# SOAL

Kamu adalah seorang pengembang sistem pemesanan tiket untuk sebuah bioskop. Bioskop ini memiliki N kursi yang diatur secara berbaris dalam satu baris. Beberapa kursi mungkin sudah dipesan, dan kamu diberi tahu nomor kursi yang sudah dipesan. Tujuan kamu adalah menentukan apakah mungkin bagi sekelompok M orang untuk memesan kursi sehingga mereka bisa duduk bersebelahan.

<b>Ketentuan:</b><br />

- Kursi diurutkan dari nomor 1 hingga N.
- Diberikan array bookedSeats yang berisi nomor kursi yang sudah dipesan.
- Kelompok orang hanya bisa duduk di kursi yang belum dipesan dan harus duduk bersebelahan.

<b>Input:</b><br />

- N (1 ≤ N ≤ 10^6): Jumlah total kursi di bioskop.
- M (1 ≤ M ≤ N): Jumlah orang dalam kelompok yang ingin memesan kursi.
- bookedSeats (0 ≤ jumlah elemen ≤ N): Daftar nomor kursi yang sudah dipesan.

<b>Output:</b><br />

- Cetak "YES" jika ada cukup kursi kosong yang bersebelahan untuk kelompok M orang. Jika tidak, cetak "NO".

<b>Contoh:</b><br />
Input 1:

```cpp
N = 10
M = 3
bookedSeats = [2, 5, 6]
```

Output 1:

```sh
YES
```

(Kelompok 3 orang bisa duduk di kursi [7, 8, 9])

Input 2:

```cpp
N = 5
M = 2
bookedSeats = [1, 2, 4, 5]
```

Output 2:

```sh
NO
```

(Tidak ada dua kursi yang bersebelahan yang tersedia.)
