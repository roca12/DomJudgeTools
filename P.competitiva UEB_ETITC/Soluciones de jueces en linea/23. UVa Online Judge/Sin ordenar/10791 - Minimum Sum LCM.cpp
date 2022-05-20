/*****************************************
  Minimum Sum LCM
 ***ID: 10791
 ***Juez: UVA
 ***Tipo: Prime Factorization
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
long long pot(long long a,long long b){
	if(!b) return 1;
	if(b&1)return a*pot(a*a,b>>1); 
	else return pot(a*a,b>>1);
}

long long solve( long long n ){
    if( n == 1 ) return 2;
    map< long long , int > f;
    map< long long , int > :: iterator it;
    long long i;
    for( i = 2 ; i * i <= n ; ++i ){
        while( n % i == 0 ){
            f[ i ]++;
            n /= i;
        }
    }
    if( n > 1 ) f[ n ]++;

    long long ans = 0;
    for( it = f.begin() ; it != f.end() ; ++it ){
        ans += pot( it -> first , it -> second );
    }
    if( f.size() == 1 ) ans++;
    return ans;
}

int main(){
    int q = 1;
    long long n;
    while( scanf("%lld" , &n ) , n ){
        printf("Case %d: %lld\n" , q++ , solve( n ) );
    }

    return 0;
}
