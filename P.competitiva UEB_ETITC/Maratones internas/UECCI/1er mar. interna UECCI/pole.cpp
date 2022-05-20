#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<sstream>
#include<map>
#include<utility>

using namespace std;

#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf printf
#define clr(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define fr first
#define sc second
#define inf (1<<30)-2
#define sz  100

typedef long long int ll;
typedef unsigned long long int ull;



//int xx[] = {0, 1,  0, -1,    -1, 1,  1, -1 };     //4 & 8 move
//int yy[] = {1, 0, -1,  0,     1, 1, -1,-1 };


/*------------------------------------------------------------*/




typedef pair<int,int> pi;

vector<pi>vec;
int ans[1008];

int main()
{
    int tst,i,j,k,l;

    while(sf1(tst)==1)
    {
        if(tst==0)
            return 0;
        int flag=0;
        vec.clear();
        clr(ans,-1);
        for(i=0; i<tst; i++)
        {
            sf2(j,k);

            vec.pb(mp(j,k));
        }
        for(i=0; i<tst; i++)
        {
            if(i+vec[i].sc<0 || i+vec[i].sc>=tst)
            {
                flag=1;
                break;
            }
            if(ans[i+vec[i].sc]==-1)
            {
                ans[i+vec[i].sc]=vec[i].fr;
            }
            else
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            pf("-1\n");
        else
        {
            pf("%d",ans[0]);
            for(i=1; i<tst; i++)
                pf(" %d",ans[i]);
            pf("\n");
        }

    }

    return 0;
}