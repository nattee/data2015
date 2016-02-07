#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main() {
  Student a,b,c;

  a.ID = "4030241021";
  a.name = "Nattee";
  a.GPA = 2.95;

  cout << a.name << " " << a.GPA << endl;
  cout << a.name << " enrolled into Chula in year " << a.get_year() << endl;

  b.name = "Gold";
  b.GPA = 4.00;
  b.ID = "40300000021";

  c.name = "xxx";
  c.ID = "5770000021";

  if (a.same_year(b)) {
    cout << a.name << " and " << b.name << " are in the same class " << endl;
  }
  if (a.same_year(c)) {
    cout << a.name << " and " << c.name << " are in the same class " << endl;
  } else {
    cout << a.name << " and " << c.name << " are not in the same class " << endl;
  }
}

