/**************************************************************************
    Class:		CSCI 3333.01 Data Structures and Algorithms
                   	Spring 2025

    Project 1:	Have Fun with Lists, Vectors, Sets/Multisets, and Maps

    Name:		Julissa Gonzalez

    ID:            	20623146
    
    Description: Use respectively a list, a vector, a set / multiset,
        and a map to count word frequencies in two files and
        record the time needed.

    Input files: bible.txt, world192.txt
    Output files: list_counting.txt, vector_counting.txt,
                  set_counting.txt, map_counting.txt
    Example format of output file with a list:
        word frequencies in bible.txt
        word     frequency
        ......
        ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        time used to count word frequencies with a list is : xxx seconds

        word frequencies in world192.txt
        word     frequency
        ......
        ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        time used to count word frequencies with a list is : xxx seconds
**************************************************************************/

#include <iostream>
#include <fstream>
#include <list>
#include <set>
#include <vector>
#include <map>
#include <time.h>
#include <string>
#include <algorithim>
#include <cctype>

using namespace std; 

int main()
{
    //derclare containers for counting
    list<string> mylist; 
    vector<string> myvector; 
    multiset<string> myset;
    map<string, int> mymap; 

    //file variables for input/output
    ifstream inFile1, inFile2; 
    ofstream outFile; 

    //time variables to record performance in seconds
    time_t start_time, end_time;

    //additional variables
    string word; 

    //cleaning bible and world192


    /***********************************
    count word frequencies with a list
    ************************************/
    //start the time
    start_time = time(NULL);
    //count bible.txt
    inFile1.open("bible.txt");
    inFile2.open("world192.txt");
    outFile.open("list_counting.txt"); 

    while (!inFile1.eof()) {
        inFile1 >> word; 
        
        string cleared = "";

        for (char c : word)
        {
            if(isalpha(static_cast<unsigned char>(c)))
            {
                cleared += tolower(static_cast<unsigned char>(c));
            }
        }
        
        if (!cleared.empty())
        {
            mylist.push_back(cleared);
        }
        
    }
    inFile1.close();
    //this part will count the frequencie of words in myList
    //output the counting results
    list<string> temp;
    
    for (const string current : mylist) 
    {
        bool counted = false;
        for (const string &x : temp)
        {
            if (x == temp)
            {
                counted = true;
                break;
            }
        }

        if (counted) continue;

        int count;
        for (const string &x : mylist)
        {
            if(x == current)
            {
                count++;
            }
        }
    }

    outfile << current << " : " << count << endl;
    counted.push_back(current);



    mylist.clear(); 
    while (!inFile2.eof()) {
        inFile >> word;
        //this part will insert the word into myList
    }
    inFile2.close();
    //this part will count the frequencie of words in myList
    //output the counting results
    // ......
    //record the end time
    end_time = time(NULL);
    outFile << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    outFile << "time used to count word frequencies with a list is: "
        << difftime(end_time, start_time) << " seconds" << endl << endl;
    //Counting is done. Close the files. 
    inFile2.close();
    outFile.close();

    /*********************************************
     Repeat the counting jobs with a vector, 
     a set/multiset, and a map respectively
    **********************************************/



    //the work is done
    return 0;
}
