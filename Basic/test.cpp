#include <iostream>
#include <set>

using namespace std;

int main()
{
    int ary[1000];
    int n;
    set<int, greater<int>> numberSet;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> ary[i];
        numberSet.insert(ary[i]);
    }

    for(int i = 0; i < n; i++){
        int temp = ary[i];
        if(numberSet.find(temp) != numberSet.end()){
            while(temp != 1){
                if(temp%2){
                    temp = (3*temp+1)/2;
                }
                else{
                    temp /= 2;
                }

                if(numberSet.find(temp) != numberSet.end()){
                    numberSet.erase(temp);
                }
            }
        }
    }


    int cnt = 0;
    for(int item : numberSet){
        cout << item;
        if(cnt++ < numberSet.size()-1)
            cout << " ";
    }


    return 0;
}
