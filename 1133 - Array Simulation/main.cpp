/*
MMP""MM""YMM   db      `7MN.   `7MF'`7MMM.     ,MMF' .g8""8q.`YMM'   `MM'
P'   MM   `7  ;MM:       MMN.    M    MMMb    dPMM .dP'    `YM.VMA   ,V
     MM      ,V^MM.      M YMb   M    M YM   ,M MM dM'      `MM VMA ,V
     MM     ,M  `MM      M  `MN. M    M  Mb  M' MM MM        MM  VMMP
     MM     AbmmmqMA     M   `MM.M    M  YM.P'  MM MM.      ,MP   MM
     MM    A'     VML    M     YMM    M  `YM'   MM `Mb.    ,dP'   MM
   .JMML..AMA.   .AMMA..JML.    YM  .JML. `'  .JMML. `"bmmd"'   .JMML.
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <string>
#include <map>

#define pii pair <int,int>
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
#define ms(a,b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)
#define MP make_pair
#define oo 1<<29
#define dd double
#define ll long long
#define EPS 10E-10
#define ff first
#define ss second
#define MAX 10000
#define SZ(a) (int)a.size()
#define getint(a) scanf("%d",&a)
#define loop(i,n) for(int i=0;i<n;i++)
#define TEST_CASE(t) for(int z=1;z<=t;z++)
#define PRINT_CASE printf("Case %d:\n",z)
#define all(a) a.begin(),a.end()
#define intlim 2147483648
#define inf 1000000
#define rtintlim 46340
#define llim 9223372036854775808
#define rtllim 3037000499
#define ull unsigned long long
#define I int

using namespace std;

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int ara[110];
    char ch;
    int t,n,m;
    getint(t);
    TEST_CASE(t)
    {
        getint(n);
        getint(m);

        loop(i,n)
        getint(ara[i]);
        int x,y;
        getchar();
        while(m--)
        {
            ch=getchar();
            if(ch=='P')
            {
                getint(x);
                getint(y);
                swap(ara[x],ara[y]);
            }
            else if(ch=='S')
            {
                getint(x);
                loop(i,n)
                ara[i]+=x;
            }
            else if(ch=='M')
            {
                getint(x);
                loop(i,n)
                ara[i]*=x;
            }
            else if(ch=='D')
            {
                getint(x);
                loop(i,n)
                ara[i]/=x;
            }
            else if(ch=='R')
            {
                reverse(ara,ara+n);
            }
            getchar();
        }
        PRINT_CASE;
        loop(i,n)
        {
            pf("%d",ara[i]);
            if(i+1!=n) pf(" ");
        }
        pf("\n");
    }
    return 0;
}
