#include <iostream>
#include <cstring>
#include <stdio.h>
#include <cstdlib>
using namespace std;
int main() {
	system("taskkill /f /im Actor.exe & cd /d \"C:\\Program Files (x86)\\Lindge VIVO\\Angel 3.0\" & ren Actor.exe Actor.old");
	cout<<"Success";
}
