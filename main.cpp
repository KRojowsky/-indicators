#include <iostream>

void generuj( int * begin, int * end, int start )
{
    while( begin != end )
    {
        * begin = start;
        ++start;
        ++begin;
    }
}

void wypisz( int * begin, int size )
{
    while( size > 0 )
    {
        std::cout << * begin << ' ';
        ++begin;
        --size;
    }
}

int main()
{
    int tab[ 10 ];
    generuj( tab, tab + 10, 100 );
    wypisz( tab, 10 );
}
