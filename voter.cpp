#include<iostream>
using namespace std;

int main()
{
    const int numCandidates = 3;
    string candidates[numCandidates] = {"Candidate 1", "Candidate 2", "Candidate 3"};
    int votes[numCandidates] = {0};

    int numVoters;
    cout << "Enter the number of voters: ";
    cin >> numVoters;

    for (int i = 0; i < numVoters; i++)
    {
        cout << "Voter " << i+1 << ", please enter your vote (1-" << numCandidates << "): ";
        int vote;
        cin >> vote;

        if (vote >= 1 && vote <= numCandidates)
        {
            votes[vote-1]++;
            cout << "Thank you for voting!" << endl;
        }
        else
        {
            cout << "Invalid vote. Please try again." << endl;
            i--;
        }
    }

    cout << "Voting results:" << endl;
    for (int i = 0; i < numCandidates; i++)
    {
        cout << candidates[i] << ": " << votes[i] << " votes" << endl;
    }

    return 0;
}