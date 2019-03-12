#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
char nim[15], nama [20], jenis_kelamin[5], jurusan [8] ;
int main()
{
int data[5];
int i, total, rata, tmp;

cout<<"Input Data Mahasiswa Universitas Swasta Yogyakarta \n"<<endl;
cout<<"============================================"<<endl;
                cout<<"NIM :";gets(nim);
                cout<<"Nama Lengkap :";gets(nama);
                cout<<"Jenis Kelamin :";gets(jenis_kelamin);
                cout<<"Jurusan :";gets(jurusan);
                cout<<"============================================"<<endl;
                cout<<"Masukkan Nilai Harian siswa : "<<endl;
                    total=0;
                    for(i=0; i<3; i++)
                    {
                    cout<<"Masukkan angka ke-"<<(i+1)<<" : "; cin>>data[i];
                    total = total+data[i];
                    }
                cout<<endl;
                cout<<"============================================"<<endl;

                        cout<<"Siswa yang bernama "<<nama<<" mempunyai nilai sebagai berikut :"<<endl;
                                for(i=0;i<3;i++){
                                                cout<<"["<<(0)<<" "<<(i)<<" ] : "<< data [i]<<" "<<endl; }
                                cout<<"============================================"<<endl;
                                cout<<"\nRata-rata "<<nama<<":"<<endl;
                                {
                                    rata = total / 3;
                                    cout<<"Total : "<<total<<endl;
                                    cout<<"Rata - Rata : "<<rata<<endl;
                                }


    getch();

}
