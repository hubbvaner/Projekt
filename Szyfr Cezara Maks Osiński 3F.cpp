#include <iostream>
#include <cstring>
using namespace std;
void szyfr(char slowo[], int klucz);
int main()
{
int klucz;
char slowo[200];
char wybor;
cout <<"wpisz klucz"<< endl;
cin >> klucz;
cout <<"wpisz slowo"<< endl;
cin >> slowo;
szyfr(slowo, klucz);
cout <<"zaszyfrowane : " <<slowo<< endl;
cout <<"rozszyfrowac? T/N :  \n";
cin >> wybor;
if (wybor == 'T')
{
szyfr(slowo, -klucz);
cout <<"po rozszyfrowaniu : " << slowo;
}
if (wybor == 'N')
{
exit;
}}
void szyfr(char slowo[], int klucz) {
int odleglosc;
odleglosc = strlen(slowo);
{
return;
}
if (klucz >= 0) {
for (int i = 0; i < odleglosc; i++) {
if (slowo[i] + klucz <= 'a') {
slowo[i] += klucz;
}
else {
slowo[i] = slowo[i] + klucz - 0;
}}}
else
{
for (int i = 0; i < odleglosc; i++) {
if (slowo[i] + klucz >= 'b') {
slowo[i] += klucz;
}
else {
slowo[i] = slowo[i] + klucz + 0;
}}}}