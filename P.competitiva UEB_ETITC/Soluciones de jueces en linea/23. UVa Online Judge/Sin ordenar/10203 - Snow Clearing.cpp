/*****************************************
 Snow Clearing
 ***ID: 10203
 ***Juez: UVA
 ***Tipo: Ad hoc
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;


double dist( int x1 , int y1 , int x2 , int y2 ){
    return sqrt( ( x1 - x2 ) * ( x1 - x2 ) + ( y1 - y2 ) * ( y1 - y2 ) );
}
#define MAX 300
char line[ MAX ];
int main(){
    int t ,x ,y ,x1 , y1 , x2 , y2 , time;
    double d , D;

    scanf("%d" , &t );
    while( t-- > 0 && scanf("%d %d" , &x , &y ) == 2 ){
        d = 0.0;
        gets( line );
        while( gets( line ) && sscanf( line , "%d %d %d %d" , &x1 , &y1 , &x2 , &y2 ) == 4 ){
            D = dist( x1 , y1 , x2 , y2 );
            d += D/10000.0;
        }
        time = ( int )( d * 60 + 0.5 ) ;

        printf("%d:%02d\n" , time/60 , time % 60 );
        if( t ) printf("\n");
    }

    return 0;
}
