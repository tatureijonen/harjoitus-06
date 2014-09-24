/*
TATU REIJONEN - IIO14S2

Harjoitus 6 (palautus vko 40)
Kirjoita ohjelma, joka kysyy k‰ytt‰j‰lt‰ lompakossa olevan raham‰‰r‰n
ja lihapiirakan hinnan.

Ohjelma tutkii, onko k‰ytt‰j‰ll‰ varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon j‰‰ viel‰ rahaa.
Muuten ohjelma kehottaa k‰ytt‰j‰‰ paastoamaan.

K‰yt‰ vain kahta muuttujaa. ‰l‰ v‰henn‰ lompakon sis‰lt‰‰, ellet voi
ostaa lihapiirakkaa.

*/

#include <iostream>
using namespace std;
void main()
{
	int luku1, luku2;

	cout << "Paljon sulla on fyrkkaa?";
	cin >> luku1;

	cout << "Paljon lortsy maksaa?";
	cin >> luku2;

	if (luku1 >= luku2)
		cout << "Fyrkkaa jaljella " << (luku1 - luku2);
	else cout << "Kaik on menny, osta mopo ja paastoa";
}