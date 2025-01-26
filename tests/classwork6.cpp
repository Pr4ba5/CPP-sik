#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Choice to run the loop upto: ";
    cin >> n;

    for(int i = 0; i <= n; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }

    cout << "The sum is " << sum << endl;

    return 0;
}