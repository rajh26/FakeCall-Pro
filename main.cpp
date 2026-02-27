#include <iostream>
#include <string>

using namespace std;

int main() {
    string callerName;
    cout << "--- FakeCall Pro System ---" << endl;
    cout << "Enter the name of the caller: ";
    getline(cin, callerName);
    
    cout << "\nSetting up the fake call..." << endl;
    cout << "Incoming call from: [" << callerName << "]" << endl;
    cout << "Status: ACTIVE" << endl;

    return 0;
}
