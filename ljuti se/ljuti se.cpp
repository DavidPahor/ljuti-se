#include <iostream>
#pragma comment(lib,"graphics.lib")
#include "graphics.h"
using namespace std;

struct pijun
{
	int id = 0;
	bool gor = false, dol = false, lij = false, des = false;
	float x = 0, y = 0;
	bool kuca = true;
	bool cilj = false;
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
	kp = x/12;
	rp = x / 72;
	if (boj == 0) 
	{
		bojs[boj].id = boj + 1;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i+1;
			bojs[boj].pijuni[i].des = true;
		}
		setfillstyle(SOLID_FILL, YELLOW);
		fillellipse(p1 - rv / 2.5, p1 - rv / 2.5, rp, rp);
		bojs[boj].pijuni[0].x = p1 - rv / 2.5;
		bojs[boj].pijuni[0].y = p1 - rv / 2.5;
		fillellipse(p1 + rv / 2.5, p1 - rv / 2.5, rp, rp);
		bojs[boj].pijuni[1].x = p1 + rv / 2.5;
		bojs[boj].pijuni[1].y = p1 - rv / 2.5;
		fillellipse(p1 + rv / 2.5, p1 + rv / 2.5, rp, rp);
		bojs[boj].pijuni[2].x = p1 + rv / 2.5;
		bojs[boj].pijuni[2].y = p1 + rv / 2.5;
		fillellipse(p1 - rv / 2.5, p1 + rv / 2.5, rp, rp);
		bojs[boj].pijuni[3].x = p1 - rv / 2.5;
		bojs[boj].pijuni[3].y = p1 + rv / 2.5;
	}

	if (boj == 1)
	{

		bojs[boj].id = boj + 1;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i + 1;
			bojs[boj].pijuni[i].dol = true;
		}
		setfillstyle(SOLID_FILL, CYAN);
		fillellipse((p1 + pom * 2) - rv / 2.5, p1 - rv / 2.5, rp, rp);
		bojs[boj].pijuni[0].x = (p1 + pom * 2) - rv / 2.5;
		bojs[boj].pijuni[0].y = p1 - rv / 2.5;
		fillellipse((p1 + pom * 2) + rv / 2.5, p1 - rv / 2.5, rp, rp);
		bojs[boj].pijuni[1].x = (p1 + pom * 2) + rv / 2.5;
		bojs[boj].pijuni[1].y = p1 - rv / 2.5;
		fillellipse((p1 + pom * 2) + rv / 2.5, p1 + rv / 2.5, rp, rp);
		bojs[boj].pijuni[2].x = (p1 + pom * 2) - rv / 2.5;
		bojs[boj].pijuni[2].y = p1 + rv / 2.5;
		fillellipse((p1 + pom * 2) - rv / 2.5, p1 + rv / 2.5, rp, rp);
		bojs[boj].pijuni[3].x = (p1 + pom * 2) - rv / 2.5;
		bojs[boj].pijuni[3].y = p1 + rv / 2.5;
	}
	if (boj == 2)
	{

		bojs[boj].id = boj + 1;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i + 1;
			bojs[boj].pijuni[i].lij = true;
		}
		setfillstyle(SOLID_FILL, GREEN);
		fillellipse(p1 - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		bojs[boj].pijuni[0].x = p1 - rv / 2.5;
		bojs[boj].pijuni[0].y = (p1 + pom * 2) - rv / 2.5;
		fillellipse(p1 + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		bojs[boj].pijuni[1].x = p1 + rv / 2.5;
		bojs[boj].pijuni[1].y = (p1 + pom * 2) - rv / 2.5;
		fillellipse(p1 + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
		bojs[boj].pijuni[2].x = p1 + rv / 2.5;
		bojs[boj].pijuni[2].y = (p1 + pom * 2) + rv / 2.5;
		fillellipse(p1 - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
		bojs[boj].pijuni[3].x = p1 - rv / 2.5;
		bojs[boj].pijuni[3].y = (p1 + pom * 2) - rv / 2.5;
	}

	if (boj == 3)
	{

		bojs[boj].id = boj + 1;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i + 1;
			bojs[boj].pijuni[i].gor = true;
		}
		setfillstyle(SOLID_FILL, RED);
		fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		bojs[boj].pijuni[0].x = (p1 + pom * 2) - rv / 2.5;
		bojs[boj].pijuni[0].y = (p1 + pom * 2) - rv / 2.5;
		fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) - rv / 2.5, rp, rp);
		bojs[boj].pijuni[1].x = (p1 + pom * 2) + rv / 2.5;
		bojs[boj].pijuni[1].y = (p1 + pom * 2) - rv / 2.5;
		fillellipse((p1 + pom * 2) + rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
		bojs[boj].pijuni[2].x = (p1 + pom * 2) + rv / 2.5;
		bojs[boj].pijuni[2].y = (p1 + pom * 2) + rv / 2.5;
		fillellipse((p1 + pom * 2) - rv / 2.5, (p1 + pom * 2) + rv / 2.5, rp, rp);
		bojs[boj].pijuni[3].x = (p1 + pom * 2) - rv / 2.5;
		bojs[boj].pijuni[3].y = (p1 + pom * 2) + rv / 2.5;
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

void pijuni(int x, boja* bojs)
{
	int br, boj;
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


}

int vani(int i, boja* bojs)
{
	for (int j = 0; j < 4; j++)
	{
		if (bojs[i].pijuni[j].kuca == false)
		{
			return j;
		}
	}
	return 0;
}

void vanid(float x, boja* bojs, int i, int pij, float kp) {
	float rp = x / 72;
	float pom = (1.0 / 3) * x;//360
	float p1 = pom / 2;//180
	float rv = p1 / 2;
	float rm = rv / 4;
	if (i == 0) 
	{
		setfillstyle(SOLID_FILL, YELLOW);
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rm, rm);
		bojs[i].pijuni[pij].x = x / 2 - (5 * kp);
		bojs[i].pijuni[pij].y = (x / 2) - kp;
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rp, rp);
	}
}

void kretanje(float x, boja* bojs, int boj)
{
	float kp = x / 12;
	getch();
	int ran = (rand() % 6)+1;
	int pij;
	cout << ran;
	if (pij = vani(boj, bojs) == 0) {
		if (ran == 6)
		vanid(x, bojs, boj, pij,  kp);
	}
	else
		cout << "MEH";
}

void igra(float x, boja* bojs)
{
	bool gotovo = false;
	while (gotovo == false) {
		for (int i = 0; i < 4; i++) 
		{
			if (bojs[i].id != 0) 
			{
				kretanje(x,bojs,i);
			}
		}
	}

}

void poc(int x, boja *bojs)
{
	templat(x);
	pijuni(x, bojs);
}

void ljuti(float x)
{
	boja bojs[4];
	poc(x,&bojs[0]);
	igra(x, &bojs[0]);
	//for (int i = 0; i < 4; i++) {
	//	cout << bojs[i].id << endl;
	//	for (int j = 0; j < 4; j++)
	//	{
	//		cout << bojs[i].pijuni[j].id;
	//	}
	//	cout << endl << endl;
	//}
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