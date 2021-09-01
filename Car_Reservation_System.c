#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

//Proram dibuat oleh: Mario Claudius, dan Tedi Setiawan

void tampilan_awal();
void menu_awal(char pass[10], char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], char mobil[10], char nama[10], int waktu_pinjam[6], int tgl_valid[7], int bln_valid[7], int thn_valid[7], int waktu[6], char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6]);
void menu_pengguna(char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], char mobil[10], char nama[10], int waktu_pinjam[6], int tgl_valid[7], int bln_valid[7], int thn_valid[7], int waktu[6], char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6]);
void menu_host(char pass[10], char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], char mobil[10], char nama[10], int waktu_pinjam[6], int tgl_valid[7], int bln_valid[7], int thn_valid[7], int waktu[6], char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6]);
void DisplayTanggal(int waktu[2]);
void gantiPass(char pass[10], int waktu[6]);
void update(char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], int waktu[6]);
void show(char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11]);
void pesan(char mobil[10], char nama[10], int waktu_pinjam[6], int waktu[6], char nama_mobil[10][10], int tgl_valid[7],int bln_valid[7], int thn_valid[7], int jumlah_mobil[10], char peminjam[100][10], char mobil_pinjaman[100][10], int harga_mobil[11], int waktu_balik[6]);
void konversi(char kata[20]);
void daftarPeminjam(char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6], int waktu_pinjam[6]);
void pengembalian_mobil(char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6], int waktu[6], int harga_mobil[11], int jumlah_mobil[10], char nama_mobil[10][10]);
void hapusPeminjam(char peminjam[100][10], char mobil_pinjaman[100][10], char namaPeminjam[10], char mobilPinjaman[10]);
void tiket(char mobil[10], char nama[10], int waktu_pinjam[6], char nama_mobil[10][10], int harga_mobil[11], int tgl_valid[7],int bln_valid[7], int thn_valid[7], int waktu[6], int jumlah_mobil[10], int waktu_balik[6]);
void waktuPengembalian(int waktu_pinjam[6], int waktu_balik[6]);
void print_jam(int time[6]);
int hitungHari(int waktu_balik[6], int waktu[6]);
void InputPassword(char input[10]);
void bantuan();
void tampilan_akhir();

int jumlah_peminjam = 0;
int waktu_kembali[100][6];
char status[100][10];

int main()
{
	int waktu[6];
	int waktu_pinjam[6]={0,0,0,0,0,0};
	int waktu_balik[6]={0,0,0,0,0};
 	int jumlah_mobil[10] = {8,1,2,3,4,5,6,7,8,9};
 	int tgl_valid[7];
 	int bln_valid[7];
 	int thn_valid[7];
 	char pass[10]="\0";
 	char mobil[10]={"-"};
 	char nama[10]={"-"};
 	char nama_mobil[10][10] = {"Avanza", "Innova", "Alphard", "Camry", "Rush", "Yaris", "Agya", "Vios", "Hiace", "Calya"};
 	int harga_mobil[11] = {15000,16500,40000,20000,23000,20000,13000,15000,25000,15000,0};
 	char peminjam[100][10];
 	char mobil_pinjaman[100][10];
 	tampilan_awal(waktu);
 	menu_awal(pass, nama_mobil, jumlah_mobil, harga_mobil, mobil, nama, waktu_pinjam, tgl_valid, bln_valid, thn_valid, waktu, peminjam, mobil_pinjaman, waktu_balik);
 	tampilan_akhir();
}

void tampilan_awal(int waktu[6])
{
	int i;
	system("color F0");//bright white, black
	DisplayTanggal(waktu);
	printf("\n__________________________________________________________________");
	printf("\n||\t\t\t\t\t\t\t\t||");
	printf("\n||\t\t\tCar Reservation System\t\t\t||");
	printf("\n||______________________________________________________________||");
	printf("\n\n                  __..-======-------..__");
	printf("\n              . '    ______    ___________`.");
	printf("\n            .' .--. '.-----.`. `.-----.-----`.");
	printf("\n           / .'   | ||      `.` \\\\     \\     \\\\            _");
	printf("\n         .' /     | ||        \\\\ \\\\_____\\_____\\\\__________[_]");
	printf("\n        /   `-----' |'---------`\\  .'                       \\");
	printf("\n       /============|============\\'-------------------.._____|");
	printf("\n    .-`---.         |-==.        |'.__________________  =====|-._");
	printf("\n  .'        `.      |            |      .--------.    _` ====|  _ .");
	printf("\n /     __     \\     |            |   .'           `. [_] `.==| [_] \\");
	printf("\n[   .`    `.  |     |            | .'     .---.     \\      \\=|     |");
	printf("\n|  | / .-. '  |_____\\___________/_/     .'---. `.    |     | |     |");
	printf("\n `-'| | O |'..`------------------'.....'/ .-. \\ |    |       ___.--'");
	printf("\n     \\ `-' / /   `._.'                 | | O | |'___...----''___.--'");
	printf("\n      `._.'.'                           \\ `-' / [___...----''_.'");
	printf("\n                                         `._.'.'");
	printf("\n\n\t\tProgram ini dibuat oleh: \t\t");
	printf("\n\t\t     Mario Claudius\t\t");
	printf("\n\t\t     Tedi Setiawan\t\t\n\n");
	printf("NOW LOADING");
	for (i=0;i<3;i++)
	{
		printf(".");
		sleep(1);
	}
	system("cls");
}


void menu_awal(char pass[10], char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], char mobil[10], char nama[10], int waktu_pinjam[6], int tgl_valid[7], int bln_valid[7], int thn_valid[7], int waktu[6], char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6])
{
 	int menu = 0;
 	while(menu != 4)
 	{
	 	system("color B0");//light aqua, black
	 	DisplayTanggal(waktu);																//tanggal selalu di display / di refresh setiap kembali ke menu ini
	 	printf("\n__________________________________________________________________");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||\t\t  Selamat Datang di Menu Utama  \t\t||");
	 	printf("\n||______________________________________________________________||");
	    printf("\n||   Menu:\t\t\t\t\t\t\t||");
	    printf("\n||\t1. Host\t\t\t\t\t\t\t||");
	    printf("\n||\t2. Konsumen\t\t\t\t\t\t||");
	    printf("\n||\t3. Bantuan\t\t\t\t\t\t||");
	    printf("\n||\t4. Keluar\t\t\t\t\t\t||");
	    printf("\n||______________________________________________________________||");
	   	printf("\n\nPilihan: ");
	    scanf("%d", &menu);
	    system("cls");
	    switch (menu)
	    {
		    case 1: menu_host(pass, nama_mobil,jumlah_mobil,harga_mobil, mobil, nama, waktu_pinjam, tgl_valid, bln_valid, thn_valid, waktu, peminjam, mobil_pinjaman, waktu_balik); break;
		    case 2: menu_pengguna(nama_mobil,jumlah_mobil,harga_mobil, mobil, nama, waktu_pinjam, tgl_valid, bln_valid, thn_valid, waktu, peminjam, mobil_pinjaman, waktu_balik); break;
		    case 3: bantuan(); break;
		    case 4: exit(1); break;
		    default : printf("Masukkan input yang benar\n"), sleep(1), system("cls"); break;
	    }
 	}
}

void menu_pengguna(char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], char mobil[10], char nama[10], int waktu_pinjam[6], int tgl_valid[7], int bln_valid[7], int thn_valid[7], int waktu[6], char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6])
{
 	int i, menu = 0;
 	system("color 0F");//black, white
    printf("\n__________________________________________________________________");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t   Kamu masuk sebagai konsumen   \t\t||");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||______________________________________________________________||\n\nNOW LOADING");
 	for(i=0;i<3;i++)
 	{
 		printf(".");
 		sleep(1);					//delay 1 detik
	}
	system("cls");
	while(menu != 5)
	{
		system("color e0");//light yellow, black
	 	DisplayTanggal(waktu);
	 	printf("\n__________________________________________________________________");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||\t\t  Selamat Datang di Menu Konsumen  \t\t||");
	 	printf("\n||______________________________________________________________||");
	    printf("\n||   Menu:\t\t\t\t\t\t\t||");
	    printf("\n||\t1. Daftar Mobil\t\t\t\t\t\t||");
	    printf("\n||\t2. Pesan\t\t\t\t\t\t||");
	    printf("\n||\t3. Lihat Ticket\t\t\t\t\t\t||");
	    printf("\n||\t4. Pengembalian mobil\t\t\t\t\t||");
	    printf("\n||\t5. Kembali ke menu utama\t\t\t\t||");
	    printf("\n||______________________________________________________________||");
	    printf("\n\nPilihan: ");
	    scanf("%d", &menu);
	    system("cls");
	    switch (menu)
	    {
	    	case 1: DisplayTanggal(waktu), printf("\n__________________________________________________________________"), printf("\n||\t\t\t\t\t\t\t\t||"), printf("\n||\t\t\t  Daftar mobil  \t\t\t||"), printf("\n||______________________________________________________________||\n"), show(nama_mobil,jumlah_mobil,harga_mobil), getch(), system("cls"); break;
	      	case 2: pesan(mobil, nama, waktu_pinjam, waktu, nama_mobil, tgl_valid, bln_valid, thn_valid, jumlah_mobil, peminjam, mobil_pinjaman, harga_mobil, waktu_balik); break;
	      	case 3: tiket(mobil, nama, waktu_pinjam, nama_mobil, harga_mobil, tgl_valid, bln_valid, thn_valid, waktu, jumlah_mobil, waktu_balik); break;
	      	case 4: pengembalian_mobil(peminjam,mobil_pinjaman, waktu_balik,waktu,harga_mobil,jumlah_mobil,nama_mobil); break;
	      	case 5: strcpy(nama, "-"), strcpy(mobil, "-"), waktu_pinjam[0]=00, waktu_pinjam[1]=00, waktu_pinjam[2]=00, waktu_pinjam[5]=0; break;		//saat keluar menu pengguna, otomatis tiket akan ke reset
			default : printf("Masukkan input yang benar\n"), sleep(1), system("cls"); break;				//error handling
	    }
	}
}

void menu_host(char pass[10], char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], char mobil[10], char nama[10], int waktu_pinjam[6], int tgl_valid[7], int bln_valid[7], int thn_valid[7], int waktu[6], char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6])
{
	int i=0, menu = 0;
	char inputBaru[10];
	char input[10];
	system("color 0F");//black, white
	if(strcmp(pass, "\0") == 0)										//kondisi ketika program pertama kali dijalankan, user (host) diminta membuat password
 	{
	 	printf("\n__________________________________________________________________");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||\t\t    Kamu masuk sebagai host   \t\t\t||");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||______________________________________________________________||\n\n");
	 	printf("Buat password yang akan digunakan: ");
		InputPassword(inputBaru);
	 	strcpy(pass,inputBaru);
	 	//printf("%s", pass);
		system("cls");
 	}
 	printf("\n__________________________________________________________________");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t    Kamu masuk sebagai host   \t\t\t||");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||______________________________________________________________||\n\n");
 	printf("Password: ");												//setiap masuk menu host akan diwajibkan memasukkan password sesuai dengan yang telah dibuat
 	InputPassword(input);
 	printf("%s\n", input);
 	getch();
 	if(strcmp(input, pass) == 0)
 	{
	 	system("cls");
	 	printf("\n__________________________________________________________________");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||\t\t    Kamu masuk sebagai host   \t\t\t||");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||______________________________________________________________||\n\n");
	 	printf("Sedang masuk");
	 	for(i=0;i<3;i++)
	 	{
	 		printf(".");
	 		sleep(1);
		}
		system("cls");
		system("color 4E");//red,light yellow
		while(menu != 4)
		{
			DisplayTanggal(waktu);
	  	 	printf("\n__________________________________________________________________");
		 	printf("\n||\t\t\t\t\t\t\t\t||");
		 	printf("\n||\t\t  Selamat Datang di Menu Host  \t\t\t||");
		 	printf("\n||______________________________________________________________||");
		    printf("\n||   Menu:\t\t\t\t\t\t\t||");
		    printf("\n||\t1. Update data\t\t\t\t\t\t||");
		    printf("\n||\t2. Ganti password\t\t\t\t\t||");
		    printf("\n||\t3. Daftar peminjam\t\t\t\t\t||");
		    printf("\n||\t4. Log out\t\t\t\t\t\t||");
		    printf("\n||______________________________________________________________||");
		    printf("\n\nPilihan: ");
		    scanf("%d", &menu);
		    system("cls");
		   	switch (menu)
			{
			    case 1: DisplayTanggal(waktu), update(nama_mobil, jumlah_mobil, harga_mobil, waktu); break;
			    case 2: gantiPass(pass, waktu); break;
			    case 3: daftarPeminjam (peminjam, mobil_pinjaman, waktu_balik, waktu_pinjam); break;
			    case 4: break;
			    default : printf("Masukkan input yang benar\n\n"); break;
			}
	  	}
 	}
 	else												//kondisi jika password yang dimasukkan salah
 	{
	 	printf("\nPassword salah!!");
	 	sleep(1);
	 	system("cls");
	  	return menu_awal(pass, nama_mobil, jumlah_mobil, harga_mobil, mobil, nama, waktu_pinjam, tgl_valid, bln_valid, thn_valid, waktu, peminjam, mobil_pinjaman, waktu_balik);			//kembali ke menu awal kalo password salah
 	}
}

void InputPassword(char input[10])						//function untuk ngeinput password
{
	int i = 0,count = 0,j;
	char dummy[10];
	while(1)
    {
    	input[i] = getch();
	    if(input[i] == 8)										//untuk ngecek apakah tombol backspace ditekan
	    {
	    	i--;
	    	if(i<0)
	    	{
	    		i++;
			}
			else
			{
				printf("\b \b");								//agar pada console terlihat bahwa asterisknya terhapus
				count += 1;
			}
		}
		else if(input[i] == -32 || input[i] == 9 || input[i] == 32)						//Daftar ASCII:
		{																				//tombol tab = 9
			continue;																	//tombol pasi = 32
		}																				//tombol spesial = -32 (Contoh: arrow key,delete,dll)
		else if(input[i] == 13)															//tombol backspace = 8
		{																				//tombol enter = 13
			break;
		}
		else
		{
			printf("*");
			i++;
		}	
	}
	for(j=0;j<i;j++)
	{
		dummy[j] = input[j];									//untuk mencegah adanya kemunculan spasi akibat backspace
	}
	strcpy(input,dummy);
}

void update(char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11], int waktu[6])				//function untuk mengupdate daftar mobil sebagai host
{
	int i,angka;
	char updateStr[20];
	char jmlh[5];
	char harga[10];
	printf("\n__________________________________________________________________");
	printf("\n||\t\t\t\t\t\t\t\t||");
	printf("\n||\t\t\t  Update data  \t\t\t\t||");
	printf("\n||______________________________________________________________||\n");
	show(nama_mobil, jumlah_mobil, harga_mobil);
	printf("\nTipe mobil yang ingin di update: ");
	scanf("%s", updateStr);
	konversi(updateStr);			//mengubah kata yang dimasukkan huruf pertamanya menjadi kapital
	for(i=0;i<10;i++)
	{
		if(strcmp(updateStr, nama_mobil[i]) == 0)							//loop daftar nama mobil, kalau cocok maka dijalankan update jumlah mobilnya dan harganya
		{
			printf("Masukkan update jumlah ketersediaan mobil %s (Jika input bukan angka, data tidak diupdate): ", nama_mobil[i]);
			scanf("%s", jmlh);
	   		if(strcmp(jmlh, "0") == 0)
	   		{
	    		jumlah_mobil[i] = 0;
	   		}
			else
	   		{
				angka = atoi(jmlh);
	    		if(angka != 0)
	    		{
	     			jumlah_mobil[i] = angka;
	    		}
	   		}
	   		printf("Masukkan update harga mobil %s (format: xxxxx. Jika input bukan angka, data tidak diupdate): ", nama_mobil[i]);
	   		scanf("%s", harga);
	   		if(strcmp(harga, "0") == 0)
	   		{
	    		harga_mobil[i] = 0;
	   		}
	   		else
	   		{
	    		angka = atoi(harga);
	    		if(angka != 0)
	    		{
	     			harga_mobil[i] = angka;
	    		}
	   		}
	  	}
 	}
 	show(nama_mobil, jumlah_mobil, harga_mobil);				//akan ditampilkan tabel daftar mobil setelah diupdate
 	getch();
 	system("cls");
}

void daftarPeminjam(char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6], int waktu_pinjam[6])
{
	int i;
	printf("\n_____________________________________________________________________________");
	printf("\n||\t\t\t\t\t\t\t\t\t   ||");
	printf("\n||\t\t\t\tDaftar Peminjam\t\t\t\t   ||");
	printf("\n||_________________________________________________________________________||\n");
	printf("\n_____________________________________________________________________________");
	printf("\n|No\t|Nama Peminjam\t|Tipe Mobil\t|Batas Pengembalian\t|Status     |");
	printf("\n|_______|_______________|_______________|_______________________|___________|");
	
	for(i=0;i<jumlah_peminjam;i++)
	{
		printf("\n|%d\t|", i+1);
		printf("%s\t\t|", peminjam[i]);
		printf("%s\t\t|", mobil_pinjaman[i]);
		printf("%d/%d/%d - ", waktu_kembali[i][0], waktu_kembali[i][1], waktu_kembali[i][2]);
		print_jam(waktu_kembali[i]);
		printf("\t|");
		printf(" %s  |", status[i]);
	}
	printf("\n|_______|_______________|_______________|_______________________|___________|\n");
	getch();
	system("cls");
}
void show(char nama_mobil[10][10], int jumlah_mobil[10], int harga_mobil[11])			//function untuk menampilkan tabel daftar mobil
{
	int i,j;
	printf("\n_________________________________________________________________");
	printf("\n|\tTipe Mobil\t|  Jumlah Ketersediaan\t|   Harga/jam\t|");
	printf("\n|_______________________|_______________________|_______________|");
	for(i=0;i<10;i++)
	{
		printf("\n|\t%s\t\t|", nama_mobil[i]);
		printf("\t    %d\t\t|", jumlah_mobil[i]);
		printf("   Rp %d\t|", harga_mobil[i]);
	}
	printf("\n|_______________________|_______________________|_______________|");
}

void gantiPass(char pass[10], int waktu[6])				//function untuk ganti password sebagai host
{
	char password[10];
	int i, kondisi = 0;
	while(kondisi == 0)
	{
		DisplayTanggal(waktu);
		printf("\n__________________________________________________________________");
		printf("\n||\t\t\t\t\t\t\t\t||");
		printf("\n||\t\t\t  Ganti password  \t\t\t||");
		printf("\n||______________________________________________________________||\n");
		printf("\nMasukkan password lama: ");
		InputPassword(password);
		if(strcmp(password, pass) == 0)
		{
			kondisi = 1;
		}
		else
		{
			printf("\nPassword salah!! Masukkan password lama yang benar!!\n");
			printf("Tekan tombol apapun untuk mengulang");
			getch();
			system("cls");
		}
	}
	printf("\nMasukkan password baru: ");
	InputPassword(pass);
	printf("\nMenyimpan");
	for(i=0;i<3;i++)
	{
		printf(".");
		sleep(1);
	}
	system ("cls");
}

void DisplayTanggal(int waktu[6])					//function untuk menampilkan tanggal, data tanggal yang valid akan diambil nilai awalnya dari sini
{
	int i;
	char w[9], t[9];
	char jam[2];
	char menit[2];
	char tanggal[2];
	char bulan[2];
	char tahun[2];
	_strdate(w);  //Memasukkan tanggal hari ini ke array dalam bentuk mm/dd/yy
	_strtime(t);
	for(i=0;i<2;i++)
	{
		tanggal[i] = w[3+i];
	}
	waktu[0] = atoi(tanggal);
	for(i=0;i<2;i++)
	{
		bulan[i] = w[i];
	}
	waktu[1] = atoi(bulan);
	for(i= 0;i<2;i++)
	{
		tahun[i] = w[6+i];
	}
	waktu[2] = 2000 + atoi(tahun);
	printf( "Tanggal (dd/mm/yy): %d/%d/%d", waktu[0], waktu[1], waktu[2]);
	for(i=0;i<2;i++)
	{
		jam[i] = t[i];
	}
	waktu[3]=atoi(jam);
	for(i=0;i<2;i++)
	{
		menit[i] = t[3+i];
	}
	waktu[4]=atoi(menit);
	printf("\nJam: ");
	print_jam(waktu);
}

void pesan(char mobil[10], char nama[10], int waktu_pinjam[6], int waktu[6], char nama_mobil[10][10], int tgl_valid[7],int bln_valid[7], int thn_valid[7], int jumlah_mobil[10], char peminjam[100][10], char mobil_pinjaman[100][10], int harga_mobil[11], int waktu_balik[6])
{																												//function pemesan menginput pesanan mobil yang diinginkan
	int mobil_valid=0,tanggal_valid=0,i, jam_valid=0;
	//char str[1] = "x";
	DisplayTanggal(waktu);
	printf("\n__________________________________________________________________");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t\t    Pesan mobil    \t\t\t||");
 	printf("\n||______________________________________________________________||\n");
	printf("\n__________________________________________________________________");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n   Masukkan namamu: ");
	scanf("%s", nama);
	konversi(nama);
	strcpy(peminjam[jumlah_peminjam], nama);
	printf("\n||______________________________________________________________||");
	printf("\n||\t\t\t\t\t\t\t\t||");
	printf("\n   Masukkan tipe mobil yang diinginkan: ");
	scanf("%s", mobil);
	konversi(mobil);
	while(mobil_valid == 0)
	{
		for(i=0;i<10;i++)
		{
			if((strcmp(mobil, nama_mobil[i]) == 0) && jumlah_mobil[i] - 1 >= 0)
			{
				mobil_valid = 1;
				harga_mobil[11]=harga_mobil[i];
				jumlah_mobil[i] -= 1;
				strcpy(mobil_pinjaman[jumlah_peminjam], mobil);
			}
		}
		if(mobil_valid == 0)
		{
			printf("\n   Tipe mobil yang dimasukkan tidak ada!!.\n   Tolong masukkan tipe mobil lain yang tersedia\n");
			printf("   Tekan tombol apapun untuk mengulang");
			getch();
			system("cls");
			DisplayTanggal(waktu);
			printf("\n__________________________________________________________________");
		 	printf("\n||\t\t\t\t\t\t\t\t||");
		 	printf("\n||\t\t\t    Pesan mobil    \t\t\t||");
		 	printf("\n||______________________________________________________________||\n");
			printf("\n__________________________________________________________________");
		 	printf("\n||\t\t\t\t\t\t\t\t||");
		 	printf("\n   Masukkan namamu: %s\n", nama);
		 	printf("\n||______________________________________________________________||");
			printf("\n||\t\t\t\t\t\t\t\t||");
			printf("\n   Masukkan tipe mobil yang diinginkan: ");
			scanf("%s", mobil);
			konversi(mobil);
		}
	}
	printf("\n||______________________________________________________________||");
	printf("\n||\t\t\t\t\t\t\t\t||");
	printf("\n   Masukkan tanggal peminjaman \n   (Maksimal dalam 7 hari kedepan, Format: dd/mm/yyyy): ");
	scanf("%d/%d/%d", &waktu_pinjam[0], &waktu_pinjam[1], &waktu_pinjam[2]);
	while(tanggal_valid == 0)
	{
		tanggal_valid = cek_tgl(tgl_valid,bln_valid,thn_valid,waktu,waktu_pinjam);				//function ngecek tanggal yang valid untuk pemesanan (7 hari setelah tanggal hari ini)
		if(tanggal_valid == 0)
		{
			printf("\n   Tanggal sewa yang dimasukkan tidak valid!! \n   Tolong masukkan tanggal yang valid (maks 7 hari ke depan)\n");
			printf("   Tekan tombol apapun untuk mengulang");
			getch();
			system("cls");
			DisplayTanggal(waktu);
			printf("\n__________________________________________________________________");
		 	printf("\n||\t\t\t\t\t\t\t\t||");
		 	printf("\n||\t\t\t    Pesan mobil    \t\t\t||");
		 	printf("\n||______________________________________________________________||\n");
			printf("\n__________________________________________________________________");
		 	printf("\n||\t\t\t\t\t\t\t\t||");
		 	printf("\n   Masukkan namamu: %s\n", nama);
		 	printf("\n||______________________________________________________________||");
			printf("\n||\t\t\t\t\t\t\t\t||");
			printf("\n   Masukkan tipe mobil yang diinginkan: %s\n", mobil);
			printf("\n||______________________________________________________________||");
			printf("\n||\t\t\t\t\t\t\t\t||");
			printf("\n   Masukkan tanggal peminjaman \n   (Maksimal dalam 7 hari kedepan, Format: dd/mm/yyyy): ");
			scanf("%d/%d/%d", &waktu_pinjam[0], &waktu_pinjam[1], &waktu_pinjam[2]);
		}
	}
	printf("\n||______________________________________________________________||");
	printf("\n||\t\t\t\t\t\t\t\t||");
	printf("\n   Masukkan jam pengambilan (Format: jam:menit): ");
	scanf("%d:%d", &waktu_pinjam[3], &waktu_pinjam[4]);
	while (jam_valid==0)
	{
		if(waktu_pinjam[3]<0 || waktu_pinjam[3]>24 || waktu_pinjam[4]<0 || waktu_pinjam[4]>59)
		{
			printf("Masukkan tanggal yang valid");
			getch();
			system("cls");
			DisplayTanggal(waktu);
			printf("\n__________________________________________________________________");
		 	printf("\n||\t\t\t\t\t\t\t\t||");
		 	printf("\n||\t\t\t    Pesan mobil    \t\t\t||");
		 	printf("\n||______________________________________________________________||\n");
			printf("\n__________________________________________________________________");
		 	printf("\n||\t\t\t\t\t\t\t\t||");
		 	printf("\n   Masukkan namamu: %s\n", nama);
		 	printf("\n||______________________________________________________________||");
			printf("\n||\t\t\t\t\t\t\t\t||");
			printf("\n   Masukkan tipe mobil yang diinginkan: %s\n", mobil);
			printf("\n||______________________________________________________________||");
			printf("\n||\t\t\t\t\t\t\t\t||");
			printf("\n   Masukkan tanggal peminjaman \n   (Maksimal dalam 7 hari kedepan, Format: dd/mm/yyyy): %d/%d/%d", waktu_pinjam[0], waktu_pinjam[1], waktu_pinjam[2]);
			printf("\n||______________________________________________________________||");
			printf("\n||\t\t\t\t\t\t\t\t||");
			printf("\n   Masukkan jam pengambilan (Format: jam:menit): ");
			scanf("%d:%d", &waktu_pinjam[3], &waktu_pinjam[4]);
		}
		else
		{
			jam_valid=1;
		}
	}
	printf("\n||______________________________________________________________||");
	printf("\n||\t\t\t\t\t\t\t\t||");
	printf("\n   Masukkan durasi peminjaman mobil (dalam hitungan jam): ");
	scanf("%d", &waktu_pinjam[5]);
	printf("\n||______________________________________________________________||");
	system("cls");
	waktuPengembalian(waktu_pinjam, waktu_balik);
	for(i=0;i<6;i++)
	{
		waktu_kembali[jumlah_peminjam][i]=waktu_balik[i];
	}
	strcpy(status[jumlah_peminjam],"Borrowed");
	jumlah_peminjam++;
}

void konversi(char kata[20])					//mengubah huruf depan kata menjadi kapital
{
	int i, n;
	n = strlen(kata);
	kata = strlwr(kata);
	for (i=0;i<n;i++)
	{
		if(i==0)
		{
			kata[i]=toupper(kata[i]);
		}
	}
}

void tiket(char mobil[10], char nama[10], int waktu_pinjam[6], char nama_mobil[10][10], int harga_mobil[11], int tgl_valid[7],int bln_valid[7], int thn_valid[7], int waktu[6], int jumlah_mobil[10], int waktu_balik[6])
{																								//function untuk menampilkan tiket
	int i,count = 0, kondisi, count_mobil;
	DisplayTanggal(waktu);
	//waktuPengembalian(waktu_pinjam, waktu_balik);							
	printf("\n__________________________________________________________________");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t\t\tTicket\t\t\t\t||");
 	printf("\n||______________________________________________________________||\n");
 	printf("__________________________________________________________________");
	printf("\n|| Nama:\t\t\t\t\t\t\t||\n||\t%s\t\t\t\t\t\t\t||", nama);
	printf("\n|| Tipe mobil:\t\t\t\t\t\t\t||\n||\t%s\t\t\t\t\t\t\t||", mobil);
	if(strcmp(nama, "-")==0)
	{
		printf("\n|| Tanggal sewa:\t\t\t\t\t\t||\n||\t0/0/0    \t\t\t\t\t\t||");
	}
	else
	{
		printf("\n|| Tanggal sewa:\t\t\t\t\t\t||\n||\t%d/%d/%d    \t\t\t\t\t\t||", waktu[0], waktu[1], waktu[2]);
	}
	printf("\n|| Durasi:\t\t\t\t\t\t\t||\n||\t%d jam\t\t\t\t\t\t\t||", waktu_pinjam[5]);
	printf("\n||______________________________________________________________||");
	printf("\n|| Waktu pengambilan:\t\t\t\t\t\t||\n||\t%d/%d/%d    \t\t\t\t\t\t||\n||\t",waktu_pinjam[0], waktu_pinjam[1], waktu_pinjam[2]);
	print_jam(waktu_pinjam);
	printf(" \t\t\t\t\t\t\t||");
	printf("\n|| Waktu pengembalian:\t\t\t\t\t\t||\n||\t%d/%d/%d    \t\t\t\t\t\t||\n||\t", waktu_balik[0], waktu_balik[1], waktu_balik[2]);
	print_jam(waktu_balik);
	printf(" \t\t\t\t\t\t\t||");
	printf("\n||______________________________________________________________||");
	harga_mobil[11]*=waktu_pinjam[5];
	printf("\n|| Biaya sewa:\t\t\t\t\t\t\t||\n||\tRp. %d    \t\t\t\t\t\t||", harga_mobil[11]);
	printf("\n||______________________________________________________________||\n");
	getch();
	system("cls");
}

void pengembalian_mobil(char peminjam[100][10], char mobil_pinjaman[100][10], int waktu_balik[6],int waktu[6], int harga_mobil[11], int jumlah_mobil[10], char nama_mobil[10][10])
{
	int i, valid = 0, denda = 50000, total;
	char namaPeminjam[10], mobilPinjaman[10];
	while(valid == 0)
	{
		DisplayTanggal(waktu);
		printf("\n__________________________________________________________________");
	 	printf("\n||\t\t\t\t\t\t\t\t||");
	 	printf("\n||\t\t\t  Pengembalian Mobil  \t\t\t||");
	 	printf("\n||______________________________________________________________||\n");
	 	printf("\n\n__________________________________________________________________");
		printf("\n||\t\t\t\t\t\t\t\t||");
		printf("\n  Masukkan nama sesuai tiket: ");
		scanf("%s", namaPeminjam);
		printf("\n||______________________________________________________________||");
		konversi(namaPeminjam);
		printf("\n||\t\t\t\t\t\t\t\t||");
		printf("\n  Masukkan tipe mobil sesuai tiket: ");
		scanf("%s", mobilPinjaman);
		printf("\n||______________________________________________________________||\n");
		konversi(mobilPinjaman);
		for(i=0;i<jumlah_peminjam;i++)
		{
			if((strcmp(namaPeminjam, peminjam[i]) == 0) && (strcmp(mobilPinjaman, mobil_pinjaman[i]) == 0))
			{
				valid = 1;
				strcpy(status[i],"Returned");
				printf("\n__________________________________________________________________");
				printf("\n|| Waktu pengembalian:\t\t\t\t\t\t||\n||\t%d/%d/%d    \t\t\t\t\t\t||\n||\t", waktu[0], waktu[1], waktu[2]);
				print_jam(waktu);
				printf(" \t\t\t\t\t\t\t||");
				total = denda*hitungHari(waktu_balik, waktu);
				printf("\n|| Denda : \t\t\t\t\t\t\t||\n||\tRp. %d    \t\t\t\t\t\t||", total);
				printf("\n||______________________________________________________________||\n");
				printf("\n__________________________________________________________________");
			 	printf("\n||\t\t\t\t\t\t\t\t||");
			 	printf("\n||                  Terimakasih Telah Memesan                   ||");
			 	printf("\n||______________________________________________________________||\n");
				for(i=0; i<10; i++)
				{
					if(strcmp(mobilPinjaman, nama_mobil[i])==0)
					{
						jumlah_mobil[i]+=1;
					}
				}
			}
		}
		if(valid == 0)
		{
			printf("Maaf, data yang dimasukkan tidak cocok dengan data kami.\n");
			printf("Tekan tombol apapun untuk mengulang");
			getch();
			system("cls");
		}
	}
	getch();
	system("cls");
}

int hitungHari(int waktu_balik[6], int waktu[6])
{
	int count = 0;
	int total;
	int tanggal,bulan,tahun,jam,menit;
	tanggal = waktu_balik[0];
	bulan = waktu_balik[1];
	tahun = waktu_balik[2];
	jam = waktu_balik[3];
	menit = waktu_balik[4];
	if((waktu[1] < waktu_balik[1] && waktu[2] == waktu_balik[2]) || (waktu[2] < waktu_balik[2]) || (waktu[0] < waktu_balik[0] && waktu[1] == waktu_balik[1] && waktu[2] == waktu_balik[2])) //&& waktu[3] <= waktu_balik[3] && waktu[4] <= waktu_balik[4])
	{
		return 0;
	}
	else if(waktu[0] == waktu_balik[0] && waktu[1] == waktu_balik[1] && waktu[2] == waktu_balik[2])
	{
		if(waktu[3] < waktu_balik[3])
		{
			return 0;
		}
		else if(waktu[3] == waktu_balik[3])
		{
			if(waktu[4] <= waktu_balik[4])
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			total = waktu[3] - waktu_balik[3];
			if(waktu[4] > waktu_balik[4])
			{
				total++;
			}
			return total;
		}
	}
	else
	{
		while(waktu[0] != tanggal || waktu[1] != bulan || waktu[2] != tahun)
		{
			tanggal += 1;
			if(tanggal > cek(bulan))
			{
				tanggal = 1;
				bulan += 1;
			}
			if(bulan > 12)
			{
				tahun += 1;
				bulan = 1;
			}
			count++;
		}
		total = count*24;
		if(waktu[3] > jam)
		{
			total += (waktu[3] - jam);
		}
		else
		{
			total += (waktu[3]-jam);
		}
		if(waktu[4] > menit)
		{
			total += 1;
		}
		return total;
	}
	
}

void bantuan()
{
	printf("\n__________________________________________________________________");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||                        Bantuan                               ||");
 	printf("\n||______________________________________________________________||\n");
 	printf("\nDalam Program ini terdapat 3 Menu yaitu menu host, menu pengguna, dan menu bantuan\n");
	printf("\n\nHost: \n - Untuk login diperlukan password\n - untuk login pertama host diharuskan membuat password\n - Dalam menu host ada 4 menu :\n\t1.Update data\n\t2.Ganti Password\n\t3.Daftar Peminjam\n\t4.Keluar\n - Menu update data digunakan untuk mengupdate jumlah mobil\n - Menu ganti password untuk mengganti password login\n - Menu daftar peminjam untuk melihat peminjam mobil");
	printf("\n\nPengguna: \n - Dalam menu pengguna terdapat 5 menu :\n\t1.Daftar mobil\n\t2.Pesan\n\t3.Lihat Tiket\n\t4.Pengembalian Mobil\n\t5.Kembali ke menu utama\n - Menu daftar mobil untuk melihat daftar mobil apa saja yang tersedia\n - Menu pesan digunakan untuk memesan mobil\n - Menu pengembalian digunakan untuk mengembalikan mobil");
	getch();
	system("cls");
}

int cek_tgl(int tgl_valid[7],int bln_valid[7], int thn_valid[7], int waktu[6], int waktu_pinjam[6])					//function untuk ngecek tanggal yang valid
{
	int i, count=1;
	int count_valid = 0;
	for(i=0;i<7;i++)										//algoritmanya adalah memasukkan daftar tanggal yang valid ke sebuah array untuk nantinya digunakan untuk ngecek,
	{														//apakah tanggal yang diinput user sudah valid atau belum
		tgl_valid[i] = count + waktu[0];
		bln_valid[i] = waktu[1];
		thn_valid[i] = waktu[2];
		if(tgl_valid[i]>cek(waktu[1])) 
		{
			tgl_valid[i]-=cek(waktu[1]);
			bln_valid[i]= 1 + waktu[1];
		}
		if(bln_valid[i] == 13)
		{
			bln_valid[i] = 1;
			thn_valid[i] = waktu[2] + 1;
		}
		count++;
	}
	for(i=0;i<7;i++)
	{
		if(waktu_pinjam[0] == tgl_valid[i] && waktu_pinjam[1] == bln_valid[i] && waktu_pinjam[2] == thn_valid[i])					//jika tanggal input user ada di dalam array tanggal valid 
		{
			count_valid += 1;
		}
	}
	if(count_valid>0)
	{
		return 1;						//jika tanggal valid
	}
	else
	{
		return 0;						//jika tanggal tidak valid
	}
}

int cek(int bln)				//untuk memberikan daftar jumlah hari setiap bulan
{
	if(bln == 2)//saat bulan februari
	{
		return 28;
	}
	//saat bulan april juni september november
	else if(bln == 4|| bln ==6 || bln==9 || bln==11)
	{
		return 30;
	}
	//saat sisa bulan lainnya
	else{
		return 31;
	}	
}

void waktuPengembalian(int waktu_pinjam[6], int waktu_balik[6])
{
	int addTanggal;
	int sisaJam;
	addTanggal = waktu_pinjam[5] / 24;
	sisaJam = waktu_pinjam[5] % 24;
	if(waktu_pinjam[3] + sisaJam > 24)
	{
		waktu_balik[3] = waktu_pinjam[3] + sisaJam - 24;
		addTanggal += 1;
	}
	else
	{
		waktu_balik[3] = waktu_pinjam[3] + sisaJam;
	}
	waktu_balik[4] = waktu_pinjam[4];
	waktu_balik[0] = waktu_pinjam[0] + addTanggal;
	if(waktu_balik[0] > cek(waktu_pinjam[1]))
	{
		waktu_balik[0] -= cek(waktu_pinjam[1]);
		waktu_balik[1] = waktu_pinjam[1] + 1;
	}
	else
	{
		waktu_balik[1] = waktu_pinjam[1];
	}
	waktu_balik[2] = waktu_pinjam[2];
	if(waktu_balik[1] > 12)
	{
		waktu_balik[2] += 1;
		waktu_balik[1] -= 12;
	}
}

void print_jam(int time[6])
{
	if(time[3]<10 && time[4]<10)
	{
		printf("0%d:0%d", time[3], time[4]);
	}
	else if(time[3]<10 && time[4]>10)
	{
		printf("0%d:%d", time[3], time[4]);
	}
	else if(time[3]>10 && time[4]<10)
	{
		printf("%d:0%d", time[3], time[4]);
	}
	else
	{
		printf("%d:%d", time[3], time[4]);
	}
}

void tampilan_akhir()
{
	system("color 4F");//red, bright white
	printf("\a\n__________________________________________________________________");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||\t\t\t    Terima Kasih   \t\t\t||");
 	printf("\n||\t\t\t\t\t\t\t\t||");
 	printf("\n||______________________________________________________________||\n\n");
 	sleep(1);
}
