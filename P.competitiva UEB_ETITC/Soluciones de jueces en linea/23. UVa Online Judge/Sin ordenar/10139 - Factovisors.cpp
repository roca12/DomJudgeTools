/*****************************************
Factovisors
 ***ID: 10139
 ***Juez: UVA
 ***Tipo: Prime Factors
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>>

using namespace std;
map< long long , int > getFactors( long long num ){
    map< long long , int > factores;
    for( long long i = 2 ; i * i <= num ; ++i ){
        while( num % i == 0 ){
            factores[ i ]++;
            num /= i;
        }
    }
    if( num > 1 ) factores[ num ]++;
    return factores;
}

int main(){
    int s;
    long long n , m , prime , aux;
    bool possible;
    map< long long , int >::iterator it;
    map< long long , int > fM;
    while( scanf("%lld %lld" , &n , &m ) != EOF ){
        fM = getFactors( m );
        possible = true;
        for( it = fM.begin() ; it != fM.end() ; ++it ){
            s = 0;
            prime = it -> first;
            aux = n;
            while( prime <= aux ){
                s += aux/prime;
                prime *= it -> first;
                if( s >= it -> second ) break;
            }
            if( s < it -> second ){ possible = false; break;}
        }
        if( !possible ) printf("%lld does not divide %lld!\n" , m , n );
        else printf("%lld divides %lld!\n" , m , n );
    }

    return 0;
}
