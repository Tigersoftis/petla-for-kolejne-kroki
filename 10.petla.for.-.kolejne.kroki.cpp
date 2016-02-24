/*Petle for uzywamy praktycznie zawsze, gdy znamy ilosc danych, 
jaka mamy wczytac, wypisac lub zmienic. Jesli chcemy policzyc srednia 
z okreœlonej liczby liczb, wczytaæ okreœlon¹ iloœæ danych z pliku lub 
wypisaæ okreœlon¹ iloœæ danych na ekran, pêtla for jest do tego po prostu idealna. */

#include <iostream>
using namespace std;

int main() 
{
cout << "Kroki: ";
for (int krok = 0; krok < 10; krok++)
/*W nawiasie kolejne elementy rozdzielone srednikiem to:
- nadawanie poczatkowych wartosci zmiennym (int ... - mo¿liwe jest 
  utworzenie tymczasowej zmiennej, która bêdzie widoczna tylko 
  i wy³¹cznie wewn¹trz pêtli for)
- warunek koncz¹cy petle for 
- zwiekszenie (lub zmniejszenie) licznika petli 
  ++ to operator inkrementacji, ++ = +1, -- = -1 */
	{
	cout << krok << " ";	
	}
cout << endl << endl;

system ("pause");
	return 0;
}		
