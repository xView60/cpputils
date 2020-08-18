#include <iostream>
#include <vector>
#include <memory>

class String {
public:
	std::vector<const char*> out;

	String(const char* arr) {
		std::vector<const char*> vector1;
		vector1.push_back(arr);
		for (int i = 0; i < vector1.size(); i++)
		{
			out.push_back(vector1[i]);
		}
	}

	String()
	{
		out.push_back("");
	}
};
std::ostream& operator<<(std::ostream& out, const String& str)
{
	for (int i = 0; i < str.out.size(); i++)
	{
		out << str.out[i] << " ";
	}
	return out;
}

int main() {


	return 0;
}