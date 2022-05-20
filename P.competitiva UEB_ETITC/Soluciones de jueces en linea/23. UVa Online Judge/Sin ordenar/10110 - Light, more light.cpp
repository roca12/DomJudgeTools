/*****************************************
 Light , more light
 ***ID: 10110
 ***Juez: UVA
 ***Tipo: Perfect Square
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int numD( long long n ){
    long long i;
    int cnt = 0 , ans = 1;
    for( i = 2 ; i * i <= n ; ++i ){
        cnt = 0;
        while( n % i == 0 ){ cnt++; n /= i;}
        ans *= ( cnt + 1 );
    }
    if( n > 1 ) ans *= 2;
    return ans;
}


int main(){
    long long n , i;
    map< long long  , bool > mp;
    mp[ 1 ] = 1;
    for( i = 2 ;  ; ++i ){
        mp[ i * i ] = 1;
        if( i * i > UINT_MAX ) break;
    }

    while( scanf("%lld" , &n ) , n ){
        printf("%s\n" , mp[ n ] == 1 ?"yes":"no" );
    }

    return 0;
}
