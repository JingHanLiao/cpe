#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cctype>

using namespace std;

int algo( int n )
{
    int cont = 1 ;

    while( n != 1 )
    {
        if( n % 2 != 0 )
        {
            n = 3 * n + 1;
        }
        else
        {
            n = n / 2;
        }

        cont++;
    }

    return cont;
}

int main()
{
    int i=0 , j=0;

    while( cin >> i >> j )
    {
        int min_num=0 , max_num=0 , cycle_num=0 , max_cycle=0;

        cout << i  << ' ' << j;

        min_num = min( i, j );

        max_num = max( i, j );

        for( int num = min_num ; num <= max_num ; num++ )
        {
            cycle_num = algo(num);

            if( cycle_num > max_cycle )
            {
                max_cycle = cycle_num;
            }
        }

        cout << ' ' << max_cycle << endl;
    }
}
