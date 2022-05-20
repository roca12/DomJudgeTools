/*****************************************
  Hay Points
 ***ID: 10295
 ***Juez: UVA
 ***Tipo: Map
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
    int m ,n , val , l;
    char s[ 1005 ];
    map<string , int > mp;
    scanf("%d %d" , &m , &n );
    while( m-- ){
        scanf("%s %d" , &s , &val );
        mp[ s ] = val;
    }
    val = 0;
    bool point;
    while( n && gets( s ) ){
        l = strlen( s );
        point = false;
        if( s[ l - 1 ] == '.') point = true;
        s[ l++ ] = ' ';
        s[ l ] = '\0';
        char *p = strtok( s , " ");
        while( p != NULL ){
            val += mp[ p];
            p = strtok( NULL , " ");
        }
        if( point ){ n--; printf("%d\n" , val ); val = 0;}
    }

    return 0;
}
