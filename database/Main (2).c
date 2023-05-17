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
        "Bagaimana penulisan syntax untuk menampilkan teks pada layar? \nA. D\nB. Scanf\nC. Prinft\nD. Printf\n"};
    char *answers[] = {
        "B",
        "A",
        "C",
        "B",
        "D"};
    int score = 0;
    int points[] = {
        10,
        20,
        20,
        20,
        30};
    printf("Score Anda = %d\n", score);
    for (int i = 0; i < 5; i++)
{ printf("Pertanyaan %d:\n%s", i + 1, questions[i]);