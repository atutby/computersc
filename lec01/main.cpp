#include <fstream>
#include <string>

int main()
{
	using namespace std;

	ifstream in ("in.txt");
	ofstream out("out.txt");

	string const_name;
	double const_value;

	in >> const_name >> const_value;
	out << const_name << '\n' << const_value << '\n';

	return 0;
}
