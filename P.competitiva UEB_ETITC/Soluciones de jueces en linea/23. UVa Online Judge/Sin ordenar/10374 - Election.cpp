/*****************************************
 Election
 ***ID: 10374
 ***Juez: UVA
 ***Tipo: Data Structure, Map
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
    int t , n;
    char s[ 85 ], s2[ 85 ];
    scanf("%d" , &t );
    map<string , int >::iterator it;
    for( int q = 0 ; q < t ; ++q ){
        if( q )putchar('\n');
        scanf("%d" , &n );
        gets( s );
        map<string , string > name;
        map<string , int > mp;

        while( n-- ){
            gets( s );
            gets( s2 );
            name[ s ] = s2;
            mp[ s ] = 0;
        }

        scanf("%d" , &n );
        gets( s );
        while( n-- ){
            gets( s );
            mp[ s ]++;
        }

        int maxi = 0;
        bool b = true;
        string resp;
        for( it = mp.begin() ; it != mp.end() ; ++it ){
            if( (*it).second  > maxi ){
                maxi = (*it).second;
                resp = (*it).first;
            }
        }

        for( it = mp.begin() ; it != mp.end() ; ++it ){
            if( (*it).second  == maxi && (*it).first != resp ){
                b = false;
                break;
            }
        }

        if( b ) printf("%s\n" , name[ resp ].c_str() );
        else puts( "tie" );
    }

    return 0;
}
