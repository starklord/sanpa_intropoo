 	#include <iostream.h>
 	#include <list>
 	void print(list <char> );
 	main(){
 	    list <char> l;
 		list <char>::iterator p;
 		l.push_back('o'); l.push_back('a'); l.push_back('t');
 		p=l.begin();
 		cout <<" "<< *p<<endl;
 		print(l);
 		l.insert(p, 'c');
 		cout <<" "<< *p<<endl;
 		print(l);
 		l.erase(p);
 		cout <<" "<< *p<<endl;
 		print(l);
 		l.erase(l.begin()); 
 		print(l);
 	}