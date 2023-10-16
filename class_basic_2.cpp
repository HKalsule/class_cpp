#include <iostream>
using namespace std;

class Cube
{
    public:
    double width;
    double height;
    double length;
    
    void Volume()
    {
    Cube cube1;
    cout << "Enter Width Of The Cube :- " << endl;
    cin >> cube1.width;

    cout << "Enter Height Of The Cube :- " << endl;
    cin >> cube1.height;

    cout << "Enter Length Of The Cube :- " << endl;
    cin >> cube1.length;
    
    double volume=cube1.width*cube1.height*cube1.length;
    cout << "Volume Of The Cube Is :- " << endl;
    cout << volume << endl;
    }
};
int main()
{
    Cube cube1;
    cube1.Volume();
    return 0;
}