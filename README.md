Solution for simpledatas_keygenme_1 by simpledata https://crackmes.one/crackme/5ab77f6633c5d40ad448cc1f

sub_401A06 gets 2 arguments: char* name, char* serial. It generates 3 sample strings and serial is valid if serial equals to any of samples.

```c++
var_140 = name[0];
var_13C = 0;
for (char c: name) {
    var_13C += c;
}

sprintf(pSample1, "%d%d%d%d", strlen(buffer), 0x6E, var_140, var_13C);
sprintf(pSample2, "%d%d%d%d", var_140, 0x5F, var_13C, strlen(buffer));
sprintf(pSample3, "%d%d%d%d", var_13C, 0x55, strlen(buffer), var_140);

var_2C = !strcmp(serial, sample) 
      || !strcmp(serial, sample) 
	  || !strcmp(serial, sample3);
	  
if (!sub_401C0C(var_2C)) MessageBox("Great job cracker!");
else MessageBox("Sorry, don't give up.")
```

sub_401C0C just inverts boolean value.

Examples:

> Name: sa2304
> Serial 1: 6110115413
> Serial 2: 115954136
> Serial 3: 413856115
> 
> Name: user
> Serial 1: 4110117447
> Serial 2: 117954474
> Serial 3: 447854117
> 
> Name: test
> Serial 1: 4110116448
> Serial 2: 116954484
> Serial 3: 448854116

Keygen source code:
```c++
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

```