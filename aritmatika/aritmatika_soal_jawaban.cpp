#include <conio.h>
#include <iostream>
#includ <string> //pakai e jadi include

using namespace std;

int main() {

        int bil1,bil2, pil;
        float hasil;
        string operasi // pakai ;
        
        cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
        cout<<"1. Penjumlahan"<<endl;
        cout<<"2. Pengurangan"<<endl;
        cout<<"3. Perkalian"<<endl;
        cout<<"4. Pembagian"<<endl;
        cout<<"5. Modus"<<endl;
        cout<<endl;
        
        cout<<"Masukkan Pilihan : ";
        cin>>pil;
        cout<<"Masukkan Bilangan pertama : ";
        cin>>bil1;
        cout<<"Masukkan Bilangan kedua : ";
        cin>>bil2;
        
        switch(Pil){ //typo di P harusnya p kecil
            Case 1 : hasil=bil1+bil2; //typo C harusnya c kecil
                operasi='+';
                break;
            case 2 : hasil=bil1-bil2;
                operasi='-';
                break;
            Case 3 : hasil=bil1*bil2; //typo C harusnya c kecil
                operasi='*';
                break;
            case 4 : hasil=bil1/bil2;
                operasi='/';
                break;
            Case 5 : hasil=bil1%bil2; //typo C harusnya c kecil
                operasi='%';
                break;
            default :
                    cout<<"Salah Masukan Operator"<<endl;
    }
    Cout<<"-----------------------------"<<endl; //salah di C, harusnya c kecil
    cout<<"    "<<bil2<<operasi<<bil2<<"="<<hasil<<endl; //salah di "    " harusnya ga dipake, sama <<bil2 harusnya bil1
    cout<<"-----------------------------"<<endl;
    
    gech(); //harusnya getch();
}