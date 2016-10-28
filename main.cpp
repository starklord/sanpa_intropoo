#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main ()
{
    queue <string> names;
    names.push ("evan");
    names.push ("evander");
    names.push ("juan");

    cout << "Colas" << endl << endl;
    cout << "Existentes"
         << names.front () << endl << endl;
    names.pop ();
    cout << "existentes " << names.size ()
         << "el next est:"
         << names.front () << "." << endl << endl

         << names.back () << " el ultimo elemento"
         << endl;

    cin.get ();
    return 0;

}
