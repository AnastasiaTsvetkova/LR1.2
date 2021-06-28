// lab1

#include <iostream> 
using namespace std; 
void f() 
{ 
int a[3][3]; 
for (int i = 0; i < 3; i++) 
{ 
for (int j = 0; j < 3; j++) 
{ 
cout << "Ввидете элементы"; 
cin >> a[i][j]; 
cout << endl; 
} 
} 
int b = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1] - a[0][2] * a[1][1] * a[2][0] - a[0][0] * a[1][2] * a[2][1] - a[0][1] * a[1][0] * a[2][2]; 
cout << "Определитель = " << b << endl; 
} 
int main() 
{ 
setlocale(LC_ALL, "ru"); 
f(); 
system("pause"); 
return 0; 
}
