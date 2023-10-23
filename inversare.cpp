#include <fstream>
using namespace std;
ifstream fin("inversare.in");
ofstream fout("inversare.out");
void inversare();
int main()
{
	inversare();
	fin.close();
	fout.close();
	return 0;
}
void inversare()
{
	char c;
	fin.get(c);
	fout << c;
	if (c != ' ')
	{
		inversare();
	}
	fout << c;
}
