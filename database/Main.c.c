#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void play_game()
{
    char *questions[] = {
        "Tahun berapa bahasa C ditemukan?\nA. 1970\nB. 1972\nC. 1971\nD. 1975\n",
        "Siapakah salah satu pendiri GitHub dibawah ini..?\nA. Chris Wanstrath\nB. Linus Torvald\nC. Joko Widodo\nD. Dennis Ritchie\n",
        "Bahasa C dikembangkan dimana?\nA. Centrum Wiskunde & Informatica\nB. Oracle\nC. Bell Labs\nD. Indonesia\n",
        "Bahasa C merupakan bahasa tingkat apa?\nA. Rendah\nB. Sangat tinggi\nC. Menengah\nD. Tinggi\n",
        "Bagaimana penulisan syntax untuk menampilkan teks pada layar? \nA. D\nB. Scanf\nC. Prinft\nD. Printf\n",
        "Berikut termasuk hewan-hewan mamalia, kecuali?\nA. Kambing\nB. Ular\nC. Kucing\nD. Paus\n",
        "Apakah nama ilmiah untuk air?\nA. Au\nB. Mg\nC. CO2\nD. CO\n",
        "Apakah huruf kendaraan bermotor untuk provinsi Aceh?\nA. BL\nB. BB\nC. BK\nD. B\n",
        "Apakah ibukota negara Laos?\nA. Kuala Lumpur\nB. Manila\nC. Kamboja\nD. Viantine\n",
        "Hubungan timbal balik antara makhluk hidup dan lingkungannya disebut?\nA. Komunitas\nB. Ekosistem\nC. Populasi\nD. Adaptasi\n"};
    char *answers[] = {
        "B",
        "A",
        "C",
        "B",
        "D",
        "B",
        "C",
        "A",
        "D",
        "B"};
    int score = 0;
    int points[] = {
        30,
        20,
        10,
        10,
        10,
        10,
        20,
        10,
        10,
        10};

    printf("Score Anda = %d\n", score);

    for (int i = 0; i < 10; i++)
    {
        printf("Pertanyaan %d:\n%s", i + 1, questions[i]);
