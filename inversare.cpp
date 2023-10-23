#include <fstream>
#include <cstring>
#define LGMAX 20
using namespace std;
ifstream fin("inversare.in");
ofstream fout("inversare.out");
void inversare();
void inversare2();
int main()
{
	//inversare();
	inversare2();
	fin.close();
	fout.close();
	return 0;
}
bool esteLitera(char c)
{
	return (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z');
}
void inversare2()
{
	char cuv[LGMAX];
	int lg;
	fin.getline(cuv, LGMAX, ' ');
	lg = strlen(cuv);
	if (esteLitera(cuv[lg-1]))
	{
		fout << cuv << ' ';
		inversare2();
	}
	else
	{
		cuv[lg-2] = 0;
		fout << cuv << ' ';
	}
	fout << cuv << ' ';
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
