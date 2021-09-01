# include <stdio.h>
# include <iostream>
# include <conio.h>
using namespace std;
int main()
{
char nama[25],*Grade;
float nk,nt,nu,nmk,nmt,nmu,nma,na;
cout<<"Program Hitung Nilai Akhir Siswa"<<endl<<endl;
cout<<" Masukkan Nama Siswa : ";gets(nama);
cout<<" Nilai Kehadiran : ";cin>>nk;
cout<<" Nilai Tugas : ";cin>>nt;
cout<<" Nilai UTS : ";cin>>nu;
cout<<" Nilai UAS : ";cin>>na;
nmk=nk*2;
nmt=nt*3;
nmu=nu*2;
nma=na*3;
na=nmk+nmt+nmu+nma/10;
if(na>=80)
{
Grade="A";
}
else if (na>=80 and na<85)
{
Grade="A-";
}
else if (na>=75 and na<80)
{
Grade="B+";
}
else if (na>=70 and na<75)
{
Grade="B-";
}
else if (na>=65 and na<70)
{
Grade="B";
}
else if (na>=60 and na<65)
{
Grade="C+";
}
else if (na>=55 and na<60)
{
Grade="C";
}
else if (na>=40 and na<55)
{
Grade="D";
}
else
{
Grade="E";
}
cout<<endl;
cout<<" Siswa Yang Bernama "<<nama<<endl;
cout<<" Dengan nilai presentase yang dihasilkan"<<endl;
cout<<" Nilai Murni Keaktifan x 20% : "<<nmk<<endl;
cout<<" Nilai Murni Tugas x 30% : "<<nmt<<endl;
cout<<" Nilai Murni UTS x 20% : "<<nmu<<endl;
cout<<" Nilai Murni UAS x 30% : "<<nma<<endl;
cout<<" Memperoleh Nilai Akhir Sebesar : "<<na<<endl;
cout<<" Grade yang di dapat : "<<Grade<<endl;
getch();
}
