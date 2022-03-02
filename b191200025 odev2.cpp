//Öğrenci No: b191200025 
//Ad Soyad: Ayşe Tuba KAHRAMAN
//Ders: Programlamaya Giriş
//Ödev: 2
#include <iostream>
using namespace std;

void soruA();
void soruB();

int main()
{
	setlocale(LC_ALL, "Turkish");
	soruA();
	soruB();
}

void soruA()
{
	int count = 10;
	cout << "Dizi boyutunu giriniz:" << endl;
	cin >> count;
	char command = ' ';
	int array[100] = {};
	for (int i = 0; i < count; i++)
	{
		array[i] = rand() % 100;
	}
	int currentData = 1;
	while (command != 'c' && command != 'C')
	{
		if (command == 'a' || command == 'A')
		{
			if (currentData == count)
				currentData = 1;
			else
				currentData += 1;
		}
		else if (command == 'd' || command == 'D')
		{
			if (currentData == 1)
				currentData = count;
			else
				currentData -= 1;
		}

		for (int i = 0; i < count; i++)
		{
			if (i == currentData - 1)
			{
				cout << "---->";
				cout << array[i] << endl;
			}
			else
				cout << "     " << array[i] << endl;
		}
		cout << "Aşağı ilerlemek için 'A' veya 'a' tuşuna basınız" << endl;
		cout << "Yukarı ilerlemek için 'D' veya 'd' tuşuna basınız" << endl;
		cout << "Çıkmak için 'C' veya 'c' tuşuna basınız" << endl;
		cin >> command;
	}
}

void soruB()
{
	int count = 0;
	int small = 0;
	int big = 0;
	cout << "N değerini NxN dizi için giriniz :" << endl;
	cin >> count;
	cout << "Küçük sayıyı giriniz...:";
	cin >> small;
	cout << "Büyük sayıyı giriniz...:";
	cin >> big;
	int array[20][20] = {};
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			array[i][j] = rand() % 10;
			cout << "   " << array[i][j];
		}
		cout << endl;
	}
	cout << "Şifrelenmiş Dizi" << endl;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (array[i][j] < small)
				cout << "   " << "*";
			else if (array[i][j] > big)
				cout << "   " << "-";
			else
				cout << "   " << "~";
		}
		cout << endl;
	}
}
