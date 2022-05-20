/*****************************************
 Taxicab Numbers
 ***ID: 962
 ***Juez: UVA
 ***Tipo: Math
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
#define MAX 1000100001
#define pb push_back
vector< long long > cubes;
set< long long > s;
map< long long , long long > mp;
void gen(){
    long long i , j;
    for( i = 1 ; i * i * i < MAX; ++i ){
        cubes.pb( i * i * i );
    }
    for( i = 0 ; i < cubes.size() ; ++i ){
        for( j = 0 ; j < cubes.size() ; ++j ){
            if( cubes[ i ] + cubes[ j ] > MAX ) break;
            mp[ cubes[ i ] + cubes[ j ] ]++;
        }
    }
}

int main(){

    gen();
    vector< long long > v;
    long long n , rg ,ans;
    map< long long , long long >::iterator it = mp.begin();
    for( ; it != mp.end() ; ++it ){
        if( it -> second > 2 ){
            v.pb( it -> first );
        }
    }
    int i;
    while( scanf("%lld %lld" , &n , &rg ) != EOF ){
        for( i = 0 ; i < v.size() ; ++i ){
            if( v[ i ] >= n ) break;
        }
        ans = 0;
        for( ; i < v.size() ; ++i ){
            if( v[ i ] > n + rg ) break;
            ans++;
            printf("%lld\n" , v[ i ] );
        }
        if( ans == 0 ) puts("None");
    }

    return 0;
}
