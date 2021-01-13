#include <iostream>
using namespace std;

void INFO()
{
    cout << "Info method\nYou are supposed to find the solution" << endl;
    cout << "Your task is : (5+5)*2" << endl;
}

void WARNING()
{
    cout << "Warning display!\n" << endl;
    cout << "5 + 5 \n10 * 2 \n" << endl;

}

void ERROR()
{
    cout << "Your task is : (5+5)*2" << endl;
    WARNING();
    cout << "Enter the answer" << endl;
    int ANSWER;
    cin >> ANSWER;
    if (ANSWER == 20)
    {
        cout << "Congratulations. This is the CORRECT answer" << endl;
    }
    else
    {
        cout << "...ERROR.INCORRECT ANSWER..." << endl;
    }
}

void SHOW_ALL()
{
    INFO();
    WARNING();
    ERROR();
}

int main() {

    int choise;
    cout << "Select any of the methods" << endl;
    cout << "1. INFO\n" << "2. WARNINGS\n" << "3. ERRORS\n" << "4. ALL ACTIVATED" << endl;
    cin >> choise;

    switch (choise) {
        case 1:
            INFO();
            break;
        case 2:
            WARNING();
            break;
        case 3:
            ERROR();
            break;
        case 4:
            SHOW_ALL();
            break;
        default:
            cout << "INCORRECT INPUT" << endl;
    }
}