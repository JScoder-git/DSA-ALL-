#include <iostream>

using namespace std;

void marks(string pcs[6])
{
for( int i = 0; i < 6;i++)
	cout<<pcs[i]<<endl;
}

int main() {
	string subjects[6] = {"beee","pcs","maths","c++","python","cadlab"};
	marks(subjects);

	return 0;
}