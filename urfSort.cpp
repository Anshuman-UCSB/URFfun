#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

struct champion{
	string name;
	string build;
	double val;
};

string encrypt(champion inp){
	string out = "";

	out+=inp.name;
	out+=";";
	out+=inp.build;
	out+=";";
	out+=to_string(inp.val);

	return out;
}

champion decrypt(string inp){
	champion output;
	output.name = inp.substr(0,inp.find(";"));
	cout<<output.name<<endl;

	inp = inp.substr(inp.find(";")+1);
	output.build = inp.substr(0,inp.find(";"));

	output.val = stod(inp.substr(inp.find(";")+1));

	return output;
}

void printChampion(champion inp){
	cout<<"----------------------------"<<endl;
	cout<<"  Champion: "<<inp.name<<endl;
	cout<<"  Build   : "<<inp.build<<endl;
	cout<<"  Val     : "<<to_string(inp.val)<<endl;
	cout<<"----------------------------"<<endl;
}

int main(){
	champion thresh = {"thresh","ad",50.};
	printChampion(thresh);

	return 0;
}
