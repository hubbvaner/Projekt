#include<iostream>

using namespace std;

void szyfrowanie(int klucz, char tab[])
{
	int dl;
	dl = strlen(tab);


	if (!(klucz >= -26 && klucz <= 26)) return;

	if (klucz >= 0)
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz <= 'z')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz - 26;
	else
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz >= 'a')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz + 26;
}

int main()
{
	char tab[999];

	int klucz;

	cout << "Podaj wyraz: ";
	cin >> tab;

	cout << "Podaj klucz przesuniecia: ";
	cin >> klucz;

	szyfrowanie(klucz, tab);

	cout << "Po zaszyfrowaniu: " << tab << endl;

	szyfrowanie(-klucz, tab);

	cout << "Po rozszyfrowaniu: " << tab << endl;


}
