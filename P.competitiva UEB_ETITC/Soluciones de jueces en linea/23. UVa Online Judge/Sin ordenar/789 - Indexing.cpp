/*****************************************
 Indexing
 ***ID: 789
 ***Juez: UVA
 ***Tipo: Map
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

#define MAX 105
char s[ MAX ];
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';}
map< string , set< int > > mp;

int main(){
    int line = 1 , i; char c;
    scanf(" %c" , &c );
    gets( s );
    while( gets( s ) ){
        for( i = 0 ; s[ i ] ; ++i ) if( !isLetter( s[ i ] ) ) s[ i ] = ' ';
        stringstream ss( s );
        while( ss>>s )
            if( s[ 0 ] == c ) mp[ s ].insert( line );
        line++;
    }

    for( map< string , set< int > > :: iterator it = mp.begin(); it != mp.end() ; ++it ){
        printf("%s" , (it -> first).c_str() );
        for( set< int > :: iterator it2 = ( it ->second ).begin() ; it2 != ( it ->second ).end() ; ++it2 )
            printf(" %d" , *it2 );
        printf("\n");
    }
    return 0;
}
