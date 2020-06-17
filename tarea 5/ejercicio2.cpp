#include <iostream>
#include <ctime>

using namespace std;

int main(){

    time_t tSac = time(NULL);
    struct tm* tmP = localtime(&tSac);

    cout << "hh:mm:ss " << tmP->tm_hour << ":" << tmP->tm_min << ":"<< tmP->tm_sec+1 << endl;


    return 0;
}