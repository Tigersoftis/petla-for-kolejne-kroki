/*Petle for uzywamy praktycznie zawsze, gdy znamy ilosc danych, 
jaka mamy wczytac, wypisac lub zmienic. Jesli chcemy policzyc srednia 
z okre�lonej liczby liczb, wczyta� okre�lon� ilo�� danych z pliku lub 
wypisa� okre�lon� ilo�� danych na ekran, p�tla for jest do tego po prostu idealna. */

#include <iostream>
using namespace std;

int main() 
{
cout << "Kroki: ";
for (int krok = 0; krok < 10; krok++)
/*W nawiasie kolejne elementy rozdzielone srednikiem to:
- nadawanie poczatkowych wartosci zmiennym (int ... - mo�liwe jest 
  utworzenie tymczasowej zmiennej, kt�ra b�dzie widoczna tylko 
  i wy��cznie wewn�trz p�tli for)
- warunek koncz�cy petle for 
- zwiekszenie (lub zmniejszenie) licznika petli 
  ++ to operator inkrementacji, ++ = +1, -- = -1 */
	{
	cout << krok << " ";	
	}
cout << endl << endl;

system ("pause");
	return 0;
}		
