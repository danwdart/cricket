#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string characters[] = {
        "Bob",
        "Jim",
        "Ted",
        "Bobelina",
        "Jimolena",
        "Tedelina",
        "Billy",
        "Walrus",
        "Eddy"
    };

    short charindex = 0;

    string current_character = characters[0];

    bool is_out = false;

    string input = "";

    short score = 0;

    getline(cin, input, '\0');

    transform(input.begin(), input.end(), input.begin(), ::tolower);

    cout << "Let's play cricket!" << endl;
    cout << current_character << " is the first to bat." << endl;

    // Counter because we may push it along
    for (int counter = 0; counter < input.length(); counter++) {
        char letter = input[counter];
        switch (letter) {
            case 'a':
                score++;
                cout << current_character << " gets 1 point. Score so far is " << score << "." << endl;
                break;
            case 'e':
                score += 2;
                cout << current_character << " gets 2 points. Score so far is " << score << "." << endl;
                break;
            case 'i':
                score += 3;
                cout << current_character << " gets 3 points. Score so far is " << score << "." << endl;
                break;
            case 'o':
                score += 4;
                cout << current_character << " gets 4 points. Score so far is " << score << "." << endl;
                break;
            case 'u':
                score += 5;
                cout << current_character << " gets 5 points. Score so far is " << score << "." << endl;
                break;
            case 'y':
                score += 6;
                cout << current_character << " gets 6 points. Score so far is " << score << "." << endl;
                break;
            case 'b':
                cout << current_character << " has been bowled." << endl;
                is_out = true;
                break;
            case 's':
                cout << current_character << " has been stumped." << endl;
                is_out = true;
                break;
            case 'l':
                cout << current_character << " went leg before wicket." << endl;
                is_out = true;
                break;
            case 'c':
                cout << current_character << " has been caught out." << endl;
                is_out = true;
                break;
        }

        if (is_out) {
            cout << current_character << " total score was " << score << endl;
            charindex++;
            if (charindex >= sizeof(characters)/sizeof(characters[0])) charindex = 0;
            current_character = characters[charindex];
            cout << current_character << " takes to the bat." << endl;
            is_out = false;
            score = 0;
        }
    }

    cout << "Game over!" << endl;
}
