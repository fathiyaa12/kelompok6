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
char answer[2];
        scanf("%s", answer);
        if (strcmp(answer, answers[i]) == 0)
        {
            score += points[i];
            printf("-----------------------\n");
            printf("Jawaban Anda benar!\n");
            printf("-----------------------\n");
        }
        else
        {
            printf("-----------------------\n");
            printf("Jawaban Anda salah.\n");
            printf("-----------------------\n");
        }
    }
    printf("Skor Anda: %d\n", score);
}
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("gagal masuk");
    }
    char usernameinput[20], passwordinput[20];
    strcpy(usernameinput, argv[1]);
    strcpy(passwordinput, argv[2]);
    //untuk memasukan password ke dalam file bin
/**FILE *fpw = fopen("database/login.bin", "wb");
    char login[20] = "Fathiya@Contoh";
    fwrite(login, sizeof(char), sizeof(login) / sizeof(char), fpw);
    fclose(fpw);*/
    FILE *fpr;
    if ((fpr = fopen("database/login.bin", "rb")) == NULL)
    {
        printf("Couldn't open database");
        return EXIT_FAILURE;
    }
    char akun[20];
    fread(akun, sizeof(akun), sizeof(akun) / sizeof(char), fpr);
    fclose(fpr);
    char *string[3];
    char username[20], password[20];
    int ctrl = 0;
    string[0] = strtok(akun, "@");
    while (string[ctrl++] != NULL)
    {
        string[ctrl] = strtok(NULL, "@");
    }
    strcpy(username, string[0]);
    strcpy(password, string[1]);
    if (strcmp(usernameinput, username) == 0 && strcmp(passwordinput, password) == 0)
    {
        printf("Selamat Datang!! %s\n", username);
        play_game();
    }
    else
    {
        printf("Username dan password anda salah");
    }
    return 0;
}
