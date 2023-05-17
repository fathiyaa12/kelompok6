//membaca isi dalam file login
    FILE *fpr;
    if((fpr = fopen("database/login.bin", "rb")) == NULL){
        printf("gagal membuka file");
        return EXIT_FAILURE;
    }
    char akun[20];
    fread(akun,sizeof(char),sizeof(akun)/sizeof(char), fpr);

    fclose(fpr);

    char *string[3];
    char username[20], password[20];
    int ctrl = 0;

    string[0] = strtok(akun, "@");
    while(string[ctrl++] != NULL){
        string[ctrl] = strtok(NULL,"@");

    }
    strcpy(username, string[0]);
    strcpy(password, string[1]);

    if( (strcmp(argumen[1], username) == 0) &&(strcmp(argumen[2],password) == 0 )){
        printf("selamat anda berhasil login !");
    }
    else{
        printf("\nAnda gagal login!\n");
        printf("Username atau password anda salah!\n");
    }

