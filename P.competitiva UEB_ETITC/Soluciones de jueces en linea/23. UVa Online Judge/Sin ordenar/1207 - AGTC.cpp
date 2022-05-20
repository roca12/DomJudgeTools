/*****************************************
  AGTC
 ***ID: 1207
 ***Juez: UVA
 ***Tipo: Edit Distance
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
#define MAX 1005
char A[ MAX ] ,B[ MAX ];
int lenA , lenB , dp[ MAX ][ MAX ];

int MIN( int a , int b , int c ){ return min( a , min( b , c ) ); }

int editDistance(){
    int i , j;
    for( i = 0 ; i <= lenA ; ++i ) dp[ i ][ 0 ] = i;
    for( j = 0 ; j <= lenB ; ++j ) dp[ 0 ][ j ] = j;

    for( i = 1 ; i <= lenA ; ++i ){
        for( j = 1 ; j <= lenB ; ++j ){
            dp[ i ][ j ] = MIN( dp[ i - 1 ][ j ] + 1 ,
                                dp[ i ][ j - 1 ] + 1 ,
                                dp[ i - 1 ][ j - 1 ] + ( A[ i - 1 ] == B[ j - 1 ] ? 0 : 1 ) );
        }
    }
    return dp[ lenA ][ lenB ];
}

int main(){
    while( scanf("%d" , &lenA ) != EOF ){
        if( lenA > 0 ) scanf("%s" , &A );
        scanf("%d" , &lenB );
        if( lenB > 0 ) scanf("%s" , &B );
        printf("%d\n" , editDistance() );
    }
    return 0;
}
