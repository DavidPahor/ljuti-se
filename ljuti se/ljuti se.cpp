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
	bool start = false;
	bool kraj = false;
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
	kp = x / 12;
	rp = x / 72;
	if (boj == 0)
	{
		bojs[boj].id = boj + 1;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i + 1;
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
		bojs[boj].pijuni[3].x = (p1 + pom * 2) + rv / 2.5;
		bojs[boj].pijuni[3].y = p1 + rv / 2.5;
	}

	if (boj == 2)
	{

		bojs[boj].id = boj + 1;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i + 1;
			bojs[boj].pijuni[i].lij = true;
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

	if (boj == 3)
	{

		bojs[boj].id = boj + 1;
		for (int i = 0; i < 4; i++) {
			bojs[boj].pijuni[i].id = i + 1;
			bojs[boj].pijuni[i].gor = true;
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


	setfillstyle(SOLID_FILL, CYAN);
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
}

void pijuni(float x, boja* bojs)
{
	int br, boj;
	do
	{
		system("CLS");
		cout << "Koliko igraca igra: ";
		cin >> br;
		//br = 1;
	} while (br <= 0 || br >= 5);
	for (; br != 0; br--)
	{
		do {
			cout << "Boja \n1-zuta\n2-plava\n3-crvena\n4-zelena\n";
			cin >> boj;
			//boj = 1;
		} while (boj <= 0 || br >= 5);
		stvori(boj - 1, x, &bojs[0]);
	}


}

bool vanine(int i, boja* bojs)
{

	for (int j = 0; j < 4; j++)
	{
		if (bojs[i].pijuni[j].kuca == false)
		{
			return 0;
		}
	}
	return 1;
}

int unupij(int i, boja* bojs)
{
	for (int j = 0; j < 4; j++)
	{
		if (bojs[i].pijuni[j].kuca)
		{
			return j;
		}
	}
}

int vanipij(int i, boja* bojs, int in)
{
	for (int j = in; j < 4; j++)
	{
		if (bojs[i].pijuni[j].kuca == false)
		{
			return j;
		}
	}
}

void vani(float x, boja* bojs, int i, int pij, float kp) {
	cout << "vani" << endl;
	float rp = x / 72;
	float pom = (1.0 / 3) * x;//360
	float p1 = pom / 2;//180
	float rv = p1 / 2;
	float rm = rv / 4;
	bojs[i].pijuni[pij].kuca = false;
	bojs[i].pijuni[pij].start = true;
	if (i == 0)
	{
		setfillstyle(SOLID_FILL, YELLOW);
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rm, rm);
		bojs[i].pijuni[pij].x = x / 2 - (5 * kp);
		bojs[i].pijuni[pij].y = (x / 2) - kp;
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rp, rp);
	}
	if (i == 1)
	{
		setfillstyle(SOLID_FILL, CYAN);
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rm, rm);
		bojs[i].pijuni[pij].x = x / 2 + kp;
		bojs[i].pijuni[pij].y = (x / 2) - (5 * kp);
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rp, rp);
	}
	if (i == 3)
	{
		setfillstyle(SOLID_FILL, GREEN);
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rm, rm);
		bojs[i].pijuni[pij].x = x / 2 - kp;
		bojs[i].pijuni[pij].y = (x / 2) + (5 * kp);
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rp, rp);
	}
	if (i == 2)
	{
		setfillstyle(SOLID_FILL, RED);
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rm, rm);
		bojs[i].pijuni[pij].x = x / 2 + (5 * kp);
		bojs[i].pijuni[pij].y = (x / 2) + kp;
		fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rp, rp);
	}
}

bool provjeri(boja* bojs, int boj, int pij, float* okretaj, int rando)
{
	bool ran = false;
	for (int i = 0; i < 24; i += 2)
	{
		//cout << bojs[boj].pijuni[pij].x << "=+" << *(okretaj + i) << " i " << bojs[boj].pijuni[pij].y << "=+" << *(okretaj + i + 1) << endl;
		if ((bojs[boj].pijuni[pij].x == *(okretaj + i)) && (bojs[boj].pijuni[pij].y == *(okretaj + (i + 1))))
		{
			//cout << "DA!!, promijeni" << endl;
			bojs[boj].pijuni[pij].dol = false;
			bojs[boj].pijuni[pij].gor = false;
			bojs[boj].pijuni[pij].lij = false;
			bojs[boj].pijuni[pij].des = false;

			if (i == 0 || i == 4 || i == 8) {
				if (i == 0 && bojs[boj].pijuni[pij].start == false) {
					ran = true;
				}
				bojs[boj].pijuni[pij].dol = true;
				//cout << "dol true" << endl;
				break;
			}
			else if (i == 2 || i == 18 || i == 22) {
				if (i == 18 && bojs[boj].pijuni[pij].start == false) {
					ran = true;
				}
				bojs[boj].pijuni[pij].des = true;
				//cout << "des true" << endl;

				break;
			}
			else if (i == 6 || i == 10 || i == 14) {
				if (i == 6 && bojs[boj].pijuni[pij].start == false) {
					ran = true;
				}
				bojs[boj].pijuni[pij].lij = true;
				//cout << "lij true" << endl;

				break;
			}
			else if (i == 12 || i == 16 || i == 20) {
				if (i == 12 && bojs[boj].pijuni[pij].start == false) {
					ran = true;
				}
				bojs[boj].pijuni[pij].gor = true;
				//cout << "gor true" << endl;
				break;
			}
		}
	}
	return ran;
}

void korak(boja* bojs, int i, int pij, float x)
{
	float rp = x / 72;
	if (i == 0)
		setfillstyle(SOLID_FILL, YELLOW);
	if (i == 1)
		setfillstyle(SOLID_FILL, CYAN);
	if (i == 3)
		setfillstyle(SOLID_FILL, GREEN);
	if (i == 2)
		setfillstyle(SOLID_FILL, RED);
	fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rp, rp);
}

void pojedi(float x, boja* bojs, int boj, int pij)
{
	bojs[boj].pijuni[pij].kuca = true;
	float pom = (1.0 / 3) * x;//360
	float p1 = x / 6;//180
	float rv = p1 / 2;
	if (boj == 0)
	{
		if (pij == 0) {
			bojs[boj].pijuni[pij].x = p1 - rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 - rv / 2.5;
		}
		else if (pij == 1) {
			bojs[boj].pijuni[pij].x = p1 + rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 - rv / 2.5;
		}
		else if (pij == 2) {
			bojs[boj].pijuni[pij].x = p1 + rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 + rv / 2.5;
		}
		else if (pij == 3) {
			bojs[boj].pijuni[pij].x = p1 - rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 + rv / 2.5;
		}
	}

	if (boj == 1)
	{
		if (pij == 0) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) - rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 - rv / 2.5;
		}
		else if (pij == 1) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) + rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 - rv / 2.5;
		}
		else if (pij == 2) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) - rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 + rv / 2.5;
		}
		else if (pij == 3) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) - rv / 2.5;
			bojs[boj].pijuni[pij].y = p1 + rv / 2.5;
		}
	}

	if (boj == 2)
	{
		if (pij == 0) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) - rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) - rv / 2.5;
		}
		else if (pij == 1) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) + rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) - rv / 2.5;
		}
		else if (pij == 2) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) + rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) + rv / 2.5;
		}
		else if (pij == 3) {
			bojs[boj].pijuni[pij].x = (p1 + pom * 2) - rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) + rv / 2.5;
		}
	}

	if (boj == 3)
	{
		if (pij == 0) {
			bojs[boj].pijuni[pij].x = p1 - rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) - rv / 2.5;
		}
		else if (pij == 1) {
			bojs[boj].pijuni[pij].x = p1 + rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) - rv / 2.5;
		}
		else if (pij == 2) {
			bojs[boj].pijuni[pij].x = p1 + rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) + rv / 2.5;
		}
		else if (pij == 3) {
			bojs[boj].pijuni[pij].x = p1 - rv / 2.5;
			bojs[boj].pijuni[pij].y = (p1 + pom * 2) - rv / 2.5;
		}
	}
}

void jedenje(float x, boja* bojs, int boj, int pij)
{
	for (int i = 0; i < 4; i++)
	{
		if (i != boj) {
			for (int j = 0; j < 4; j++) {
				if ((bojs[boj].pijuni[pij].x == bojs[i].pijuni[j].x) && (bojs[boj].pijuni[pij].y == bojs[i].pijuni[j].y)) {
					cout << "jede" << endl;
					pojedi(x, bojs, i, j);
				}
			}
		}
	}
}

void kuckret(boja* bojs, int boj, int pij, float* kuca, float x)
{
	for (int i = 0; i < 8; i += 2)
	{
		if ((bojs[boj].pijuni[pij].x == *(kuca + i)) && (bojs[boj].pijuni[pij].y == *(kuca + (i + 1))))
		{
			//cout << "DA!!, promijeni" << endl;
			bojs[boj].pijuni[pij].dol = false;
			bojs[boj].pijuni[pij].gor = false;
			bojs[boj].pijuni[pij].lij = false;
			bojs[boj].pijuni[pij].des = false;

			if (i == 0 && boj==0) {
				bojs[boj].pijuni[pij].des = true;
				bojs[boj].pijuni[pij].cilj = true;
				cout << "Unutra!";
				break;
			}
			else if (i == 2 && boj == 1) {
				bojs[boj].pijuni[pij].dol = true;
				bojs[boj].pijuni[pij].cilj = true;
				break;
			}
			else if (i == 4 && boj == 2) {
				bojs[boj].pijuni[pij].lij = true;
				bojs[boj].pijuni[pij].cilj = true;
				break;
			}
			else if (i == 6 && boj == 3) {
				bojs[boj].pijuni[pij].gor = true;
				bojs[boj].pijuni[pij].cilj = true;
				break;
			}
		}
	}
}

bool kucica(boja* bojs, int boj, int pij, float x)
{
	float kp = x / 12;

	for (int i = 0; i < 5; i++)
	{

		if ((bojs[boj].pijuni[pij].x == (x / 2 - kp) - (i * kp)) && (bojs[boj].pijuni[pij].y == x / 2 + kp))
		{
			if (boj == 0) {
				bojs[boj].pijuni[pij].cilj = true;
				return 1;
			}
		}
		if ((bojs[boj].pijuni[pij].x == x / 2 - kp) && (bojs[boj].pijuni[pij].y == (x / 2 - kp) - (i * kp)))
		{

			if (boj == 1) {
				bojs[boj].pijuni[pij].cilj = true;
			return 1;
		}
		}
		if ((bojs[boj].pijuni[pij].x == (x / 2 + kp) + (i * kp)) && (bojs[boj].pijuni[pij].y == x / 2 - kp))
		{

			if (boj == 2) {
				bojs[boj].pijuni[pij].cilj = true;
			return 1;
		}
		}
		if ((bojs[boj].pijuni[pij].x == x / 2 + kp) && (bojs[boj].pijuni[pij].y == (x / 2 + kp) + (i * kp)))
		{

			if (boj == 3) {
				bojs[boj].pijuni[pij].cilj = true;
				return 1;
			}
		}
	}
	if (bojs[boj].pijuni[pij].cilj)
		return 1;

	return 0;
}

bool provjer(boja* bojs, int boj, int pij, float x)
{
	float kp = x / 12;
	if (boj == 0) {
		if (bojs[boj].pijuni[pij].x == x/2) {
			return 0;
		}
	}
	if (boj == 1) {
		if (bojs[boj].pijuni[pij].y == x / 2) {
			return 0;
		}
	}
	if (boj == 2) {
		if (bojs[boj].pijuni[pij].x  == x / 2) {
			return 0;
		}
	}
	if (boj == 3) {
		if (bojs[boj].pijuni[pij].y == x / 2) {
			return 0;
		}
	}
	return 1;
}

void bojaj(float x, boja* bojs)
{
	templat(x);
	float rp = x / 72;
	float rm = x / 48;
	float kp = x / 12;
	if (bojs[3].id != 0) {
		setfillstyle(SOLID_FILL, GREEN);
		for (int i = 0; i < 4; i++) {
			fillellipse(bojs[3].pijuni[i].x, bojs[3].pijuni[i].y, rp, rp);
		}
	}
	if (bojs[2].id != 0) {
		setfillstyle(SOLID_FILL, RED);
		for (int i = 0; i < 4; i++) {
			fillellipse(bojs[2].pijuni[i].x, bojs[2].pijuni[i].y, rp, rp);
		}
	}
	if (bojs[1].id != 0) {
		setfillstyle(SOLID_FILL, CYAN);
		for (int i = 0; i < 4; i++) {
			fillellipse(bojs[1].pijuni[i].x, bojs[1].pijuni[i].y, rp, rp);
		}
	}
	if (bojs[0].id != 0) {
		setfillstyle(SOLID_FILL, YELLOW);
		for (int i = 0; i < 4; i++) {
			fillellipse(bojs[0].pijuni[i].x, bojs[0].pijuni[i].y, rp, rp);
		}
	}
}

bool koraci(float x, boja* bojs, int i, int pij, float kp, int rando) {
	float sx = bojs[i].pijuni[pij].x;
	float sy = bojs[i].pijuni[pij].y;
	float rm = x / 48;
	float rp = x / 72;
	float okretaj[12][2] = {
	{(x / 2) + kp,(x / 2) - (5 * kp) },//0  i1
	{(x / 2) + kp,(x / 2) - kp },//2  i2
	{(x / 2) + (5 * kp),(x / 2) - kp },//4  i3
	{(x / 2) + (5 * kp),(x / 2) + kp },//6  i4
	{(x / 2) + kp,(x / 2) + kp },//8  i5
	{(x / 2) + kp,(x / 2) + (5 * kp) },//10  i6
	{(x / 2) - kp,(x / 2) + (5 * kp) },//12  i7
	{(x / 2) - kp,(x / 2) + kp },//14  i8
	{(x / 2) - (5 * kp),(x / 2) + kp },//16  i9
	{(x / 2) - (5 * kp),(x / 2) - kp },//18  i10
	{(x / 2) - kp,(x / 2) - kp },//20  i11
	{(x / 2) - kp,(x / 2) - (5 * kp) }//22  i12
	};

	float kuca[4][2] = {

	{x / 2 - (5 * kp),x / 2} ,//lij  0
	{x / 2,x / 2 - (5 * kp)},//gor  2
	{x / 2 + (5 * kp),x / 2},//des  4
	{x / 2,x / 2 + (5 * kp)},//dol  6
	};

	if (kucica(bojs, i, pij, x))
	{

		if (bojs[i].pijuni[pij].cilj == 0)
			bojs[i].pijuni[pij].cilj = true;
		for (; rando != 0; rando--) {
			if (bojs[i].pijuni[pij].des == true)
				bojs[i].pijuni[pij].x += kp;
			else if (bojs[i].pijuni[pij].lij == true)
				bojs[i].pijuni[pij].x -= kp;
			else if (bojs[i].pijuni[pij].dol == true)
				bojs[i].pijuni[pij].y += kp;
			else if (bojs[i].pijuni[pij].gor == true)
				bojs[i].pijuni[pij].y -= kp;
			kuckret(bojs, i, pij, &kuca[0][0], rando);
			provjeri(bojs, i, pij, &okretaj[0][0], rando);
			if (provjer(bojs, i, pij, x) == 0) {
				bojs[i].pijuni[pij].x = sx;
				bojs[i].pijuni[pij].y = sy;
				return 0;
			}
		}
	}
	else
	{
		for (; rando != 0; rando--) {
			if (bojs[i].pijuni[pij].des == true)
				bojs[i].pijuni[pij].x += kp;
			else if (bojs[i].pijuni[pij].lij == true)
				bojs[i].pijuni[pij].x -= kp;
			else if (bojs[i].pijuni[pij].dol == true)
				bojs[i].pijuni[pij].y += kp;
			else if (bojs[i].pijuni[pij].gor == true)
				bojs[i].pijuni[pij].y -= kp;
			if (provjeri(bojs, i, pij, &okretaj[0][0], rando))
				rando++;
		}
	}

	korak(bojs, i, pij, x);
	if (bojs[i].pijuni[pij].start)
		bojs[i].pijuni[pij].start = false;

	jedenje(x, bojs, i, pij);
	setfillstyle(SOLID_FILL, WHITE);
	fillellipse(sx, sy, rm, rm);
	fillellipse(bojs[i].pijuni[pij].x, bojs[i].pijuni[pij].y, rp, rp);
	bojaj(x, bojs);
	cout << "koraci" << endl;
	return 1;

}


void kretanje(float x, boja* bojs, int boj)
{
	int j =0;
	float rp = x / 72;
	float rm = x / 48;
	float kp = x / 12;
	int ran;
	int pij;
	bool smije = true;
	if (vanine(boj, bojs)) { //bacanje 3 pouta nema nikoga vani
		for (int i = 0; i < 3; i++)
		{

			getch();
			ran = (rand() % 6) + 1;
			cout << ran << endl;
			if (ran == 6) {
				pij = unupij(boj, bojs);
				vani(x, bojs, boj, pij, kp);
				do {
					pij = vanipij(boj, bojs,j);
					ran = (rand() % 6) + 1;
					getch();
					cout << ran << endl;
					koraci(x, bojs, boj, pij, kp, ran);
					fillellipse(bojs[boj].pijuni[pij].x, bojs[boj].pijuni[pij].y, rp, rp);
					bojaj(x, bojs);
				} while (ran == 6);
				break;
			}
		}
	}
	else {
		do {
			getch();
			ran = (rand() % 6) + 1;
			cout << ran << endl;
			if (ran == 6) { //ako nema nikoga na polju
				for (int i = 0; i < 4; i++) {
					if (bojs[boj].pijuni[i].start == true) {
						smije = false;
					}
				}
				if (smije == true) {
					for (int i = 0; i < 4; i++) {
						if (bojs[boj].pijuni[i].kuca == true) {
							vani(x, bojs, boj, i, kp);
							break;
						}
					}
				}
				else {
					for (; j < 5; j++) {
						pij = vanipij(boj, bojs,j);
						if (koraci(x, bojs, boj, pij, kp, ran))
							break;
						if (j == 4)
							return;
					}
				}
			}
			else {

				for (; j < 5; j++) {
					pij = vanipij(boj, bojs,j);
					if (koraci(x, bojs, boj, pij, kp, ran))
						break;
					if (j == 4)
						return;
				}
			}
		} while (ran == 6);
	}
}

void igra(float x, boja* bojs)
{
	bool gotovo = false;
	while (gotovo == false) {
		for (int i = 0; i < 4; i++)
		{
			if (bojs[i].id != 0)
			{
				kretanje(x, bojs, i);
				cout << endl;
			}
		}
	}

}

void poc(float x, boja* bojs)
{
	templat(x);
	pijuni(x, bojs);
}

void ljuti(float x)
{
	srand(time(NULL));
	boja bojs[4];
	poc(x, &bojs[0]);
	system("CLS");
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

	initwindow(x, x, "Covjece ne ljuti se");
	setbkcolor(WHITE);
	cleardevice();
	ljuti(x);

	getch();
	closegraph();
	return 0;
}