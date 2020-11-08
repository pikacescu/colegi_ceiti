#include <iostream>

using namespace std;

int main()
{
    {
        auto prod = [] (int num) -> int
		{
			int n = 1;
			while(num != 0 && n != 0){n *= num % 10; num /= 10;}
			return n;
		};
		int n , k;
		int mx = 1;
		cout <<"dati numarul de cifre al numarului"<<endl;
		cin >>n;
		cout <<"dati numarul k"<<endl;
		cin >>k;
		for (int i = 0; i < n; i++)
			mx *= 10;
		for (int i = mx / 10; i <= mx; i++)
			if (k == prod(i)) cout<< i<< ";";
		cout<< endl;
	}
	cout<< "######################################"<<endl;


	{
		int n, k;
		cout <<"dati numarul de cifre al numarului"<<endl;
		cin >>n;
		cout << "dati numarul k"<< endl;
		cin >>k;
		int mx = 1; //p este contorul produsului
		for (int i = 0; i < n; i++)
			mx *= 10;

		for (int i = mx / 10; i < mx; i++)
		{
			int prod = 1, r = i; //produsul
			while(prod && r > 0)
			{
                prod *= r % 10;
                r /= 10;
			}
            if (k == prod) cout<< i<< ";";
		}

		cout<< endl;
	}
    return 0;
}
