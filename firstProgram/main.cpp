#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int latitude;
    int longitude;
    int countOfPoints;
    string pathOfCsvFile;

    cout << "How many points (lat,long) do you need? ";
    cin >> countOfPoints;
    cout << "\nWhere to save the csv file? ";
    cin >> pathOfCsvFile;

    ofstream myfile;
    myfile.open (pathOfCsvFile);
    myfile << "latitude,longitude\n";

    for(int i=1; i<=countOfPoints; i++){

        latitude = rand() % 181 + (-90);
        longitude = rand() % 361 + (-180);

        myfile << latitude << "," << longitude << "\n";

    }

    myfile.close();

    return 0;
}
