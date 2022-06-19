#include <string>
#include <iostream>
#include <sstream>
#include <vector>


int convertPrefix(const std::string& word)
{
    if (word == "double")
        return 2;
    if (word == "triple")
	    return 3;
    if (word == "quad")
	    return 4;
    if (word == "penta")
	    return 5;
    if (word == "hexa")
	    return 6;
    if (word == "hepta")
	    return 7;
    if (word == "octa")
	    return 8;
    if (word == "nona")
	    return 9;
    if (word == "deca")
	    return 10;

    return -1;
}

char convertNumber(const std::string& word)
{
    if (word == "zero")
        return '0';
    if (word == "one")
	    return '1';
    if (word == "two")
	    return '2';
    if (word == "three")
	    return '3';
    if (word == "four")
	    return '4';
    if (word == "five")
	    return '5';
    if (word == "six")
	    return '6';
    if (word == "seven")
	    return '7';
    if (word == "eight")
	    return '8';
    if (word == "nine")
	    return '9';

    return -1;
}

std::string TextToNum(std::string& TXTNO)
{
	std::string word;
	std::string resnum;
    std::vector<std::string> strarr;
    int i = 0, j = 0;
    int temp;

    std::stringstream ss(TXTNO);
    while (ss >> word)
        strarr.push_back(word);

    for (int i = 0; i < strarr.size(); i++) {
        temp = convertPrefix(strarr[i]);

        if (temp == -1)
            resnum += convertNumber(strarr[i]);

        else {
            for (j = 0; j < temp; j++)
                resnum += convertNumber(strarr[i + 1]);

            i++;
        }
    }

    return resnum;
}

int main()
{
    std::string input;

    std::getline(std::cin, input);

    std::cout << TextToNum(input);
    return 0;
}

