#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

////////////////////////////////// =================================================== /////////////////////////////////////////////////
FILE *LOGINMAHASISWA;
FILE *DATATAKMHS;
FILE *Datalogin;
FILE *DataMahasiswa;
FILE *Datanilai;
FILE *Jumlahabsensi;
FILE *cari_mahasiswa;
FILE *pesan;


// DEKLARASI UNTUK LOGIN //

int passwordbenar,usernamebenar,akun;
char pass[20], password[20],user[20],username[20];
char usernameadmin[30], passadmin[30];
int i, n;

///////////////////////////////////////////////////// WELCOM & PILIHAN LOG IN ////////////////////////////////////////////////////////////////
void main(){

    char a[]={"SELAMAT DATANG"};
    int c;
    double j;
    for(c=0;a[c];c++)
    {
    printf("%c",a[c]);
    for(j=0;j<=9990000;j++)
        {
    }
    }

    printf ("\n");
    char x[]={"DI PROGRAM PENDATAAN MAHASISWA"};
    int y;
    double z;
    for(y=0;x[y];y++)
    {
    printf("%c",x[y]);
    for(z=0;z<=9990000;z++)
        {
    }
    }

    printf ("\n");
    char xx[]={"BUILD V1.0"};
    int yy;
    double zz;
    for(yy=0;xx[yy];yy++)
    {
    printf("%c",xx[yy]);
    for(zz=0;zz<=9990000;zz++)
        {
    }
    }
            printf("\n");
            printf("======================================================================================================================\n");
            printf("\t\t\t\t\t    P I L I H   S A L A H   S A T U \n");
            printf("======================================================================================================================\n");
            printf("\t\t\t\t\t     | 1.  DOSEN                 |\n");
            printf("\t\t\t\t\t     | 2.  MAHASISWA             |\n");
            printf("\t\t\t\t\t     | 3.  DAFTAR AKUN MAHASISWA |\n");
            printf("======================================================================================================================\n");
            printf("\t\t\t\t\t      Anda Akan Masuk Sebagai : ");
            scanf("%d",&akun);

            fflush(stdin);
            switch(akun){
            case 1 : logindosen();break; // Nah ini contohnya : case 1 di isi (void) login dosen , jadi kalo pilih angka 1 program yg jalan adalah login dosen, dibawah ini , baris 78
            case 2 : loginmahasiswaa();break;
            case 3 : registrasi();break;
            }
            }

///////////////////////////////////////////////////////////// LOGIN DOSEN ///////////////////////////////////////////////////////
void logindosen(){ // LOgin dosen pake metode mu, biar campur ga 1 metode aja
        system("cls");
        printf("----------------------------------------------------------------------------------------------------------------------\n");
        printf("=============================================== L O G I N   P A G E ==================================================\n");
        printf("----------------------------------------------------------------------------------------------------------------------\n");
        printf("\t\t\t\t\t   | Masukan Username : ");
        scanf("%s",&usernameadmin);
        printf("\t\t\t\t\t   | Masukan Password : ");
        scanf("%s",&passadmin);
        if(strcmp(usernameadmin,"dosen")==0 && strcmp(passadmin,"123")==0){
            printf("\n\t\t\t\t\t  -  -  -  -  -  -  -  -  -  -  -");
            printf("\n\t\t\t\t\t  Akses Diterima. Selamat Datang.");
            printf("\n\t\t\t\t\t  -  -  -  -  -  -  -  -  -  -  -\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            dosen();
        }
        else{
             printf("\n\t\t\t\t\t -  -  -  -  -  -  -  -  -  -  -  ");
             printf("\n\t\t\t\t        Username dan Password tidak match");
             printf("\n\t\t\t\t\t -  -  -  -  -  -  -  -  -  -  -  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
             system("pause");
             logindosen(); // nah kalo tidak match maka dibawa lagi ke halaman login

        }
    }

//////////////////////////////////////////////////////////// DAFTAR DAN LOGIN MAHASISWA //////////////////////////////////////////////////////////////
struct akun{
    char nama[100], username[100], password[100];
    int nim;
};

struct akun asli, temp[100]; //pendeklarasian struct akun

void registrasi()
{
    system("cls");
    FILE *user;
    user = fopen("datamasuk.txt", "a");

    printf("Masukkan Username   : ");
    gets(asli.username);
    printf("Masukkan Password   : ");
    gets(asli.password);
    printf("Masukkan Nama Asli  : ");
    gets(asli.nama);
    printf("Masukkan NIM Anda   : ");
    scanf("%d", &asli.nim);

    fprintf(user, "%s#%s#%s#%d\n", asli.username, asli.password, asli.nama, asli.nim);
    fclose(user);
    system("cls");
    main();
}

void loginmahasiswaa() // CODINGAN COPYRIGHT BANG PAL ( BANG IJIN PINJEM , DI EDIT KOK HEHE )
{
    system("cls");
    int i, n;
    FILE *user;
    user = fopen("datamasuk.txt", "r");


    i = 0;
    n = 0;

    while(!feof(user))
    {
        fscanf(user, "%[^#]#%[^#]#%[^#]#%d\n", &temp[i].username, &temp[i].password, &temp[i].nama, &temp[i].nim);
        n++;
        i++;
    }
    fclose(user);


    char usernamemhs[100], passwordmhs[100];

    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("=============================================== L O G I N   P A G E ==================================================\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("Masukkan Username : ");
    gets(usernamemhs);
    printf("Masukkan Password : ");
    gets(passwordmhs);
    printf("======================================================================================================================\n");

    int kondisi = 0;

    for(i=0; i<n; i++)
    {
       if(strcmp(usernamemhs, temp[i].username) == 0 && strcmp(passwordmhs, temp[i].password) == 0)
        {
            system("cls");
                        printf("\n\t\t\t\t\t  -  -  -  -  -  -  -  -  -  -  -");
                        printf("\n\t\t\t\t\t  Akses Diterima. Selamat Datang.");
                        printf("\n\t\t\t\t\t  -  -  -  -  -  -  -  -  -  -  -\n");
            printf("======================================================================================================================\n");
            printf("APAKAH INI ANDA ? \n");
            printf("Nama Anda       : %s\n", temp[i].nama);
            printf("NIM  Anda       : %d\n", temp[i].nim);
            printf("======================================================================================================================\n\n");
            printf("Tekan Enter Apabila Akun Anda\n");
            system("pause");

            mahasiswa();

            kondisi = 0;
            break; //Jangan lupa untuk break, karena kalau tidak dia akan kembali pada perulangan ini
        }
    }

    if(kondisi != 0)
    {
        printf("\n\t\t\t\t\t -  -  -  -  -  -  -  -  -  -  -  ");
        printf("\n\t\t\t\t        Username dan Password tidak match");
        system("pause");
    }
        printf("\n\t\t\t\t\t -  -  -  -  -  -  -  -  -  -  -  ");
        printf("\n\t\t\t\t        Username dan Password tidak match\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        loginmahasiswaa();

}

//////////////////////////////////////////////////////////// HITUNGAN NILAI MAHASISWA W/ VOID /////////////////////////////////////////////////////////////
void nilai_mahasiswa(int nim, int nilaiuts,int nilaiuas, int nilaitugas){ // INI BUAT HITUNG NILAI , BIAR IKUT ATURAN DI SYARAT TUBES PADAHAL RIBET


        float nilai_akhir;
        char indeks;
        nilai_akhir=(float)0.4*nilaiuts+0.4*nilaiuas+0.2*nilaitugas;
        if (nilai_akhir>80) indeks='A';
        else if (nilai_akhir>=60)indeks='B';
        else if (nilai_akhir>=50)indeks='C';
        else if (nilai_akhir>=40)indeks='D';
        else indeks='E';
        printf("Nilai Akhir : %.2f\n",nilai_akhir);
        printf("Indeks Nilai : %c\n\n",indeks);
        Datanilai=fopen("DataNilai.txt","a+");
        fprintf(Datanilai,"%d#%d#%d#%d#%.2f#%c#\n\n",nim,nilaiuts,nilaiuas,nilaitugas,nilai_akhir,indeks);
        fclose(Datanilai);
}

//////////////////////////////////////////////////// DEKLARASI ///////////////////////////////////////////////////
    int nilai,TAKMHS; // DEKLARASAI BUAT PROGRAM DOSEN DAN MAHASISWA
    char nama[100][100];
    char kelas[10],username[20],password[20];
    int i,n,pilihan;
    int uts,uas,tgs;
    char anda[20];
    float nilai_akhir;
    char indeks;
    int nim,nilaiuts,nilaiuas,nilaitugas;
    int pildos;
    int absensi,jumlahpertemuan;
    float persenabsensi;
    char c;
    char pesanmhs[1000];
    char tgl[100];
    char pilback;

    ////////////////////////////////////////////// DOSEN ONLY //////////////////////////////////////////////////////
void dosen(){

    system("cls"); //CLOSE
    char a[]={"SELAMAT DATANG . . . .\n"};int c;double j;for(c=0;a[c];c++){printf("%c",a[c]);for(j=0;j<=9990000;j++){}}
    printf("======================================================================================================================\n");
    printf("\t\t\t\t\t             M E N U   D O S E N \n");
    printf("======================================================================================================================\n");
    printf("\t\t\t\t\t| Silahkan Pilih Akses Yang di Inginkan :  |");
    printf("\n");
    printf("\t\t\t\t\t| 1. Akses Data Mahasiswa                  |");
    printf("\n");
    printf("\t\t\t\t\t| 2. Akses Nilai-Nilai                     |");
    printf("\n");
    printf("\t\t\t\t\t| 3. Akses Data TAK Mahasiswa              |");
    printf("\n");
    printf("\t\t\t\t\t| 4. Akses Presensi Mahasiswa              |");
    printf("\n");
    printf("\t\t\t\t\t| 5. Akses Kotak Masuk dari Mahasiswa      |\n");
    printf("\t\t\t\t\t| 6. LOG OUT                               |\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t                  Pilihan : ");scanf("%d",&pilihan);
    printf("\n");
    system("cls");


    switch(pilihan){
    case 1 :    printf("======================================================================================================================\n");
                printf("\t\t\t\t\t\t  1. INPUT DATA\n");
                printf("\t\t\t\t\t\t  2. LIHAT DATA\n");
                printf("======================================================================================================================\n");
                printf("\t\t\t\t\t      MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pildos);

                switch(pildos){
                case 1 :     system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t      INPUT DATA DIRI MAHASISWA\n");
                            printf("----------------------------------------------------------------------------------------------------------------------\n");
                            printf("Masukkan Jumlah Mahasiswa : ");scanf("%d",&n);
                            printf("======================================================================================================================\n");
                            for(i=0;i<n;i++){
                            printf("Mahasiswa Ke -%d\n",i+1);
                            printf("\n");
                            printf("Masukkan Nama : ");fflush(stdin);fgets(nama,100,stdin);
                            printf("Masukkan Kelas : ");fflush(stdin);fgets(kelas,10,stdin);
                            printf("Masukkan NIM : ");scanf("%d",&nim);
                            printf("======================================================================================================================\n");
                            DataMahasiswa=fopen("Datasiswa.txt","a+");
                            fprintf(DataMahasiswa,"%s#%s#%d#\n\n",nama,kelas,nim);
                            fclose(DataMahasiswa);}
                            printf("\n\n*NOTE : Cek dan Fix data di file setelah menambahkan Data Mahasiswa Baru / Update Mahasiswa Lama!\n\n\n");
                            system("pause");dosen();system("cls");

                case 2 :    system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("\t\t\t    = = = DATA YANG DITAMPILKAN : BERDASARKAN WAKTU PENAMBAHAN = = =\n");
                            printf("======================================================================================================================\n");
                            Datanilai=fopen("Datasiswa.txt","r"); //SENGAJA GA DI SORTIR BIAR BISA TAU MANA YANG TERAKHIR KALI DI INPUT
                            while(!feof(Datanilai)){
                            fscanf(Datanilai,"%[^#]#%[^#]#%d#\n\n",&nama,&kelas,&nim);
                            printf("NAMA     : %s",nama);
                            printf("KELAS    : %s",kelas);
                            printf("NIM      : %d\n",nim);
                            printf("======================================================================================================================\n");
                            }fclose(Datanilai);system("pause"); // SAMA KEK CASE 1

                default :   system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("KEMBALI KE HALAMAN AWAL (?) (Y/N) : ");
                            scanf("%s",&pilback);
                            if ((pilback=='Y') || (pilback=='y')){
                                dosen();
                            }
                            else if ((pilback == 'N') || (pilback == 'n')){
                                exit(1);
                            }
                            else printf("PILIHAN TIDAK ADA\n");break;
                };break;

    case 2 :    printf("======================================================================================================================\n");
                printf("\t\t\t\t\t\t  1. INPUT DATA\n");
                printf("\t\t\t\t\t\t  2. LIHAT DATA\n");
                printf("======================================================================================================================\n");
                printf("\t\t\t\t\t      MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pildos);
                switch (pildos){
                case 1 :    system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t       INPUT  NILAI  MAHASISWA\n");
                            printf("----------------------------------------------------------------------------------------------------------------------\n");
                            printf("Masukkan Jumlah Mahasiswa : ");scanf("%d",&n);
                            printf("\n");
                            for(i=0;i<n;i++){
                            printf("======================================================================================================================\n");
                            printf("Mahasiswa Ke -%d\n",i+1);
                            printf("Masukkan NIM         : ");scanf("%d",&nim);
                            printf("Masukkan Nilai UTS   : ");scanf("%d",&uts);
                            printf("Masukkan Nilai UAS   : ");scanf("%d",&uas);
                            printf("Masukkan Nilai Tugas : ");scanf("%d",&tgs);
                            nilai_mahasiswa(nim,uts,uas,tgs);
                            printf("======================================================================================================================\n");
                            }system("pause");dosen();system("cls");

                case 2 :    system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t       NILAI YANG SUDAH TERSIMPAN\n");
                            printf("\t\t\t    = = = DATA YANG DITAMPILKAN : BERDASARKAN WAKTU PENAMBAHAN = = =\n");
                            Datanilai=fopen("DataNilai.txt","r"); // BUAT LIHAT
                            while(!feof(Datanilai)){
                            fscanf(Datanilai,"%d#%d#%d#%d#%f#%[^#]#\n\n",&nim,&nilaiuts,&nilaiuas,&nilaitugas,&nilai_akhir,&indeks);
                            printf("======================================================================================================================\n");
                            printf("NIM           : %d\n",nim);
                            printf("Nilai UTS     : %d\n",nilaiuts);
                            printf("Nilai UAS     : %d\n",nilaiuas);
                            printf("Nilai Tugas   : %d\n",nilaitugas);
                            printf("Nilai Akhir   : %.2f\n",nilai_akhir);
                            printf("Indeks Nilai  : %c\n",indeks);
                            printf("======================================================================================================================\n");
                            }fclose(Datanilai);system("pause"); // SAMA KEK CASE 1

                default :   system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("KEMBALI KE HALAMAN AWAL (?) (Y/N) : ");
                            scanf("%s",&pilback);
                            if ((pilback=='Y') || (pilback=='y')){
                                dosen();
                            }
                            else if ((pilback == 'N') || (pilback == 'n')){
                                exit(1);
                            }
                            else printf("PILIHAN TIDAK ADA\n");break;
                            };break;

    case 3 :    printf("======================================================================================================================\n");
                printf("\t\t\t\t\t\t  1. INPUT DATA\n");
                printf("\t\t\t\t\t\t  2. LIHAT DATA\n");
                printf("======================================================================================================================\n");
                printf("\t\t\t\t\t      MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pildos);
                switch (pildos){
                case 1 :    system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t       INPUT  T A K  MAHASISWA\n");
                            printf("----------------------------------------------------------------------------------------------------------------------\n");
                            printf("Masukkan Jumlah Mahasiswa : ");scanf("%d",&n);
                            for(i=0;i<n;i++){
                            printf("======================================================================================================================\n");
                            printf("Mahasiswa Ke -%d\n",i+1);
                            printf("Masukkan NIM                 : ");scanf("%d",&nim);
                            printf("Masukkan Jumlah TAK Mahasiswa : ");scanf("%d",&TAKMHS);
                            if (TAKMHS<60){
                            printf("\nNOTE : TAK ANDA MASIH KURANG\n");}
                            else{ printf("\nNOTE : TAK ANDA SUDAH MENCUKUPI\n");}
                            printf("======================================================================================================================\n");
                            DATATAKMHS=fopen("DataTAK.txt","a+");
                            fprintf(DATATAKMHS,"%d#%d\n\n",nim,TAKMHS);
                            fclose(DATATAKMHS);}system("pause");dosen();system("cls");

                case 2 :    system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t      DATA TAK YANG SUDAH TERSIMPAN\n");
                            printf("\t\t\t    = = = DATA YANG DITAMPILKAN : BERDASARKAN WAKTU PENAMBAHAN = = =\n");
                            DATATAKMHS=fopen("DataTAK.txt","r");
                            while(!feof(DATATAKMHS)){
                            fscanf(DATATAKMHS,"%d#%d\n\n",&nim,&TAKMHS);
                            printf("======================================================================================================================\n");
                            printf("NIM         : %d\n",nim);
                            printf("Jumlah TAK  : %d\n",TAKMHS);
                            if (TAKMHS<60){
                            printf("\nNOTE : TAK ANDA MASIH KURANG\n");}
                            else {printf("\nNOTE : TAK ANDA SUDAH MENCUKUPI\n");}
                            printf("======================================================================================================================\n");
                            }fclose(DATATAKMHS);system("pause");

                default :   system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("KEMBALI KE HALAMAN AWAL (?) (Y/N) : ");
                            scanf("%s",&pilback);
                            if ((pilback=='Y') || (pilback=='y')){
                                dosen();
                            }
                            else if ((pilback == 'N') || (pilback == 'n')){
                                exit(1);
                            }
                            else printf("PILIHAN TIDAK ADA\n");break;
                            };break;

    case 4 :    printf("======================================================================================================================\n");
                printf("\t\t\t\t\t\t  1. INPUT DATA\n");
                printf("\t\t\t\t\t\t  2. LIHAT DATA\n");
                printf("======================================================================================================================\n");
                printf("\t\t\t\t\t      MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pildos);
                switch (pildos){
                case 1 :    system("cls");
                             printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t      INPUT PRESENSI MAHASISWA\n");
                            printf("----------------------------------------------------------------------------------------------------------------------\n");
                            printf("Masukkan Jumlah Mahasiswa : ");scanf("%d",&n);
                            for(i=0;i<n;i++){
                            printf("======================================================================================================================\n");
                            printf("Mahasiswa Ke -%d\n",i+1);printf("\n");
                            printf("Masukkan Jumlah pertemuan : ");scanf("%d",&jumlahpertemuan);
                            printf("Masukkan NIM : ");scanf("%d",&nim);
                            printf("Masukkan Jumlah Kehadiran Mahasiswa : ");scanf("%d",&absensi);
                            persenabsensi=(float)absensi*100/jumlahpertemuan;
                            printf("Absensi Anda : %.2f Persen\n",persenabsensi);
                            if (persenabsensi<=70){
                            printf("NOTE : ANDA HARUS MENGULANG MATA KULIAH INI\n");}
                            else printf("NOTE : ANDA SUDAH LULUS KARENA ABSENSI DIATAS 70 PERSEN\n");
                            printf("======================================================================================================================\n");
                            Jumlahabsensi=fopen("jumlahabsensi.txt","a+");
                            fprintf(Jumlahabsensi,"%d#%d#%d#%.2f#\n\n",nim,absensi,jumlahpertemuan,persenabsensi);
                            fclose(Jumlahabsensi);}system("pause");dosen();system("cls");

                case 2 :    system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t      PRESENSI YANG SUDAH TERSIMPAN\n");
                            printf("\t\t\t    = = = DATA YANG DITAMPILKAN : BERDASARKAN WAKTU PENAMBAHAN = = =\n");
                            Jumlahabsensi=fopen("jumlahabsensi.txt","r");
                            while(!feof(Jumlahabsensi)){
                            fscanf(Jumlahabsensi,"%d#%d#%d#%f#\n\n",&nim,&absensi,&jumlahpertemuan,&persenabsensi);
                            printf("======================================================================================================================\n");
                            printf("NIM : %d\n",nim);
                            printf("Jumlah Kehadiran: %d\n",absensi);
                            printf("Jumlah Pertemuan Dosen : %d\n",jumlahpertemuan);
                            printf("Persentase : %.2f Persen\n",persenabsensi);
                            if (persenabsensi<=70){
                            printf("PESAN : ANDA HARUS MENGULANG MATA KULIAH INI\n\n");}
                            else printf("PESAN : ANDA SUDAH LULUS KARENA ABSENSI DIATAS 70%\n\n");
                            printf("======================================================================================================================\n");
                            }fclose(Jumlahabsensi);system("pause");

                default :   system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("KEMBALI KE HALAMAN AWAL (?) (Y/N) : ");
                            scanf("%s",&pilback);
                            if ((pilback=='Y') || (pilback=='y')){
                                dosen();
                            }
                            else if ((pilback == 'N') || (pilback == 'n')){
                                exit(1);
                            }
                            else printf("PILIHAN TIDAK ADA\n");break;
                            };break;


    case 5  :               printf("\n======================================================================================================================\n");
                            printf("\t\t\t\t\t      PESAN DARI MAHASISWA ANDA\n");
                            printf("\t\t\t    = = = DATA YANG DITAMPILKAN : BERDASARKAN WAKTU PENAMBAHAN = = =\n");
                            pesan=fopen("PesanDariMahasiswa.txt","r+");
                            while(!feof(pesan)){
                            fscanf(pesan,"%[^#]#%d#%[^#]#\n",&tgl,&nim,&pesanmhs);
                            printf("\n======================================================================================================================\n");
                            printf("\nTanggal dan Bulan : %s\n",tgl);
                            printf("NIM pengirim : %d\n",nim);
                            printf("Isi Pesan : %s",pesanmhs);
                            printf("\n======================================================================================================================\n");
                            }fclose(pesan);system("pause");

                            system("cls");
                            printf("\n======================================================================================================================\n");
                            printf("KEMBALI KE HALAMAN AWAL (?) (Y/N) : ");
                            scanf("%s",&pilback);
                            if ((pilback=='Y') || (pilback=='y')){
                                dosen();
                            }
                            else if ((pilback == 'N') || (pilback == 'n')){
                                exit(1);
                            }
                            else printf("PILIHAN TIDAK ADA\n");break;
    default : main();
    }
    return 0;
}

////////////////////////////////// MAHASISWA ONLY //////////////////////////////////////////
void mahasiswa(){ // NAH INI BUAT MAHASISWA MIRIP SAMA DOSEN TAPI CUMAN 1 PILIHAN AJA
        system("cls");
    char a[]={"SELAMAT DATANG . . . .\n"};int c;double j;for(c=0;a[c];c++){printf("%c",a[c]);for(j=0;j<=9990000;j++){}}
    printf("======================================================================================================================\n");
    printf("\t\t\t\t\t        M E N U   M A H A S I S W A \n");
    printf("======================================================================================================================\n");
    printf("\t\t\t\t\t| Silahkan Pilih Akses Yang di Inginkan :  |");
    printf("\n");
    printf("\t\t\t\t\t| 1. Akses Data Diri Mahasiswa             |");
    printf("\n");
    printf("\t\t\t\t\t| 2. Akses Nilai-Nilai Mahasiswa           |");
    printf("\n");
    printf("\t\t\t\t\t| 3. Akses Data TAK Mahasiswa              |");
    printf("\n");
    printf("\t\t\t\t\t| 4. Akses Presensi Mahasiswa              |");
    printf("\n");
    printf("\t\t\t\t\t| 5. Kirim Pesan / Masukan Ke Dosen        |\n");
    printf("\t\t\t\t\t| 6. LOG OUT                               |\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t                  Pilihan : ");scanf("%d",&pilihan);
    printf("\n");
    system("cls");


    switch(pilihan){
    case 1  :   lihatdata();break;
    case 2  :   lihatdatanilai();break;
    case 3  :   lihatTAKmahasiswa();break;
    case 4  :   absensimahasiswa();break;
    case 5  :   pesanmahasiswa();break;
    default :   main();break;
    }
}


void lihatdata(){
    int pilmhs;
    int i,n;
    struct mahasiswa{
    char nama[50];
    char kelas[50];
    } Mhs[20];
    int cari;
    int nim[20];
    int pass,temp;
    char temp1[50];
    char temp2[50];


                printf("======================================================================================================================\n");
                printf("1. LIHAT DATA KESELURUHAN\n");
                printf("2. CARI DATA ANDA\n");
                printf("======================================================================================================================\n");
                printf("MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pilmhs);
                printf("======================================================================================================================\n");

        switch (pilmhs){
                case 1 :    system("cls");
                printf("====================================== D A T A   D I R I   M A H A S I S W A  ======================================\n");
                printf("============================================ Diurutkan Berdasarkan NIM ! ============================================\n");
                            i=0; n=0;
                            DataMahasiswa=fopen("Datasiswa.txt","r+");
                            while(!feof(DataMahasiswa)){
                                    fscanf(DataMahasiswa,"%[^#]#%[^#]#%d#\n\n",&Mhs[i].nama,&Mhs[i].kelas,&nim[i]);
                                    i++;
                                    n++;
                            }
                            for(pass=1; pass<n; ++pass){
                                for(i=0; i<n-1; ++i){
                                    if(nim[i+1]<nim[i]){
                                        temp=nim[i];
                                        nim[i]=nim[i+1];
                                        nim[i+1]=temp;


                strcpy(temp1,Mhs[i].nama);
                strcpy(Mhs[i].nama,Mhs[i+1].nama);
                strcpy(Mhs[i+1].nama,temp1);


                strcpy(temp2,Mhs[i].kelas);
                strcpy(Mhs[i].kelas,Mhs[i+1].kelas);
                strcpy(Mhs[i+1].kelas,temp2);
                                    }
                                }
                            }

                            for(i=0; i<n; i++){
                                printf("======================================================================================================================\n");
                                printf("\t\tMAHASISWA KE-%d\n",i+1);
                                printf("NAMA  : %s",Mhs[i].nama);
                                printf("KELAS : %s",Mhs[i].kelas);
                                printf("NIM   : %d\n",nim[i]);
                                printf("======================================================================================================================\n");
                            }
                            fclose(DataMahasiswa);system("pause");mahasiswa();

                    case 2 : system("cls");
                             cari_mahasiswa=fopen("Datasiswa.txt","r+");
                             printf("====================================== C A R I   D A T A   D I R I   A N D A =========================================\n");
                             printf("======================================================================================================================\n");
                             printf("MASUKKAN NIM ANDA : ");
                             scanf("%d",&cari);
                             i=0; n=0;

                             while(!feof(cari_mahasiswa)){
                             fscanf(cari_mahasiswa,"%[^#]#%[^#]#%d#\n\n",&Mhs[i].nama,&Mhs[i].kelas,&nim[i]);
                             i++;
                             n++;
                             }
                             fclose(cari_mahasiswa);
                             for(i=0; i<n; i++){

                             if(cari==nim[i]){
                             printf("\n");
                             printf("======================================================================================================================\n");
                             printf("========================================== D A T A   D I R I   A N D A ===============================================\n");
                             printf("NAMA  : %s",Mhs[i].nama);
                             printf("KELAS : %s",Mhs[i].kelas);
                             printf("NIM   : %d\n",nim[i]);
                             printf("======================================================================================================================\n");
                             printf("\n");
                             system("pause");mahasiswa();
                            }

                            }
                            if(cari!=nim[i]){
                            printf("======================================================================================================================\n");
                            printf("\t                                               TIDAK DITEMUKAN !!!\n");
                            printf("======================================================================================================================\n");
                            system("pause");mahasiswa();

                    }
                }
            }

void lihatdatanilai(){ //MASIH ERROR GEGARA DALEM VOID RUMUSNYA
    int pilmhs;
    int i,n;
    struct mahasiswa{
    char indeks[50];
    } Mhs[20];
    int cari;
    int nim[20];
    int pass,temp,temp2,temp3,temp4;
    float temp5;
    char temp1[50];
    int nilaiuts[50];
    int nilaiuas[50];
    int nilaitugas[50];
    float nilai_akhir[50];



                printf("======================================================================================================================\n");
                printf("1. LIHAT DATA KESELURUHAN\n");
                printf("2. CARI DATA ANDA\n");
                printf("======================================================================================================================\n");
                printf("MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pilmhs);
                printf("======================================================================================================================\n");

        switch (pilmhs){
                case 1 :    system("cls");
                printf("======================================================================================================================\n");
                printf("====================================== D A T A   N I L A I   M A H A S I S W A  ======================================\n");
                printf("============================================= Diurutkan Berdasarkan NIM ! ============================================\n");
                            i=0; n=0;
                            Datanilai=fopen("DataNilai.txt","r+");
                            while(!feof(Datanilai)){
                                    fscanf(Datanilai,"%d#%d#%d#%d#%f#%[^#]#\n\n",&nim[i],&nilaiuts[i],&nilaiuas[i],&nilaitugas[i],&nilai_akhir[i],&Mhs[i].indeks);
                                    i++;
                                    n++;
                            }
                            for(pass=1; pass<n; ++pass){
                                for(i=0; i<n-1; ++i){
                                    if(nim[i+1]<nim[i]){
                                        temp=nim[i];
                                        nim[i]=nim[i+1];
                                        nim[i+1]=temp;

                                        temp2=nilaiuts[i];
                                        nilaiuts[i]=nilaiuts[i+1];
                                        nilaiuts[i+1]=temp2;

                                        temp3=nilaiuas[i];
                                        nilaiuas[i]=nilaiuas[i+1];
                                        nilaiuas[i+1]=temp3;

                                        temp4=nilaitugas[i];
                                        nilaitugas[i]=nilaitugas[i+1];
                                        nilaitugas[i+1]=temp4;

                                        temp5=nilai_akhir[i];
                                        nilai_akhir[i]=nilai_akhir[i+1];
                                        nilai_akhir[i+1]=temp5;

                                        strcpy(temp1,Mhs[i].indeks);
                                        strcpy(Mhs[i].indeks,Mhs[i+1].indeks);
                                        strcpy(Mhs[i+1].indeks,temp1);

                                    }
                                }
                            }

                            for(i=0; i<n; i++){
                                printf("======================================================================================================================\n");
                                printf("\t\tMAHASISWA KE-%d\n",i+1);
                                printf("NIM             : %d\n",nim[i]);
                                printf("Nilai UTS       : %d\n",nilaiuts[i]);
                                printf("Nilai UAS       : %d\n",nilaiuas[i]);
                                printf("Nilai TUGAS     : %d\n",nilaitugas[i]);
                                printf("Nilai AKHIR     : %.2f\n",nilai_akhir[i]);
                                printf("Indeks Nilai    : %s \n",Mhs[i].indeks);
                                printf("======================================================================================================================\n");
                            }
                            fclose(Datanilai);system("pause");mahasiswa();

                    case 2 : system("cls");
                             Datanilai=fopen("DataNilai.txt","r+");
                             printf("========================================== C A R I  N I L A I  A N D A ===============================================\n");
                             printf("MASUKKAN NIM ANDA : ");
                             scanf("%d",&cari);
                             i=0; n=0;

                             while(!feof(Datanilai)){
                             fscanf(Datanilai,"%d#%d#%d#%d#%f#%[^#]#\n\n",&nim[i],&nilaiuts[i],&nilaiuas[i],&nilaitugas[i],&nilai_akhir[i],&Mhs[i].indeks);
                             i++;
                             n++;
                             }
                             fclose(Datanilai);
                             for(i=0; i<n; i++){

                             if(cari==nim[i]){
                             printf("\n");
                             printf("======================================================================================================================\n");
                             printf("========================================== D A T A  N I L A I  A N D A ===============================================\n");
                                printf("NIM             : %d\n",nim[i]);
                                printf("Nilai UTS       : %d\n",nilaiuts[i]);
                                printf("Nilai UAS       : %d\n",nilaiuas[i]);
                                printf("Nilai TUGAS     : %d\n",nilaitugas[i]);
                                printf("Nilai AKHIR     : %.2f\n",nilai_akhir[i]);
                                printf("Indeks Nilai    : %s \n",Mhs[i].indeks);
                             printf("======================================================================================================================\n");
                             printf("\n");
                             system("pause");mahasiswa();
                            }

                            }
                            if(cari!=nim[i]){
                            printf("======================================================================================================================\n");
                            printf("\t                                               TIDAK DITEMUKAN !!!\n");
                            printf("======================================================================================================================\n");
                            system("pause");mahasiswa();

                                }
                }fclose(Datanilai);system("pause");mahasiswa();
    }

void lihatTAKmahasiswa(){
    int pilmhs;
    int i,n;
    int cari;
    int nim[20];
    int pass,temp,temp2;
    float temp5;
    int TAKMHS[50];



                printf("======================================================================================================================\n");
                printf("1. LIHAT DATA KESELURUHAN\n");
                printf("2. CARI DATA ANDA\n");
                printf("======================================================================================================================\n");
                printf("MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pilmhs);
                printf("======================================================================================================================\n");

        switch (pilmhs){
                case 1 :    system("cls");
                printf("======================================================================================================================\n");
                printf("========================================= D A T A   T A K   M A H A S I S W A  ======================================\n");
                printf("============================================= Diurutkan Berdasarkan NIM ! ============================================\n");
                            i=0; n=0;
                            DATATAKMHS=fopen("DataTAK.txt","r+");
                            while(!feof(DATATAKMHS)){
                                    fscanf(DATATAKMHS,"%d#%d\n\n",&nim[i],&TAKMHS[i]);
                                    i++;
                                    n++;
                            }
                            for(pass=1; pass<n; ++pass){
                                for(i=0; i<n-1; ++i){
                                    if(nim[i+1]<nim[i]){
                                        temp=nim[i];
                                        nim[i]=nim[i+1];
                                        nim[i+1]=temp;

                                        temp2=TAKMHS[i];
                                        TAKMHS[i]=TAKMHS[i+1];
                                        TAKMHS[i+1]=temp2;



                                    }
                                }
                            }

                            for(i=0; i<n; i++){
                                printf("======================================================================================================================\n");
                                printf("\t\tMAHASISWA KE-%d\n",i+1);
                                printf("NIM             : %d\n",nim[i]);
                                printf("JUMLAH TAK      : %d\n",TAKMHS[i]);
                                if (TAKMHS<60){
                                printf("\nTAK ANDA MASIH KURANG (BELUM MENCUKUPI)\n");}
                                else {printf("\nSELAMAT, TAK ANDA SUDAH MENCUKUPI\n");}
                                printf("======================================================================================================================\n");
                            }
                            fclose(DATATAKMHS);system("pause");mahasiswa();

                    case 2 : system("cls");
                             DATATAKMHS=fopen("DataTAK.txt","r+");
                             printf("======================================= C A R I  J U M L A H   T A K  A N D A ==========================================\n");
                             printf("MASUKKAN NIM ANDA : ");
                             scanf("%d",&cari);
                             i=0; n=0;

                             while(!feof(DATATAKMHS)){
                             fscanf(DATATAKMHS,"%d#%d\n\n",&nim[i],&TAKMHS[i]);
                             i++;
                             n++;
                             }
                             fclose(DATATAKMHS);
                             for(i=0; i<n; i++){

                             if(cari==nim[i]){
                             printf("\n");
                             printf("======================================================================================================================\n");
                             printf("============================================ D A T A  T A K  A N D A =================================================\n");
                                                                    printf("NIM             : %d\n",nim[i]);
                                                                    printf("JUMLAH TAK      : %d\n",TAKMHS[i]);
                                                                    if (TAKMHS<60){
                                                                    printf("\nTAK ANDA MASIH KURANG (BELUM MENCUKUPI)\n");}
                                                                    else {printf("\nSELAMAT, TAK ANDA SUDAH MENCUKUPI\n");}
                             printf("======================================================================================================================\n");
                             printf("\n");
                             system("pause");mahasiswa();
                            }

                            }
                            if(cari!=nim[i]){
                            printf("======================================================================================================================\n");
                            printf("\t                                               TIDAK DITEMUKAN !!!\n");
                            printf("======================================================================================================================\n");
                            system("pause");mahasiswa();

                                }

        }fclose(DATATAKMHS);system("pause");mahasiswa();

    }

void absensimahasiswa(){

    int pilmhs;
    int i,n;
    int cari;
    int nim[20],absensi[20],jumlahpertemuan[20];
    float persenabsensi[20];
    int pass,temp,temp1,temp3,temp4;
    float temp2;
    int TAKMHS[50];



                printf("======================================================================================================================\n");
                printf("1. LIHAT DATA KESELURUHAN\n");
                printf("2. CARI DATA ANDA\n");
                printf("======================================================================================================================\n");
                printf("MASUKKAN PILIHAN ANDA : ");
                scanf("%d",&pilmhs);
                printf("======================================================================================================================\n");

        switch (pilmhs){
                case 1 :    system("cls");
                printf("======================================================================================================================\n");
                printf("========================================= D A T A   T A K   M A H A S I S W A  ======================================\n");
                printf("============================================= Diurutkan Berdasarkan NIM ! ============================================\n");
                            i=0; n=0;
                            Jumlahabsensi=fopen("jumlahabsensi.txt","r+");
                            while(!feof(Jumlahabsensi)){
                                    fscanf(Jumlahabsensi,"%d#\n%d#\n%d#\n%f#\n\n",&nim[i],&absensi[i],&jumlahpertemuan[i],&persenabsensi[i]);
                                    i++;
                                    n++;
                            }
                            for(pass=1; pass<n; ++pass){
                                for(i=0; i<n-1; ++i){
                                    if(nim[i+1]<nim[i]){
                                        temp=nim[i];
                                        nim[i]=nim[i+1];
                                        nim[i+1]=temp;

                                        temp3=absensi[i];
                                        absensi[i]=absensi[i+1];
                                        absensi[i+1]=temp;

                                        temp4=jumlahpertemuan[i];
                                        jumlahpertemuan[i]=jumlahpertemuan[i+1];
                                        jumlahpertemuan[i+1]=temp4;

                                        temp2=persenabsensi[i];
                                        persenabsensi[i]=persenabsensi[i+1];
                                        persenabsensi[i+1]=temp2;



                                    }
                                }
                            }

                            for(i=0; i<n; i++){
                                printf("======================================================================================================================\n");
                                printf("\t\tMAHASISWA KE-%d\n",i+1);
                                printf("NIM                             : %d\n",nim[i]);
                                printf("JUMLAH KEHADIRAN MAHASISWA      : %d Pertemuan\n",absensi[i]);
                                printf("JUMLAH PERTEMUAN DOSEN          : %d\n",jumlahpertemuan[i]);
                                printf("PERSENTASE ABSENSI              : %.2f Persen\n",persenabsensi[i]);
                                if (persenabsensi<=70){
                                printf("NOTE : ANDA HARUS MENGULANG MATA KULIAH INI\n\n");}
                                else printf("NOTE : ANDA SUDAH LULUS KARENA ABSENSI DIATAS 70%\n\n");
                                printf("======================================================================================================================\n");
                            }
                            fclose(Jumlahabsensi);system("pause");mahasiswa();

                    case 2 : system("cls");
                             Jumlahabsensi=fopen("jumlahabsensi.txt","r+");
                             printf("=============================== C A R I  J U M L A H   K E H A D I R A N   A N D A ==================================\n");
                             printf("MASUKKAN NIM ANDA : ");
                             scanf("%d",&cari);
                             i=0; n=0;

                             while(!feof(Jumlahabsensi)){
                             fscanf(Jumlahabsensi,"%d#\n%d#\n%d#\n%f#\n\n",&nim[i],&absensi[i],&jumlahpertemuan[i],&persenabsensi[i]);
                             i++;
                             n++;
                             }
                             fclose(Jumlahabsensi);
                             for(i=0; i<n; i++){

                             if(cari==nim[i]){
                             printf("\n");
                             printf("======================================================================================================================\n");
                             printf("=================================== D A T A   K E H A D I R A N   A N D A ============================================\n");
                                printf("NIM                             : %d\n",nim[i]);
                                printf("JUMLAH KEHADIRAN MAHASISWA      : %d Pertemuan\n",absensi[i]);
                                printf("JUMLAH PERTEMUAN DOSEN          : %d\n",jumlahpertemuan[i]);
                                printf("PERSENTASE ABSENSI              : %.2f Persen\n",persenabsensi[i]);
                                if (persenabsensi<=70){
                                printf("PESAN : ANDA HARUS MENGULANG MATA KULIAH INI\n\n");}
                                else printf("PESAN : ANDA SUDAH LULUS KARENA ABSENSI DIATAS 70%\n\n");
                             printf("======================================================================================================================\n");
                             printf("\n");
                             system("pause");mahasiswa();
                            }

                            }
                            if(cari!=nim[i]){
                            printf("======================================================================================================================\n");
                            printf("\t                                               TIDAK DITEMUKAN !!!\n");
                            printf("======================================================================================================================\n");
                            system("pause");mahasiswa();

                                }

        }fclose(Jumlahabsensi);system("pause");mahasiswa();
}

void pesanmahasiswa(){
    fflush(stdin);
    system("cls");
    printf("======================================================================================================================\n");
    printf("============================================= K I R I M   P E S A N ==================================================\n");
    printf("Masukkan Tanggal dan Bulan  : ");gets(tgl);
    printf("Masukkan NIM anda           : ");scanf("%d",&nim);
   printf("======================================================================================================================\n");
    printf("PESAN : \n");fflush(stdin);gets(pesanmhs);
    printf("======================================================================================================================\n");
    printf("                                             PESAN - BERHASIL DIKIRIM\n");
    printf("======================================================================================================================\n\n");
    pesan=fopen("PesanDariMahasiswa.txt","a+");
    fprintf(pesan,"%s#%d#%s#\n",tgl,nim,pesanmhs);
    fclose(pesan);system("\t\tpause");mahasiswa();system("cls");
}





