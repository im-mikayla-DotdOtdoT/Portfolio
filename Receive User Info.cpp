#include <iostream>
using namespace std;

int main()
{
   // variables
    string usrname;
    int usrage;
    int usrbirthday;
    int usrbirthmnth;
    int usrbirthyear;
    
   // Greetings and receive name
   cout << "Hello and Welcome! What is your name?" << endl;
   cin >> usrname;

   // ask age and birthday
   cout << "Okay " << usrname << ", how old are you?" << endl;
   cin >> usrage;
   cout << "You are " << usrage << " years old." << endl;

   cout << usrname << ", What year were you born?" << endl;
   cin >> usrbirthyear;
   cout << "And month?" << endl;
   cin >> usrbirthmnth;
   cout << "And finally, your the day you were born?" << endl;
   cin >> usrbirthday;
    
   // display info
   cout << "Here is your info..." << endl;
   cout << "Name = " << usrname << endl;
   cout << "Age = " << usrage << endl;
   cout << "Birthday = " << usrbirthmnth << "/" << usrbirthday << "/" << usrbirthyear << endl;
}
