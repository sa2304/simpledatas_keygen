#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Enter name:\n"s;
  string name;
  getline(cin, name);
  if (name.empty()) {
    cerr << "Name cannot be empty"s << endl;
    return -1;
  }

  int first = name.front();
  int sum = 0;
  for (char c: name) {
    sum += c;
  }
  cout << "Your credentials are:\nName: "s << quoted(name) << '\n'
       << "Serial 1: "s << name.length() << 0x6E << first << sum << '\n'
       << "Serial 2: "s << first << 0x5F << sum << name.length() << '\n'
       << "Serial 3: "s << sum << 0x55 << name.length() << first << '\n';

  return 0;
}
