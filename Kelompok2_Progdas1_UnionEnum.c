//program menentukan drinking age seorang
#include <stdio.h>

//enum ini digunakan sebagai boolean, true = 1 dan false = 0;
enum Bool{False, True};

//union ini digunakan untuk menginput nama dan umur orang tanpa membuang memori
union Person{
    char name[50];
    int age;
};

enum Bool check_age(int age){
    return age >= 21 ? True : False;
}

int main(){
    
    union Person orang;
    int umurKurang;//umur seorang yang kurang untuk meminum

    printf ("************************Please Enter Input************************\n"
            "| \n"
            "| Masukkan umur: ");
    scanf ("%d", &orang.age);
    umurKurang = check_age(orang.age) ? 0 : 21 - orang.age; //menentukan umur yang kurang untuk dapat meminum
    printf ("| Masukkan nama: ");
    getchar();//ini sebagai buffer agar dapat input nama
    gets(orang.name);
    printf ("| \n"
            "******************************************************************\n");
    
    printf ("==================================================================\n"
            "| \n"
            "| Nama = %s\n", orang.name);
    //jika umurKurang 0, akan ke print yang pertama, jika umur tidak 0, akan ke print yang kedua dengan umur yang kurangnya        
    !umurKurang ? printf ("| anda dapat meminum secara legal\n") : printf ("| anda masih butuh %d tahun untuk minum\n", umurKurang);
    printf ("| \n"
            "==================================================================\n");
    
    return 0;
}