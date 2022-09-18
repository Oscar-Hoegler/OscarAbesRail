/*Oscar Hoegler, September 8th 2022, Laboratory 3.1
 *OscarAbesRail, Creates a quote on materials cost based on input length*/

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	double railCOST = 9.97, postCOST = 10.98, postDIST = 10;
	long fenceDIST; 

	cout << "Please imput length of fence: "; cin >> fenceDIST;
	//Requests the length of the fence, and recieves it.
	
	double postCOUNT = ((fenceDIST + ((fenceDIST % 10) ? 10 : 0)) / 10) + 1; 
	//Takes the length of the fence, checks if length%10 is true or not, and if it is it adds 10 feet onto the length, granting the extra post, with an additional for the endcap
	
	double railCOUNT = 3 * ((fenceDIST + ((fenceDIST % 10) ? 10 : 0)) / 10); 
	//Does the same above, and multiplies by 3 for the total number of rails
	
	cout << "Your estimated quote for fence length " << fenceDIST << " is $" << (postCOUNT * postCOST) + (railCOUNT * railCOST);
	return 0;
}