/*****************************************
 Loansome Car Buyer
 ***ID: 10114
 ***Juez: UVA
 ***Tipo: Ad hoc , simulation
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(){
    int m , t , x , val , borrow;
    double v;
    double pay , loan , dep[ 105 ] , payoff;
    while( scanf("%d %lf %lf %d" , &m , &pay , &loan , &t )  ,m > -1 ){
        memset( dep , 0 , sizeof( dep ) );
        for( int i = 0 ; i < t ; ++i ){
            scanf("%d %lf" , &x , &v );
            dep[ x ] = v;
        }

        for( int i = 1 ; i <= m ; ++i ){
            if( dep[ i ] == 0 ) dep[ i ] = dep[ i - 1 ];
        }
        val = pay + loan;
        int i = 0;
        payoff = loan/(double)m;
        for(  ; i < m ; ++i ){
            val = val - val * dep[ i ] + 1E-9;
            if( i )loan -= payoff;
            if( loan < val ) break;
        }

        if( i == 1 )puts("1 month");
        else printf("%d months\n" , i );

    }
    return 0;
}
