#include <ncurses.h>
#include <iostream>
#include <windows.h>
using namespace std;

void awal()
{
	initscr();
	int x,y; 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	
	wrefresh(win);
	mvprintw(14,33, "KLIK APA SAJA UNTUK MELANJUTKAN");
	
	wrefresh(win);
	getch();
	endwin();
}

void narasi()
{
	initscr();
	int x,y;
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
		
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		
	mvprintw(14,19, "Disuatu");refresh();Sleep(100);mvprintw(14,27, "pagi");refresh();Sleep(100);mvprintw(14,32, "yang");refresh();Sleep(100);
	mvprintw(14,37, "cerah,");refresh();Sleep(100);mvprintw(14,44, "seorang");refresh();Sleep(100);mvprintw(14,52, "mahasiswa");refresh();Sleep(100);
	mvprintw(14,62, "yang");refresh();Sleep(100);mvprintw(14,67, "bernama");refresh();Sleep(100);mvprintw(14,75, "Noza");refresh();Sleep(100);
	mvprintw(15,19,"terbangun");refresh();Sleep(100);mvprintw(15,29,"dari tidurnya...");refresh();Sleep(100);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();Sleep(100);
	
	wrefresh(win);
	getch();
	endwin();
}

void mimpi()
{
	initscr();
	int x,y;
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
    mvprintw(14,15, "Noza : Ah padahal baru saja mimpi indahnya bersamanya, uuuuuuhh jadi kesel");refresh();Sleep(100);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();Sleep(100);
	
	wrefresh(win);
	getch();
	endwin();
}

void otw()
{
	initscr();
	int x,y;
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
    mvprintw(14,5, "Setelah itu, Noza mandi dan sarapan, Noza pun berangkat ke kampus untuk menghadiri kelas...");refresh();Sleep(100);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();Sleep(100);
	
	wrefresh(win);
	getch();
	endwin();
}

void parkiran()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
    mvprintw(14,6, "Setelah sampai di parkiran, Noza melihat Doi sedang berjalan sendirian menuju kelas...");refresh();Sleep(100);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();Sleep(100);
	
	wrefresh(win);
	getch();
	endwin();
}
void pilihanparkiranygbener()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(13,31,"Noza : Eh kamu sendirian aja?");refresh();Sleep(500);mvprintw(14,31,"???? : Iya nih");refresh();Sleep(500);
	mvprintw(15,31,"Noza : Jalan bareng yuk ke kelasnya");refresh();Sleep(500);mvprintw(16,31,"???? : Boleh");refresh();Sleep(500);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();Sleep(100);
	
	wrefresh(win);
	getch();
	endwin();
}

void gerbang()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(13,15,"Mereka pun jalan bersama, ");refresh();Sleep(500);mvprintw(13,40," sesampainya di gerbang masuk,");refresh();Sleep(500);
	mvprintw(13,70," ada seseorang yang ");refresh();Sleep(500);
	mvprintw(15,15,"berlari mendekat ke mereka berdua dan berkata...");refresh();Sleep(500);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	wrefresh(win);
	getch();
	endwin();
}
void dipanggil()
{

	system("cls");
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(6,15,"Dina : Juwita! Tunggu dong..");refresh();Sleep(500);
	mvprintw(8,15,"Juwita : Eh Dina, iya sini buruan");refresh();Sleep(500);
	mvprintw(10,15,"Dina : Eh, kok kalian jalan bareng?? Cie.....");refresh();Sleep(500);
	mvprintw(12,15,"Noza : Ih apasih lu ini..");refresh();Sleep(500);
	mvprintw(14,15,"Juwita : Apasih kamu ada-ada aja...");refresh();Sleep(500);
	mvprintw(16,15,"Dina : Hehehe nggak kok mainan aja, btw tugas Bahasa Inggris kalian udah belum?");refresh();Sleep(500);
	mvprintw(18,15,"Noza : Aku udah kok");refresh();Sleep(500);
	mvprintw(20,15,"Juwita : Ih ajarin dong Noza..., aku soalnya belum");refresh();Sleep(500);
	mvprintw(22,15,"Noza : Oke boleh aja kok, kamu sudah din?");refresh();Sleep(500);
	mvprintw(24,15,"Dina : Udah kok, baru tadi shubuh ngerjainnya");refresh();Sleep(500);
	mvprintw(26,15,"Noza : Oke kalo gituu");refresh();Sleep(500);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,29,"Mereka bertiga pun jalan bareng ke kelas...");refresh();
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();
}
void kelas(){
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(13,15,"Sesampainya dikelas, kelas ternyata masih kosong tidak ada orang...");refresh();Sleep(100);
	mvprintw(15,15,"Juwita pun duduk ditempat ia biasa duduk...");refresh();Sleep(100);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	wrefresh(win);
	getch();
	endwin();
}

void selesaidiskusi()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,13,"Mereka berdua pun selesai berdiskusi dan menyelesaikan tugas Bahasa Inggris...");refresh();
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void bagikel()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,7,"Bu Dosen : Selamat pagi semua, hari ini saya sebentar saja karena saya dapat panggilan");refresh();Sleep(400);
	mvprintw(14,7,"menghadiri rapat di Rektorat, jadi hari ini saya akan membagikan kelompok beranggotakan");refresh();Sleep(400);
	mvprintw(16,7,"2 orang per kelompok, dan tugas nya akan saya share di Google Class, untuk");refresh();Sleep(400);
	mvprintw(18,7,"kelompok akan saya acak sekarang...");refresh();Sleep(400);
	mvprintw(20,7,"Seisi Kelas : Baik bu...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void dualimakelompok()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Bu Dosen : Baik, ini sudah saya bagi menjadi 25 kelompok, berikut nama-nama nya");refresh();Sleep(400);
	mvprintw(13,16,"           saya tulis di papan tulis...");refresh();Sleep(400);refresh();Sleep(400);
	mvprintw(14,16,"Juwita : Noza kita sekelompok, jadi seneng deh sekelompok sama kamu");refresh();Sleep(400);
	mvprintw(15,16,"Noza   : Iya aku juga seneng kok, btw mau nyicil hari ini aja gak?");refresh();Sleep(400);
	mvprintw(16,16,"Juwita : Ayo ayo, kalo di Kafe A aja mau gak??");refresh();Sleep(400);
	mvprintw(17,16,"Noza   : Ayo, abis kuliah bareng langsung kesana yaa");refresh();Sleep(400);
	mvprintw(18,16,"Juwita : Okee");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();	
}

void btw()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,15,"Noza   : Btw, mau bareng gak kesananya??");refresh();Sleep(400);
	mvprintw(13,15,"Juwita : E-eh gapapa ini???");refresh();Sleep(400);
	mvprintw(14,15,"Noza   : Gapapa kok.., nanti tunggu di depan gerbang ya, aku mau");refresh();Sleep(400);
	mvprintw(15,15,"         ngambil motor dulu di parkiran");refresh();Sleep(400);
	mvprintw(16,15,"Juwita : Oke, makasih banyak yaa");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void mesenminum()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,15,"Noza   : Aku mau beli Vanilla Latte, kamu mau apa?");refresh();Sleep(400);
	mvprintw(13,15,"Juwita : Aku juga mau sama kayak kamu aja dehh");refresh();Sleep(400);
	mvprintw(14,15,"Noza   : Oke, bang Vanilla Latte nya dua yaa");refresh();Sleep(400);
	mvprintw(17,15,"Abang-abang Kafe : Okee, nanti pesanannya di anter ya");refresh();Sleep(400);
	mvprintw(19,15,"Juwita & Noza    : Oke bang");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void indoor()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Noza   : Duduk didalem aja yuk");refresh();Sleep(400);
	mvprintw(13,16,"Juwita : Boleh-boleh, yang di situ saja ya");refresh();Sleep(400);
	mvprintw(14,16,"Noza   : Okee");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,24,"Panjang lebar mereka berdiskusi sampai kecape'an...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void capek()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,15,"Noza   : Aduh aku capek bangett, besok lagi aja yaa?");refresh();Sleep(400);
	mvprintw(13,15,"Juwita : Iya ini, aku juga sudah lumayan capek, mau disini lagi aja atau gimana?");refresh();Sleep(400);
	mvprintw(14,15,"Noza   : Boleh deh, pulang nya mau sekalian bareng nggak, mumpung kita searah...");refresh();Sleep(400);
	mvprintw(15,15,"Juwita : Boleh kok, tapi maaf yaa jadi nya ngerepotin kamu gini");refresh();Sleep(400);
	mvprintw(16,15,"Noza   : Iya santai aja kok");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,24,"Mereka berdua pun pulang bersama....");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void telpon()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,12,"Noza : Ajak Juwita pergi bareng ah...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,12,"Noza pun menelepon Juwita dan mengajaknya pergi bareng...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,12,"Noza   : Juwita, ke Kafe nya mau pergi bareng aku gak??");refresh();Sleep(400);
	mvprintw(13,12,"Juwita : Eh iya iya gapapa kok, aku tunggu ya..");refresh();Sleep(400);
	mvprintw(14,12,"Noza   : Siap otw");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void menatap()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,20,"Setelah itu mereka memesan minuman untuk melepas rasa lelah...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,20,"Sembari menunggu pesanan nya datang, Noza pun dengan rasa ");refresh();Sleep(400);
	mvprintw(13,20,"lelahnya reflek menatap wajah Juwita...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Noza : Dipikir-pikir aku kok ada yang aneh gitu ya ");refresh();Sleep(400);
	mvprintw(13,16,"       kalo liat Juwita, kira-kira kenapa ya...,");refresh();Sleep(400);
	mvprintw(14,16,"       apakah ini jangan-jangan yang dinamakan CINTA...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
		
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,20,"Pesanan pun datang dan mereka meminum ");refresh();Sleep(400);
	mvprintw(13,10,"sembari mengobrol santai...");refresh();Sleep(400);
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
		
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,10,"Juwita : Eh za, kamu kan ganteng, udah ada pacar belum za??");refresh();Sleep(400);
	mvprintw(13,10,"Noza   : E-Eh, btw belum ada sih wkwkw, kenapa memang nya?");refresh();Sleep(400);
	mvprintw(14,10,"Juwita : Gpp sih za, aku kepengen nanya aja...");refresh();Sleep(400);
	mvprintw(15,10,"Noza   : Owalah, wkwkw");refresh();Sleep(400);
 	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
		
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,18,"Setelah berpikir panjang, Noza pun merencanakan sesuatu...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();	 

	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
		
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Noza : Kayaknya aku sama Juwita cocok si, apa aku gaskan aja ya..., ");refresh();Sleep(400);
	mvprintw(13,16,"       Hmm aku siapin kata-kata dulu ah kayaknya...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void mobil()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
		
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,20,"Terlihat sebuah mobil keren datang ke Kafe...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,20,"Noza : Ah sekarang saja lah, gaskan!");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,20,"Saat mau nembak Juwita, rupanya...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void ketikung()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
		
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,10,"???? : Juwita, selama ini aku suka sama kamu, ");refresh();Sleep(400);
	mvprintw(13,10,"       aku tulus mencitaimu dari lubuk hatiku,");refresh();Sleep(400);
	mvprintw(14,10,"       ini aku bawa sedikit bingkisan untukmu,");refresh();Sleep(400);
	mvprintw(15,10,"       kalau kamu mau, mau gak jadi pacarku???");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Seisi Kafe : Cieeeeee, Terima! Terima! Terima!");refresh();Sleep(400);
	mvprintw(13,16,"Juwita : Iya, boleh kok, aku mau...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,5,"Noza yang tidak sengaja lewat pun kaget jika ada orang lain yang lebih dulu menembak Juwita...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,24,"Noza : Eh...  :\)");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Noza yang sangat kecewa karena ekspetasinya");refresh();Sleep(400);
	mvprintw(13,16,"tidak sesuai harapannya pun duduk kembali ke mejanya...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,10,"Noza   : Cie cie....");refresh();Sleep(400);
	mvprintw(13,10,"Juwita : Hehehe iya zaa, aku sebenernya udah lama deket sama si *****, ");refresh();Sleep(400);
	mvprintw(14,10,"         karena kami gak ada yang ngungkapin duluan, hehehe...., jadinya aku terima >////<");refresh();Sleep(400);
	mvprintw(15,10,"Noza   : Selamet yaa, langgeng pokoknya sama dia, eh btw kok mendung ya");refresh();Sleep(400);
	mvprintw(16,10,"Juwita : Iya makasih ya za, eh iya ya kayaknya mau ujan sih ini");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

void balik()
{
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,20,"Gak lama kemudian hujan pun turun...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Dengan beralasan klasik, Noza pun ingin pulang duluan karena patah hati...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,16,"Noza   : Eh maaf ya, aku pulang duluan, lupa ada jemuran belum di angkat");refresh();Sleep(400);
	mvprintw(13,16,"Juwita : Iya hati-hati ya za");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,18,"Noza pun pulang duluan dalam keadaan kehujanan bersama air matanya yang jatuh...,");refresh();Sleep(400);
	mvprintw(13,18,"sambil menatap ke arah langit hingga air matanya tidak terlihat");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,18,"Noza : Ya Tuhan sakiiiiit bangetttt hati iniiiiiiii!!!!");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,18,"Noza pun sampai dirumah dengan keadaan yang sangat sedih....");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
}

int main()
{
	int pil,pill,piil,pili,pilih;
	char Balik,Balikk,Baliik,Baalik,Baliko,b;
	
	a:
	awal();
	
	n:
	system("cls");
	narasi();
	
	system("cls");
	mimpi();
	
	system("cls");
	otw();
	
	system("cls");
	parkiran();
	
	system("cls"); //milih dulu cuyy
	initscr(); 
	WINDOW * win = newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,42,"Pilihan mu :");refresh();mvprintw(15,42,"1) Biarkan saja");refresh();mvprintw(16,42,"2) Mampirin");refresh();
	mvprintw(18,42,"Klik 1 atau 2 = ");refresh();
	scanw("%d",& pil);
	if (pil==1)
	{
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,12,"Karena kamu tidak berani mencoba, Doi pun jalan bareng sama cowok lain...");
		mvprintw(28,67,"Klik B untuk kembali ke awal = ");refresh();
		scanw("%d",& Balik);
		if (Balik==b)
		{
			goto n;
			
			wrefresh(win);
			getch();
			endwin();
		}
		else if (Balik!=b)
		{
			system("cls");
			initscr(); 
			WINDOW * win = newwin(29, 100, 1, 1);
			refresh();
			box(win, 0, 0);
	
			wrefresh(win);
			mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
			mvprintw(14,32,"ERROR, KAMU SALAH MENCET NGAB");
			
			goto n;
		
			wrefresh(win);
			getch();
			endwin();
		}
		
		wrefresh(win);
		getch();
		endwin();
	}
	else if (pil==2)
	{
		pilihanparkiranygbener();
		
		wrefresh(win);
		getch();
		endwin();
		
		goto g;
	}
	
	else if (pil!=1||pil!=2)
	{
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,32,"ERROR, KAMU SALAH MENCET NGAB");
		
		
		wrefresh(win);
		getch();
		endwin();
	}
	
	g:
	system("cls");
	gerbang();
	
	system("cls");
	dipanggil();
	
	k:
	system("cls");
	kelas();
	
	m:
	system("cls"); //milih lagi cuyy
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,35,"Pilihan mu :");refresh();mvprintw(15,35,"1) Duduk menjauh dari Juwita");refresh();mvprintw(16,35,"2) Duduk disebelah Juwita");refresh();
	mvprintw(18,35,"Klik 1 atau 2 = ");refresh();
	scanw("%d",& pill);
	if (pill==1)
	{
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,22,"Karena kamu menjauh, Juwita pun didekati teman-temannya");refresh();
		mvprintw(15,24,"dan kamu kehilangan kesempatan mendekati Juwita...");refresh();
		mvprintw(28,67,"Klik B untuk ngulang lagi... = ");refresh();
		scanw("%d",& Balikk);
		if (Balikk==b)
		{
			goto k;
			
			wrefresh(win);
			getch();
			endwin();
		}
		else if (Balikk!=b)
		{
			goto n;
		
			wrefresh(win);
			getch();
			endwin();
		}
		
		wrefresh(win);
		getch();
		endwin();
	}
	else if (pill==2)
	{
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(12,15,"Noza   : Eh aku boleh duduk disebelahmu nggak?");refresh();Sleep(500);
		mvprintw(14,15,"Juwita : Boleh aja kok, sini-sini, oiya btw ajarin aku Bahasa Inggris dong");refresh();Sleep(500);
		mvprintw(16,15,"Noza   : Oke, jadi gini-gini...");refresh();Sleep(500);
		mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
		
		wrefresh(win);
		getch();
		endwin();	
	}
	
	else if (pill!=1||pill!=2)
	{
		goto m;
		
		wrefresh(win);
		getch();
		endwin();
	}
	
	system("cls");
	selesaidiskusi();
	
	system("cls");
		initscr(); 
		newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,32,"Juwita : Makasih banyak ya Noza!");refresh();Sleep(400);mvprintw(15,32,"Noza : Eh iya-iya, gapapa kok");refresh();Sleep(400);
		mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
		
		wrefresh(win);
		getch();
		endwin();
		
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,25,"Kelas pun mulai, dan dosen pun masuk kelas...");refresh();getch();endwin();
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	bagikel();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,17,"Bu Dosen pun mengacak nama mahasiswa untuk membagikan kelompok...");refresh();
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();
	
	b:
	system("cls");
	dualimakelompok();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,29,"Juwita pun terlihat mengecek isi dompet...");
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls"); //milih lagi broowww
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,35,"Pilihan mu :");refresh();mvprintw(15,35,"1) Biarin dia kesana sendiri");refresh();mvprintw(16,35,"2) Tebengin dia kesananya");refresh();
	mvprintw(18,35,"Klik 1 atau 2 = ");refresh();
	scanw("%d",& piil);
	if (piil==1)
	{
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,22,"Karena kamu membiarkan dia jalan sendiri, Juwita pun ditebengin dengan teman cowok");refresh();Sleep(400);
		mvprintw(15,22,"cowok nya yang lebih keren dari kamu...");refresh();Sleep(400);
		mvprintw(28,67,"Klik B untuk ngulang lagi... = ");refresh();
		scanw("%d",& Baliik);
		if (Baliik==b)
		{
			goto b;
			
			wrefresh(win);
			getch();
			endwin();
		}
		else if (Baliik!=b)
		{
			goto n;
		
			wrefresh(win);
			getch();
			endwin();
		}
		
		wrefresh(win);
		getch();
		endwin();
	}
	else if (piil==2)
	{
		btw();
		
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,14,"Kuliah pun selesai, dan mereka pun otw ke Kafe A untuk berdiskusi tentang tugas");refresh();Sleep(400);
		mvprintw(15,14,"bahasa inggris...");refresh();Sleep(400);
		mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
		wrefresh(win);
		getch();
		endwin();
		
		goto c;	
	}
	
	else if (piil!=1||piil!=2)
	{
		goto n;
		
		wrefresh(win);
		getch();
		endwin();
	}
	
	c:
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,22,"Sesampainya di Kafe, mereka pun hendak memesan minuman...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	mesenminum();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,17,"Mereka pun nyari tempat duduk, ada outdoor dan indoor yang ber-Ac...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls"); //milih tempat duduk wak
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,35,"Pilihan mu :");refresh();mvprintw(15,35,"1) Duduk Outdoor");refresh();mvprintw(16,35,"2) Duduk Indoor");refresh();
	mvprintw(18,35,"Klik 1 atau 2 = ");refresh();
	scanw("%d",& pili);
	if (pili==1)
	{
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,22,"Noza : Eh duduk di luar aja yukk");refresh();Sleep(400);
		mvprintw(15,22,"Juwita : E-eh maaf yaa, kayaknya di luar banyak yang ngerokok, kayaknya aku ");refresh();Sleep(400);
		mvprintw(14,22,"langsung pulang deh...");refresh();Sleep(400);
		
		system("cls");
		initscr(); 
		newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,22,"Nt cuyy, doi gak mau kalau di luar, next time jangan salah pillih yaa...");refresh();Sleep(400);
		mvprintw(28,67,"Klik B untuk ngulang lagi... = ");refresh();
		scanw("%d",& Baalik);
		if (Baalik==b)
		{
			goto c;
			
			wrefresh(win);
			getch();
			endwin();
		}
		else if (Baalik!=b)
		{
			goto n;
		
			wrefresh(win);
			getch();
			endwin();
		}
		
		wrefresh(win);
		getch();
		endwin();
	}
	else if (pili==2)
	{
		indoor();
	
		wrefresh(win);
		getch();
		endwin();
		
		goto e;	
	}
	
	else if (pili!=1||pili!=2)
	{
		goto n;
		
		wrefresh(win);
		getch();
		endwin();
	}
	
	e:
	system("cls");
	capek();
	
	f:
	system("cls");
	initscr();
	int x,y; 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,33, "FINAL CHAPTER");
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");
	
	wrefresh(win);
	getch();
	endwin();

	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,7,"Keesokan harinya, Noza pun berencana untuk berdiskusi bersama Juwita");refresh();Sleep(400);
	mvprintw(13,7,"untuk menyelesaikan tugas mereka...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();

	o:
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,7,"Noza pun mau otw ke Kafe kemarin, ia pun berencana menyusul Juwita untuk pergi");refresh();Sleep(400);
	mvprintw(13,7,"bareng kesananya...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");//milih jemputttt
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(14,35,"Pilihan mu :");refresh();mvprintw(15,35,"1) Biarin Juwita Pergi Sendiri");refresh();mvprintw(16,35,"2) Ajak Juwita Pergi Bareng Telpon");refresh();
	mvprintw(18,35,"Klik 1 atau 2 = ");refresh();
	scanw("%d",& pilih);
	if (pilih==1)
	{
		system("cls");
		initscr(); 
		WINDOW * win = newwin(29, 100, 1, 1);
		refresh();
		box(win, 0, 0);
	
		wrefresh(win);
		mvprintw(2,29,"FAILING IN LOVE GAME SIMULATOR SEDERHANA");
		mvprintw(14,22,"Karena kamu membiarkan Juwita pergi sendiri, Juwita pun sampai di kafe bersama teman cowoknya...");refresh();Sleep(400);
		mvprintw(28,67,"Klik B untuk ngulang lagi... = ");refresh();
		scanw("%d",& Baliko);
		if (Baliko==b)
		{
			goto o;
			
			wrefresh(win);
			getch();
			endwin();
		}
		else if (Baliko!=b)
		{
			goto n;
		
			wrefresh(win);
			getch();
			endwin();
		}
		
		wrefresh(win);
		getch();
		endwin();
	}
	else if (pilih==2)
	{
		telpon();
	
		wrefresh(win);
		getch();
		endwin();
		
		goto s;	
	}
	
	else if (pilih!=1||pilih!=2)
	{
		goto n;
		
		wrefresh(win);
		getch();
		endwin();
	}
	
	s:
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,7,"Noza pun menyusul Juwita kerumahnya, dan sesampainya Noza disana,");refresh();Sleep(400);
	mvprintw(13,7,"mereka berdua pun langsung pergi ke Kafe...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,7,"Mereka pun langsung berdiskusi setelah sampai di Kafe dengan tergesa-gesa...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,7,"Karena deadline yang semakin mepet, mereka pun cepat-cepat menyelesaikan tugas nya...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	initscr(); 
	newwin(29, 100, 1, 1);
	refresh();
	box(win, 0, 0);
	
	wrefresh(win);
	mvprintw(2,29, "FAILING IN LOVE GAME SIMULATOR SEDERHANA");
	mvprintw(12,7,"Noza   : Aduh capek ya, untung masih sempet 2 menit...");refresh();Sleep(400);
	mvprintw(13,7,"Juwita : Iya ini za.., syukurlah ya...");refresh();Sleep(400);
	mvprintw(28,65,"Klik apa saja untuk melanjutkan...");refresh();
	
	wrefresh(win);
	getch();
	endwin();
	
	system("cls");
	menatap();
	
	system("cls");
	mobil();
	
	system("cls");
	ketikung();
	
	system("cls");
	balik();
	
	wrefresh(win);
	getch();
	endwin();
}

