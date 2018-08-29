#include <iostream>
#include <cmath>
using namespace std;

bool check(const int &num);

int main(int argc, char* argv[])
{
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 3; i < n-1; i++){
        if(check(i) && check(i+2)){
            cnt += 1;
            continue;
        }
    }
    cout << cnt << endl;

    return 0;
}

bool check(const int &m)
{

    for(int i = 2; i <= sqrt(m); i++){
        if(m % i == 0)
            return false;
    }
    return true;
}
