#include <iostream>
#include <string>

using namespace std;

int naive_algo(string str, string sub_str);

int main()
{

	string str = "helloiamunderthewaterheretoomuchraining";
	cout << "Pattern at Beginning: " << naive_algo(str, "hello") << endl;
	cout << "Pattern in the Middle: "<< naive_algo(str, "water")<<endl;
	cout << "Pattern at End: " << naive_algo(str, "raining") << endl;
	cout << "Pattern Not Present: " << naive_algo(str, "dark") << endl;
	cout << "Empty Pattern: " << naive_algo(str, "") << endl;
	return 0;
}

int naive_algo(string str, string sub_str)
{
	if(sub_str =="")
	return -1;
	int str_size = size(str);
	int sub_size = size(sub_str);
	for (int i = 0; i <= str_size - sub_size; i++)
	{
		int j = 0;
		while (j < sub_size && str[i + j] == sub_str[j])
			j++;
		if (j == sub_size)
			return i;
	}
	return -2;
}