#include <iostream>
#include <cmath>
#include <cinttypes>

using namespace std;

int main()
{
    //Easily solved by formula. Let's do it as naively as possible
    int64_t res = 1;
    int v = 1;
    int lim = 1001;
    for(int n = 3; n <= lim; n+=2)
    {
        v+=(n-1);
        res+=v;
        
        v+=(n-1);
        res+=v;

        v+=(n-1);
        res+=v;

        v+=(n-1);
        res+=v;
    }

    cout << res << endl;
}