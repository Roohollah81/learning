#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int latitude;
    int longitude;

    std::ofstream myfile;
    myfile.open ("C:\\Users\\Rasoul\\Desktop\\coordinates.csv");
    myfile << "latitude,longitude\n";

    for(int i=1; i<=5; i++){

        latitude = rand() % 181 + (-90);
        longitude = rand() % 361 + (-180);

        myfile << latitude << "," << longitude << "\n";

    }

    myfile.close();
    return 0;
}


// how to generate random lat,long coordinates / DONE
// how to save coordinattes in csv file
