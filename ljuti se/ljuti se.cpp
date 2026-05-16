#include <iostream>
#pragma comment(lib,"graphics.lib")
#include "graphics.h"
using namespace std;

struct pijun
{
	int id = 0;
	bool gor = false, dol = false, lij = false, des = false;
	float x = 0, y = 0;
	bool kuca = false;
};

struct boja
{
	//zuta 1, plava 2, zelena 3, crvena 4
	int id = 0; 
	pijun pijuni[4];
};

void stvori(int boj, float x, boja* bojs)
{
	float p1, pom, rv, rm, kp, rp;
	pom = (1.0 / 3) * x;//360
	p1 = pom / 2;//180
	rv = p1 / 2;
	rm = rv / 4;
	kp = ((x / 2)) / 6;
	rp = x / 72;
	if (boj == 0) 
	{
		bojs[boj].id = boj;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i;
			bojs[boj].pijuni[i].des = true;
		}
		setfillstyle(SOLID_FILL, YELLOW);
		fillellipse(p1 - rv / 2.5, p1 - rv / 2.5, rp, rp);
		fillellipse(p1 + rv / 2.5, p1 - rv / 2.5, rp, rp);
		fillellipse(p1 + rv / 2.5, p1 + rv / 2.5, rp, rp);
		fillellipse(p1 - rv / 2.5, p1 + rv / 2.5, rp, rp);
	}

	if (boj == 1)
	{

		bojs[boj].id = boj;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i;
			bojs[boj].pijuni[i].dol = true;
		}
		setfillstyle(SOLID_FILL, CYAN);
		fillellipse((p1 + pom * 2) - rv / 2.5, p1 - rv / 2.5, rp, rp);
		fillellipse((p1 + pom * 2) + rv / 2.5, p1 - rv / 2.5, rp, rp);
		fillellipse((p1 + pom * 2) + rv / 2.5, p1 + rv / 2.5, rp, rp);
		fillellipse((p1 + pom * 2) - rv / 2.5, p1 + rv / 2.5, rp, rp);
	}
	if (boj == 2)
	{

		bojs[boj].id = boj;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i;
			bojs[boj].pijuni[i].lij = true;
		}
		setfillstyle(SOLID_FILL, GREEN);
		fillellipse(p1 - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		fillellipse(p1 + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		fillellipse(p1 + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
		fillellipse(p1 - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
	}

	if (boj == 3)
	{

		bojs[boj].id = boj;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i;
			bojs[boj].pijuni[i].gor = true;
		}
		setfillstyle(SOLID_FILL, RED);
		fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
		fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
	}
}

void templat(float x) 
{
	float p1, pom, rv, rm, kp;
	pom = (1.0 / 3) * x;//360
	p1 = pom / 2;//180
	rv = p1 / 2;
	rm = rv / 4;
	kp = ((x / 2)) / 6;

	initwindow(x, x, "Covjece ne ljuti se");
	setbkcolor(WHITE);
	cleardevice();
	setcolor(BLACK);

	circle(p1, p1, rv);
	circle(p1 + pom * 2, p1, rv);
	circle(p1 + pom * 2, p1 + pom * 2, rv);
	circle(p1, p1 + pom * 2, rv);

	setfillstyle(SOLID_FILL, GREEN);
	fillellipse(p1 - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);
	fillellipse(p1 - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 - kp, (x / 2) + (5 * kp), rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x / 2, (x / 2) + (i * kp), rm, rm);//kuca
	}

	setfillstyle(SOLID_FILL, RED);
	fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 + (5 * kp), (x / 2) + kp, rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x / 2 + (i * kp), (x / 2), rm, rm);//kuca
	}


	setfillstyle(SOLID_FILL, BLUE);
	fillellipse((p1 + pom * 2) - rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) + rv / 2.5, p1 + rv / 2.5, rm, rm);
	fillellipse((p1 + pom * 2) - rv / 2.5, p1 + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 + kp, (x / 2) - (5 * kp), rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x / 2, (x / 2) - (i * kp), rm, rm);//kuca
	}


	setfillstyle(SOLID_FILL, YELLOW);
	fillellipse(p1 - rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, p1 - rv / 2.5, rm, rm);
	fillellipse(p1 + rv / 2.5, p1 + rv / 2.5, rm, rm);
	fillellipse(p1 - rv / 2.5, p1 + rv / 2.5, rm, rm);//krug
	fillellipse(x / 2 - (5 * kp), (x / 2) - kp, rm, rm);
	for (int i = 1; i < 5; i++)
	{
		fillellipse(x / 2 - (i * kp), (x / 2), rm, rm);//kuca
	}

	for (int i = 0; i < 11; i++)
	{
		circle(kp + (i * kp), x / 2 - kp, rm);
		circle(kp + (i * kp), x / 2 + kp, rm);
		circle(x / 2 - kp, kp + (i * kp), rm);
		circle(x / 2 + kp, kp + (i * kp), rm);
	}
	circle(x / 2 - (5 * kp), (x / 2), rm);
	circle(x / 2 + (5 * kp), (x / 2), rm);
	circle(x / 2, (x / 2) - (5 * kp), rm);
	circle(x / 2, (x / 2) + (5 * kp), rm);
	setfillstyle(SOLID_FILL, YELLOW);
}

void pijuni(int x) 
{
	int br, boj;
	boja bojs[4];
	do 
	{
		system("CLS");
		cout << "Koliko igraca igra: ";
		cin >> br;
	} while (br <= 0 || br >= 5);
	for (; br != 0; br--)
	{
		do {
			cout << "Boja \n1-zuta\n2-plava\n3-zelena\n4-crvena\n";
			cin >> boj;
		} while (boj <= 0 || br >= 5);
		stvori(boj-1, x, &bojs[0]);
	}

	//for (int i = 0; i < 4; i++) {
	//	cout << bojs[i].id << endl;
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << bojs[i].pijuni[j].id;
	//	}
	//	cout << endl << endl;
	//}


}


void igra(float x) 
{

}

void poc(int x)
{
	templat(x);
	pijuni(x);
}

void ljuti(float x)
{
	poc(x);
	igra(x);
}


int main()
{
	float x, y;
	x = 1080;
	//char z;
	//cout << "Upisi velicinu:";
	//cin >> x >> z >> y;
	//if (x > y)
	//	x = y;
	ljuti(x);

	getch();
	closegraph();
	return 0;
}