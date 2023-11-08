#pragma once


class CLCalcul {
	int n;
	void ini(int);
	static int cpteObj;

public:
	CLCalcul();
	CLCalcul(int);
	void carre();
	void setN(int);
	int getN();
	static int getCpteObj();
};

