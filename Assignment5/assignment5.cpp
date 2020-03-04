#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

void storeWords(vector<string>&);
void insertMap(string,int);
void printHistogram();

map<string, int> frequencyMap;

int main()
{
	vector<string> allWords; 
	storeWords(allWords);
	unsigned int counter = 0;
	string vectorIndex = allWords[0];
	
	
	for(int i = 0; i < allWords.size();i++)
	{	
		if (vectorIndex != allWords[i]) /* If word from vectorIndex is not equal to word at the index[i] then we insert into the map, zero out the counter*/
		{				/* And change the value inside vectorIndex. If the word is equal we just increment the counter to see how many times the word pops up*/
			insertMap(vectorIndex,counter);	
			counter= 0;
			vectorIndex = allWords[i];	
		}
		counter++;
		
	}
	printHistogram();
		
	return 0;
}

void storeWords(vector<string> & allWords) //Storing all words into the vector and use sort function to make everything into alphabetical order
{
	fstream fileName;
	string words;
	fileName.open("document1.txt");
	while (fileName >> words)
	{
		allWords.push_back(words);
	}
	sort(allWords.begin(),allWords.end());
}

void insertMap(string words,int count) //Inserts values into map
{
	frequencyMap.insert({words,count});
}

void printHistogram() //Will Print out all words with the amount of times the word comes up and prints out a histogram in this format: cars(4): ****
{
	for(map<string, int>::const_iterator it = frequencyMap.begin(); it != frequencyMap.end();it++) 
	{
		cout << it->first << "(" + to_string(it->second) + "): ";
		for(int j = 0; j < it->second; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
