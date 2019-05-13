// Exercitii.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <list>
#include <unordered_set>
#include <map>
#include <stack>
#include <vector>
#include <string>

using namespace std;

/*
void ex_()
{
	cout << endl;
	cout << "Ex " << endl;
}

*/

void ex_1(int n = rand())
{
	cout << "Ex 1" << endl;

	if ((n & (n - 1)) == 0)
	{
		cout << n << " este putere a lui 2" << endl;
	}
	else
	{
		cout << n << " NU este putere a lui 2" << endl;
	}
}

void ex_2(list<int> my_list = {1, 2, 3, 4, 5, 6, 7, 8, 9})
{
	cout << endl;
	cout << "Ex 2" << endl;
	//prep
	{
		/*
		if (my_list.size() == 0)
		{
			for (int i = 0; i < 20; ++i)
			{
				my_list.push_back(rand() % 20);
			}
		}
		*/
	}

	/*varianta 1
	int curNr;
	list<int>::iterator it;
	for (int i = my_list.size(); i > 0; i--)
	{
		curNr = 2;
		it = my_list.begin();
		while (curNr <= i)
		{
			it++;
			curNr++;
		}
		cout << *it << " ";
	}
	cout << endl;
	*/

	//varianta2
	stack<int> my_stack;
	for (auto it : my_list)
	{
		my_stack.push(it);
	}

	while (my_stack.size() != 0)
	{
		cout << my_stack.top() << " ";
		my_stack.pop();
	}
	cout << endl;
}

void ex_3(int n = 0, vector<int> v = {1,2,3,4,5,6})
{
	cout << endl;
	cout << "Ex 3" << endl;
	//prep
	{
		/*
		if (n == 0)
		{
			n = 20;
		}
		if (v == nullptr)
		{
			v = new int[1000]();
			for (int i = 0; i < n; ++i)
			{
				v[i] = rand() % 50;
			}
		}
		*/
	}
	unordered_set<int> my_set;
	for (int i = 0; i < v.size(); ++i)
	{
		if (my_set.find(v[i]) != my_set.end())
		{
			cout << "Duplicatul este " << v[i] << endl;
			return;
		}
		my_set.insert(v[i]);
	}
	cout << "Nu sunt duplicate. Tzeapa!" << endl;
}

bool mVizitati[10][10];
vector<vector<int>> mVecini{{-1, -1},
							{-1, 1},
							{-1, 0},
							{1, -1},
							{1, 1},
							{1, 0},
							{0, -1},
							{0, 1},
							{0, 0}};
vector<vector<int>> mInsule{{1, 0, 0, 1, 1, 0},
							{1, 1, 0, 0, 0, 0},
							{0, 0, 0, 1, 0, 0},
							{0, 0, 1, 0, 0, 1},
							{1, 0, 0, 0, 0, 1}};

void viziteaza_vecini(int i, int j)
{

	mVizitati[i][j] = 1;
	for (auto it : mVecini)
	{
		int next_i = i + it[0];
		int next_j = j + it[1];

		if (next_i > 4 || next_j > 5 || next_i < 0 || next_j < 0)
		{
			continue;
		}
		cout << next_i << " " << next_j << endl;
		if (mVizitati[next_i][next_j] == 0 &&
			mInsule[next_i][next_j] == 1)
		{
			viziteaza_vecini(next_i, next_j);
		}
	}
}

void ex_4()
{
	cout << endl;
	cout << "Ex 4" << endl;

	int contor = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (mInsule[i][j] == 1 && mVizitati[i][j] == 0)
			{
				contor++;
				viziteaza_vecini(i, j);
			}
		}
	}

	cout << "Sunt " << contor << " insule" << endl;
}

//ex_5
map<char, int> my_map;
vector<string> encoded_strings;

void GenerateSet(string _string)
{
	for (auto i : _string)
	{
		if (my_map.find(i) == my_map.end())
		{
			my_map.insert(pair<char, int>(i, 0));
		}
		else
		{
			my_map.find(i)->second++;
		}
	}
}

void Encode(int i=0)
{
	string encoded_string;
	for (auto it : my_map)
	{
		map<char, int>::iterator it = my_map.begin();
		cout << it->first << " ";
		it++;
	}
}

void ex_5(vector<string> my_array = {"abcsdasca", "def", "cba", "igrv", "tbd", "dbt" })
{
	cout << endl;
	cout << "Ex 5" << endl;

	GenerateSet(my_array[0]);
	Encode();
}

int main()
{
	ex_1();
	ex_2();
	ex_3();
	ex_4();
	ex_5();
}





























/*


"abra"       +          "cadabra"   =  "abracadabra"
string   PlusPeString      string         Lipire


 3            +              1      =       4
numar    PlusPeNumere       numar         Calcul

"abra_"       +              3      =    "abra_3"
string   PlusPeString       numar         Lipie



Exercises

=====================================================================================================
1. Power of 2

Write a program to find whether a number is power of two.
=====================================================================================================
2. Print reverse a linked list

Given a linked list and having access only to the head element, print the reverse list without using recursion.
=====================================================================================================
3. Check if a given vector contains duplicate elements

Given a vector V, find a way to say whether it contains duplicates or not, by iterating through the vector only once. You cannot sort the data.
=====================================================================================================
4. Find the number of islands

Given a boolean 2D matrix, find the number of islands. A group of connected 1s forms an island. For example, the below matrix contains 5 islands.
=====================================================================================================
5. Print all pairs of anagrams in a given array of strings

Given an array of strings, find all anagram pairs in the given array.
Input: arr[] = {“abc”, “def”, “cba”, “igr”, “tbd”, “dbt”}; sdiasldaskjdbsbdskjdbskja

a^13123;b^8
Output: {{“abc”, “cba”}, {“tbd”, “dbt”}}
=====================================================================================================
6. Count number of trailing zeros for the factorial result of a given n (n!)

Given n a positive number bigger than 1, count the number of trailing zeros of the result.
Assuming n is 10, the factorial result will be 1*2*3* … * 10
=====================================================================================================
7. Searching for a Path between two nodes

How can we check whether there’s a path between two vertices, in a directed graph?
=====================================================================================================
8. Level of a node

Given the tree root node and the destination node – how can we find out at what level the destination node is?
=====================================================================================================
9. Count all possible paths between two vertices

Given a directed graph, that does not contain a cycle – count the number of paths that exist between two vertices.
=====================================================================================================
10. Minimum number of moves to make two strings equal

Given two strings A and B of equal lengths, containing only lower case letters, our job is to count the minimum number of changes required on string A to make it equal to string B.
=====================================================================================================
11. Print all permutations of a given string

A permutation is a rearrangement of the elements.
A string of length n has n! permutations. (in how many ways we can rearrange the elements, or in other words, change their position within the string)
=====================================================================================================

*/