#include <stdio.h>

int main()
{
    int tanggal,bulan,tahun,thn,bln,hari,a,b,c;
    char jawab;
    
    printf(" \n");
    printf("      MENGHITUNG UMUR - PROGRAM C\n");
    printf("     -------------------------------------------\n");
    
    do
    {
        printf("    TANGGAL LAHIR ANDA = ");
        scanf("%d", &tanggal);
        printf("    BULAN LAHIR ANDA = ");
        scanf("%d", &bulan);
        printf("    TAHUN LAHIR ANDA = ");
        scanf("%d", &tahun);
        printf("    TANGGAL SEKARANG = ");
        scanf("%d", &hari);
        printf("    BULAN SEKARANG = ");
        scanf("%d", &bln);
        printf("    TAHUN SEKARANG = ");
        scanf("%d", &thn);
        
        a=(hari-tanggal);
        b=(bln-bulan);
        c=(thn-tahun);
        
        printf ("   UMUR ANDA ADALAH %d TAHUN %d BULAN %d HARI\n", c, b, a);
        printf("    ANDA INGIN COBA LAGI? [Y/N] = ");
        scanf(" %c", &jawab);
    }
    while (jawab=='y' || jawab=='Y');
    return 0;
}
