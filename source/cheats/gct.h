/*
 * gct.h
 * Class to handle Ocarina TXT Cheatfiles
 * 
 */

#ifndef _GCT_H
#define _GCT_H

#include <sstream>

#define MAXCHEATS 100

using std::string;

//!Handles Ocarina TXT Cheatfiles
class GCTCheats {
private:
    string sGameID;
    string sGameTitle;
    string sCheatName[MAXCHEATS];
    string sCheats[MAXCHEATS];
    string sCheatComment[MAXCHEATS];
    unsigned int iCntCheats;

public:
	//!Array which shows which cheat is selected 
	bool sCheatSelected[MAXCHEATS];
    //!Constructor
    GCTCheats(void);
    //!Destructor
    ~GCTCheats(void);
    //!Open txt file with cheats
    //!\param filename name of TXT file
    //!\return error code
    int openTxtfile(const char * filename);
    //!Creates GCT file
    //!\param filename name of GCT file
    //!\return error code
    int createGCT(const char * filename);
    //!Creates TXT file
    //!\param filename name of GCT file
    //!\return error code
    int createTXT(const char * filename);
    //!Gets Count cheats
    //!\return Count cheats
    unsigned int getCnt();
    //!Gets Game Name
    //!\return Game Name
    string getGameName(void);
    //!Gets GameID
    //!\return GameID
    string getGameID(void);
    //!Gets cheat data
    //!\return cheat data
    string getCheat(unsigned int nr);
    //!Gets Cheat Name
    //!\return Cheat Name
    string getCheatName(unsigned int nr);
    //!Gets Cheat Comment
    //!\return Cheat Comment
    string getCheatComment(unsigned int nr);
	//!Check if string is a code
    //!\return true/false
	bool IsCode(const std::string& s);
	//!Check if string is a code
    //!\return 0=ok, 1="X", 2=no code
	int IsCodeEx(const std::string& s);
private:
	//!Resets the internal state, as if no file was loaded
	void Reset();
};

#endif  /* _GCT_H */