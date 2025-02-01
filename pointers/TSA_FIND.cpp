#include <iostream>
using namespace std;
int main(){
    float radius, height;
    float *ptrR, *ptrH;
    float tsa, csa, voc;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Enter the height: ";
    cin >> height;

    ptrR = &radius;
    ptrH = &height;


    tsa = 2 * 3.14 * (*ptrR) * ((*ptrH) + (*ptrR));
    csa = 2 * 3.14 * (*ptrR) * (*ptrH);
    voc = 3.14 * (*ptrR) * (*ptrR) * (*ptrH);

    cout << "The total surface area of cylinder is " << tsa << endl;
    cout << "The curved surface area of cylinder is " << csa << endl;
    cout << "The volume of cylinder is " << voc << endl;

    

    return 0;
}