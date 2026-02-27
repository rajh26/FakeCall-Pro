#include <iostream>
#include <string>
#include <unistd.h> // لعمل مؤقت حقيقي على الأنظمة العالمية

using namespace std;

/**
 * FakeCall Pro - Core Logic (C++ Version)
 * هذا هو المحرك الأساسي للأداة قبل تحويلها إلى واجهة ويب.
 */

int main() {
    string user, pass, target;
    int waitTime;

    cout << "=== FakeCall Pro CORE v6.0 ===" << endl;
    cout << "ID: "; cin >> user;
    cout << "PIN: "; cin >> pass;

    if (user == "admin" && pass == "2026") {
        cout << "\n[Access Granted] Welcome Agent " << user << endl;
        cout << "Target Name: "; cin >> target;
        cout << "Set Timer (seconds): "; cin >> waitTime;

        cout << "\nSystem: Waiting " << waitTime << "s before trigger..." << endl;
        sleep(waitTime); 

        cout << "\n\n      .----------." << endl;
        cout << "      |  iPhone  |" << endl;
        cout << "      |----------|" << endl;
        cout << "      | INCOMING |" << endl;
        cout << "      |   CALL   |" << endl;
        cout << "      |  " << target << "  |" << endl;
        cout << "      |  (O)  (X)|" << endl;
        cout << "      '----------'" << endl;
        
        cout << "\n[1] Answer | [0] Reject: ";
        int action; cin >> action;
        if(action == 1) cout << "Status: ON CALL..." << endl;
        else cout << "Status: CALL ENDED." << endl;

    } else {
        cout << "[!] Invalid Access." << endl;
    }
    return 0;
}
