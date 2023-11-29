#include <iostream>
#include <cmath> //needed to use power
using namespace std;

class Number
{
    private:
        int num;
    public:
        Number(int n) {
            num = n;
        }
        int square() const{ //since the object/instance is constant, the method also has to be constant
           return(pow(num,2));
        };
};

int main() {
    int x;
    cin >> x;
    const Number myNum(x); //object/instance
    cout << myNum.square();
}
