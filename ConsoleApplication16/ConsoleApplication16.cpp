#include <iostream>
#include <time.h>
using namespace std;

// ООП #1. Введение в ООП

class Point {
	// Спецификатор
	// Реализация - инакспулированная часть класса
private:
	float x; // поля класса Point
	float y;

	// Интерфейс класса
public:
	// Методы класса Point
	void Print() {
		cout << x << "\t" << y << endl;
	}
	void Init() {
		x = rand() % 10;
		y = rand() % 20;
	}
	void Init(float _x, float _y) {
		x = _x;
		y = _y;
	}

	// Методы акссесоры:
	// Модификаторы (сеттер(ы))
	void SetX(int v) {
		if (v > 0) {
			x = v;
		}
	}
	void SetY(int v) {
		if (v > 0) {
			y = v;
		}
	}

	// Инспекторы (геттер(ы))
	int GetX() {
		return x;
	}
	int GetY() {
		return y;
	}

	void Add(int a) {
		x += a;
		y += a;
	}

	Point Sum(Point b) {
		Point rez;
		rez.x = x + b.x;
		rez.y = y + b.y;

		return rez;
	}

	Point Divide(Point b) {
		Point rez;
		if (b.x != 0 && b.y != 0)
		{
			rez.x = x / b.x;
			rez.y = y / b.y;
		}
		else {
			cout << "Can't divide by 0!" << endl;
		}
		return rez;
	}
};



int main() {
	system("chcp 1251");
	//Сид генератора чисел
	srand(time(NULL));
	// Экземпляр класса
	Point a;

	a.Init();
	cout << "Числители: " << endl;
	a.Print();

	Point b;

	b.Init(2.0f, 10.0f);
	cout << "Знаменатели: " << endl;
	b.Print();

	Point rez = a.Divide(b);
	cout << "Результат: " << endl;
	rez.Print();


	return 0;
}