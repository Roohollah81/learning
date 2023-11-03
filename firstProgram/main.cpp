#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=100; i++){

        int latitude = rand() % 181 + (-90);
        int longitude = rand() % 361 + (-180);

        cout<<latitude << "," << longitude<<endl;

    }
    return 0;
}


// how to generate random lat,long coordinates / DONE
// how to save coordinattes in csv file
