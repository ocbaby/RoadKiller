/*

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#define LONG 10
#define MAXSIZE 100
typedef enum state Grid[MAXSIZE + 2][MAXSIZE + 2];
int writemap(Grid map, int x, int y, int c, int b, char p);

int main(){
	Grid map;
	int x = 4;
	int y = LONG;
	char player = '@';
	int c;
	srand(time(NULL));
	while (1){
		int r = 0;
		int b = 1;
		long t = 1;
		c = (rand() % 4) * 2;
		if (c > 0){
			while (1) {
				char unch;
				unch = 'p';
				if (_kbhit())unch = _getch();
				if (unch == 'a'&&x != 2)x = x - 2;
				else if (unch == 'd'&&x != 6)x = x + 2;
				else if (unch == 'w'&&y != 1)y = y - 1;
				else if (unch == 's'&&y != LONG)y = y + 1;
				if (writemap(map, x, y, c, b, player)) { r = 1; break; }
				Sleep(30-(t*4)%30);
				t++;
				if (t % 2 == 1)b++;
				if (b > LONG)break;
			}
		}
		if (r){
		printf("GAME OVER\nPress <Enter> to replay.");
		while (getchar() != '\n');
		system("cls");
		}
	}
	return 0;
}

int writemap(Grid map, int x, int y, int c, int b, char p){

	COORD loc;
	loc.X = 0;
	loc.Y = 0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), loc);//return

	int a=0;
	int row, col;
	
	putchar('\n');
	putchar('\n');

	for (row = 1; row <= LONG; row++){
		for (col = 1; col <= 7; col++)
			if (col == 1 | col == 3 | col == 5 | col == 7)
				putchar('|');
			else {
				if (col == c&&row == b) {
					putchar('*');
					if (col == x&&row == y)a=1;
				}
				else if (col == x && row == y)putchar(p);
				else putchar(' ');
			}
			putchar('\n');
		}
	return a;
}

*/