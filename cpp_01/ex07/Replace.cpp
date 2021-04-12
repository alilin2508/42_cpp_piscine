#include "Replace.hpp"

Replace::Replace()
{
}

Replace::~Replace()
{
}

std::string Replace::replaceLine(std::string const &line, std::string const &s1, std::string const &s2)
{
	std::stringstream replaced;
	size_t j;

	for (size_t i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[i + j] == s1[j] && j < s1.length())
			j++;
		if (j == s1.length())
		{
			replaced << s2;
			i += (j - 1);
		}
		else
			replaced << line[i];
	}
	return (replaced.str());
}

void Replace::replace(std::string const &filename, std::string const &s1, std::string const &s2)
{
	std::ifstream		fileInput;
	std::ofstream		fileOutput;
	std::string	line;

	if (filename.length() == 0)
		throw "There is no filename input.";
	else if (s1.length() == 0)
		throw "The string you want to replace is empty.";
	else if (s2.length() == 0)
		throw "The replacement string is empty.";
	fileInput.open(filename.c_str());
	if (!fileInput.is_open())
		throw "The input file couldn't be open.";
	fileOutput.open((filename + ".replace").c_str(), std::ios::trunc);
	if (!fileOutput.is_open())
		throw "The output file couldn't be open.";
	while (getline(fileInput, line))
	{
		fileOutput << Replace::replaceLine(line, s1, s2);
		if (!fileInput.eof())
			fileOutput << '\n';
	}
	fileInput.close();
	fileOutput.close();
}
