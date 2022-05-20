/*****************************************
  Matrix Transpose
 ***ID: 10895
 ***Juez: UVA
 ***Tipo: Ad hoc
 ******************************************/

#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(){
    int h , w, k , col[ 10005 ], num;
    while( scanf("%d %d" , &h , &w ) == 2 ){
        vector<pair<int , int > > v[ 10005 ] , T[ 10005 ];
        for( int i = 0 ; i < h ; ++i ){
            scanf("%d" , &k );
            for( int j = 0 ; j < k ; ++j ){
                scanf("%d" , &col[ j ] );
            }

            for( int j = 0 ; j < k ; ++j ){
                scanf("%d" , &num );
                v[ i ].push_back( make_pair( col[ j ] , num ) );
            }
        }

        for( int i = 0 ; i < h ; ++i ){
            for( int j = 0 ; j < v[ i ].size(); ++j ){
                T[ v[ i ][ j ].first - 1 ].push_back( make_pair( i + 1 , v[ i ][ j ].second ) );
            }
        }
        printf("%d %d\n" , w , h );

        for( int i = 0 ; i < w ; ++i ){
            printf("%d" , T[ i ].size() );
            for( int j = 0 ; j < T[ i ].size() ; ++j ){
                printf(" %d" , T[ i ][ j ].first );
            }
            putchar('\n');
            for( int j = 0 ; j < T[ i ].size() ; ++j ){
                if( j != 0 )printf(" ");
                printf("%d" , T[ i ][ j ].second );
            }
            putchar('\n');
        }
    }

    return 0;
}
