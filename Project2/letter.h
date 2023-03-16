#pragma once
ref class letter
{
public:
	char value; //letter who is supposed to be
	char state; //from this depends the color, empty is the default

	//return the button state
	char get_state()
	{
		return state;
	}

	//set the value of the state
	void set_state(char s) {
		state = s;
	}
};

