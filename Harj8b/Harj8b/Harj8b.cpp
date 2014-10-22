/**************************
*Ohjelman nimi:Harjoitus 8b
*Tekijä:Ville Hakola
*lyhyt kuvaus
*Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
*järjestyksessä (pienimmästä suurimpaan) näytölle.
*Käyttäen liukulukuja.
*Versio:versio Skynet ohjelmasta Suuruusjärjestys
*PVM:24.9.2014
******************************/

#include<iostream>
using namespace std;
void main()
{
	cout << "Ohjelma tulostaa luvut pienimmästä suurimpaan.\n";
	float A, B, C;
	cout << "\nAnna luku A ";
	cin >> A;
	cout << "\nAnna luku B ";
	cin >> B;
	cout << "\nAnna luku C ";
	cin >> C;
	if ((A < B) && (B < C))
		cout << A << " < " << B << " < " << C;
	if ((C < B) && (B < A))
		cout << C << " < " << B << " < " << A;
	if ((A < C) && (C < B))
		cout << A << " < " << C << " < " << B;
	if ((B < C) && (C < A))
		cout << B << " < " << C << " < " << A;
	if ((C < A) && (A < B))
		cout << C << " < " << A << " < " << B;
	if ((B < A) && (A < C))
		cout << B << " < " << A << " < " << C;
	cout << "\nBE HAPPY\n";






}
