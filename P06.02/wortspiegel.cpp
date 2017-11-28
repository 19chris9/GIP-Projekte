#include <iostream>
#include <string>
#include "wortspiegel.h"
using namespace std;


void wortspiegel(string &text, int pos) {
	int wrechts, wlinks;
	string temp =text;
	for (int i = pos; i <= text.length() - 1; i++) {
		if (i == text.length() - 1) {
			wrechts = i;
			break;
		}
		if (text.at(i) == '.' || text.at(i) == ' ') {
			wrechts = i - 1;
			break;
		}
	}
	for (int i = pos; i >= 0; i--) {
		if (i == 0) {
			wlinks = i;
		}
		if (text.at(i) == '.' || text.at(i) == ' ') {
			wlinks = i + 1;
			break;
		}
	}
	for (int i = wlinks, z = wrechts; i <= wrechts; i++, z--) {
		if (wlinks == wrechts) {
			break;
		}
		else {
			text.at(i) = temp.at(z);
		}
	}
}