#include <iostream>
#include <string>
#include "LinkedList.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

#define ARRAY_LENGTH 10 //called a macro
 
//prototype functions
void insertionSort(int ar[]);
void displayIntArray(int ar[]);

int main(int argc, char** argv)
{
    srandom(time(NULL));
    long val; 
    int ar[ARRAY_LENGTH];

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        val = random();
        val = (val % 1000)+1;
        ar[i] = val;
    }

    //displayIntArray(ar);
    insertionSort(ar);
    displayIntArray(ar);
    //URL* u1 = new URL("https://api.hearthstonejson.com/v1/25770/enUS/cards.json");
    //cout << u1->getContents() << endl;
    //string jsonString = "[{\"fname\":\"val1\", \"lname\": \"val2\", \"sums\":[1,2,3]},{\"fname\":\"val3\", \"lname\":\"val4\"}]";
    //cout << jsonString << endl;
    //processJSONObject(jsonString, 0);
    LinkedList* ll = new LinkedList();
    ll->addEnd(4);
    ll->addEnd(6);
    ll->addEnd(8);
    ll->addEnd(2);
    ll->addFront(13);
    ll->addFront(17);
    ll->display();
    int value = ll->removeAtIndex(3);
    ll->display();
    cout << value << endl;
    ll->addAtIndex(6, 2);
    ll->display();
    ll->insertionSort();
    return 0;
}

void displayIntArray(int ar[])
{
    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        cout << ar[i] << endl;
    }
}

void insertionSort(int ar[])
{
    int tempSwap;
    int theFollower;
    for(int currStart = 0; currStart < ARRAY_LENGTH; currStart++)
    {
        theFollower = currStart;
        while(theFollower > 0 && ar[theFollower] < ar[theFollower-1])
        {
            tempSwap = ar[theFollower];
            ar[theFollower] = ar[theFollower-1];
            ar[theFollower-1] = tempSwap;
            theFollower--;
        }
    }
}