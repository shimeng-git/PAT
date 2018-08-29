#include <iostream>
#include <set>
using namespace std;

int main(int argc, char* argv[])
{
    int num[100];
    int k, n;
    cin >> k;
    set<int> numberSet;
    while(k--){
        cin >> n;
        numberSet.insert(n);
    }

    int temp;
    for(auto it = numberSet.begin(); it != numberSet.end(); ++it){
        temp = *it;
        while(temp != 1){
            if(temp%2){
                temp /= 2;
            }
            else{
                temp = (3*temp+1)/2;
            }
            if(numberSet.find(temp) != numberSet.end()){
                numberSet.erase(temp);
            }
        }
    }

    for(int item : numberSet){
        cout << item << endl;
    }

    return 0;
}
