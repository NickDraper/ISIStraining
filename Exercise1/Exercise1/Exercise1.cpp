// Exercise1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <sstream>

using std::ifstream;
using std::string;
using std::getline;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::map;
using std::ofstream;


int _tmain(int argc, _TCHAR* argv[])
{
	typedef string::size_type string_size;
	const string punctchars = "= .,?'\"!(): \t\n\v\f\r-";
	//list<string>
	//vector<string>
	int fail_count = 0;
	map <string, int> wordcount;
	for (int c = 1; c < argc; ++c)
	{
		ifstream infile(argv[c]);
		//ifstream infile("Holmes.txt");
		if (infile)
		{
			int d = 0;
			string s;
			while (getline(infile,s))
			{
				cout << ++d << endl;
				vector<string> linewords;
				string_size i = 0;
				while (i != s.size())
				{
					while (i != s.size() && (isspace(s[i]) || s[i] == '-'))
					{
						++i;
					}
					string_size j = i;
					while (j != s.size() && !(isspace(s[j]) || s[j] == '-'))
					{
						++j;
					}
					if (i != j)
					{
						linewords.push_back(s.substr(i,j-i));
						i=j;
					}
				}
				for (vector<string>::iterator veciter = linewords.begin(); veciter != linewords.end(); ++veciter)
				{
					if (veciter->size() >= 4)
					{
						int striter = 0;
						char changecase;
						while (striter != veciter->size())
						{
							if (veciter->find_first_of(punctchars,0) != string::npos)
							{
								veciter->erase(striter,1);
							}
							else
							{
								for (int convchar = 0; convchar < veciter->length(); convchar++)
								{
									(*veciter)[convchar] = tolower((*veciter)[convchar]);
								}
								++striter;
							}
						}
						if (veciter->size() >= 4)
						{
							++wordcount[*veciter];
						}
					}
				}
			}
			vector<string> listout;
			int trackhigh = 0;
			for (map <string, int>::const_iterator mapiter = wordcount.begin(); mapiter != wordcount.end(); ++mapiter)
			{
				if (mapiter->second > trackhigh)
				{
					trackhigh = mapiter->second;
				}
			}
			for (trackhigh; trackhigh >= 4; trackhigh--)
			{
				for (map <string, int>::const_iterator mapiter = wordcount.begin(); mapiter != wordcount.end(); ++mapiter)
				{
					if (mapiter->second == trackhigh)
					{
						std::ostringstream convert;
						convert << mapiter->second;
						listout.push_back(mapiter->first + "    " + convert.str());
					}
				}
			}
			ofstream outfile("output.txt");
			if (outfile)
			{
				outfile << "Word                Usage" << endl;
				for (vector<string>::const_iterator veciter = listout.begin(); veciter != listout.end(); ++veciter)
				{

					outfile << (*veciter) << endl;
				}
			}
			else
			{
				cerr << "cannot open file for writing output.txt" << endl;
				++fail_count;
			}
		}
		else
		{
			cerr << "cannot open file " << argv[c] << endl;
			++fail_count;
		}

	}
	return fail_count;
}
