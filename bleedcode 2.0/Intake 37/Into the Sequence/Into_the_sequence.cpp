#include <iostream>
#include <vector>

void solve(std::string);
bool solveUtil(int pos, std::string& inputStream, std::vector<int>& intVector);

int main()
{
	std::string inputStream;

	std::cin >> inputStream;

	solve(inputStream);
}


void solve(std::string inputStream)
{
	std::vector<int> intVector;

	solveUtil(0, inputStream, intVector);
	 
	if (intVector.size() >= 3) 
		for (const int integer : intVector) 
			std::cout << integer << " ";
	else 
std::cout << -1;
}

bool solveUtil(int pos, std::string& inputStream,std::vector<int>& intVector)
{
	if (pos == inputStream.length() and inputStream.size() >= 3) return true;

	long long num = 0;
	for(int i = pos; i < inputStream.length(); i++)
	{
		num = num * 10 + (inputStream[i] - '0');

		if(num > INT_MAX) break;
		if (inputStream[pos] == '0' and i > pos) break;
		if(intVector.size() > 2 and num > static_cast<long long>(intVector.back()) + static_cast<long long>(intVector[intVector.size() - 2])) break;
		if (intVector.size() < 2 or num == static_cast<long long>(intVector.back()) + static_cast<long long>(intVector[intVector.size() - 2]))
		{
			intVector.push_back(num);
			if(solveUtil(i + 1, inputStream, intVector)) return true;
			intVector.pop_back();
		}
	}
	return false;
}
