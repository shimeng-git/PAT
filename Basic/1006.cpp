#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

    int n;
    cin >> n;
    int ary[3];

    for(int i = 2; i >= 0; i--){
        ary[i] = n%10;
        n /= 10;
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < ary[i]; j++){
            switch(i){
                case 0:
                    cout << "B";
                    break;
                case 1:
                    cout << "S";
                    break;
                case 2:
                    cout << j+1;
                    break;
            }
        }
    }


    return 0;
}
