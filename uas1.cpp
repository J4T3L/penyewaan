#include <iostream>

using namespace std;

struct booking
{
	char nama[10][10], tgl[10][10], jam[10][10];
    int jml, lama[10], tot, menu, harga[10];
}book;

void header(){
    cout<<"================================"<<endl;
    cout<<"program penyewaan "<<endl;
    cout<<"================================"<<endl;
}

void plh(){
	cout<<"1.Penyewaan"<<endl;
	cout<<"2.Lihat daftar penyewa"<<endl;
	cout<<"3.Keluar"<<endl;
}

int main(){
	do {
		bck:
		header();
		plh();
		cout<<"pilih menu :";
		cin>>book.menu;
		
		switch (book.menu){
		case 1:
			(book.menu == 1);
			cout<<"masukan jumblah penyewa :";
			cin>>book.jml;
			for (int i = 0; i < book.jml; ++i)
			{
				cout<<endl;
                cout<<"nama penyewa :";
                cin>>book.nama[i];
                cout<<"lama penyewaan :";
                cin>>book.lama[i];
                cout<<"jam penyewaan :";
                cin>>book.jam[i];
                cout<<"tanggal penyewaan (dd/mm/yy):";
                cin>>book.tgl[i];
                book.harga[i]=30000;
                book.harga[i] *= book.lama[i];
            }
            break;
        case 2:
        	(book.menu == 2);
        	for (int j = 0; j < book.jml; j++)
        	{
        		cout<<endl;
                cout<<"nama :"<<book.nama[j]<<endl;
                cout<<"tanggal :"<<book.tgl[j]<<endl;
                cout<<"lama :"<<book.lama[j]<<"jam"<<endl;
                cout<<"jam :"<<book.jam[j]<<endl;
                cout<<"harga : "<<book.harga[j]<<endl;
            }
            break;
        case 3:
        	(book.menu == 3);
        	exit(0);
        	break;
        default:
        system("cls");
        cout<<"menu yang anda pilih tidak ada"<<endl;
        cout<<"silahkan pilih menu yang ada"<<endl;
        break;
        }
        goto bck;
    }
    while (book.menu == 0);
    cout<<"menu tidak adat silahkan pilih menu yang ada";
    goto bck;
}
