#pragma once
#include <unordered_map>


class c_globals {
public:
	bool active = true;
	bool logged_in = false;
	char user_name[255] = "user";
	char pass_word[255] = "pass";
	
	int selected_tab = 0;
	int selected_game = -1;
	bool cheat1_loaded = false;
	bool cheat2_loaded = false;
	bool cheat3_loaded = false;
};

inline c_globals globals;