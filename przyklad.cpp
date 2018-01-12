#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void TryToParse(String^ value);
   {
      Int32 number;
      bool result = Int32::TryParse(value, number);
      if (result) {
         Console::WriteLine("Converted '{0}' to {1}.", value, number);
      }
      else {
         if (value == nullptr) value = "";
         Console::WriteLine("Attempted conversion of '{0}' failed.", value);
      }
   }


int main()
{

    int min, max = 0;

    cout << "Podaj min: ";
    cin >> min;
    cout << endl;
    cout << "Podaj max: ";
    cin >> max;
    cout << endl;

    int r = (rand() % max) + min;

    int a = 0;
    cout << "Zgaduj: ";
    cin >> a;


    while (a != r)
    {
        if (a < r)
        {
            cout << "Za mala liczba" << endl;
        }
        if (a > r)
        {
            cout << "Za duza liczba" << endl;
        }

        cout << "Zgaduj dalej " << endl;
        cin >> a;

        if (a == r)
        {
            cout << "Zgadles";
            break;
        }
    }

    return 0;
}