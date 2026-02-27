#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    string password;
    string callerName;

    cout << "--- FakeCall Pro Secure System ---" << endl;
    cout << "Enter Access Code: ";
    cin >> password;

    if (password == "2026") { 
        cout << "\n[Success] Access Granted!" << endl;
        cout << "Enter Name of Caller: ";
        cin >> callerName;
        
        cout << "Calling in 3 seconds..." << endl;
        this_thread::sleep_for(chrono::seconds(3));

        cout << "\n*************************" << endl;
        cout << "   INCOMING CALL...      " << endl;
        cout << "   " << callerName << "          " << endl;
        cout << "*************************" << endl;
    } else {
        cout << "[Failed] Wrong Password!" << endl;
    }
    return 0;
}
