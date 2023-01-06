#include <bits/stdc++.h>
#define LL long long 
using namespace std;

LL sumrange(LL a, LL b)
{
    LL res1 = (b * (b + 1)) / 2;
    LL res2 = (a * (a - 1)) / 2;

    return res1 - res2;
}

LL process(LL l, LL a, LL n, LL d)
{

    if (a < d)
        return -1;
    if (d == 1)
        return l * a;
    LL upperlimit = (n - 1) / (d - 1);

    LL res = 0;

    for (int x = 1; x <= upperlimit; x++)
    {
        LL extra = ((n - 1) - (d - 1) * x);
        if (extra + a * x < l)
            continue;

        LL temp = extra * a;

        LL num = (l - extra) / x;

        LL subtotal = sumrange(a - num + 1, a);
        temp += subtotal * x;
        if ((l - extra) % x != 0)
        {
            LL last = (l - extra) % x;
            temp += last * (a - num);
        }

        if (temp > res)
            res = temp;
    }

    if (res == 0)
        res = -1;
    return res;
}

int main()
{

    int T;cin>>T;
    for(int i=0;i<T;i++)
    {
        LL l, a, n, d;
        cin>>l>>a>>n>>d;

        LL res = process(l, a, n, d);

        if (res == -1)
        {
            cout<<"SAD"<<endl;
        }
        else
        {
            cout<<res<<endl;
        }
    }
    return 0;
}