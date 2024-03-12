#include <iostream>
#include <string>
using namespace std;

int main(){
	int input;
	string name;
	
	cout << "\n\n\n ********** School Managment System ********* \n\n\n";
//	cin >> input;
//	cout << "\n\n\n ********** Managment System ********* \n\n\n";
	
	cout << "Choose an option:"<<endl;
	cout << "1. Admin Portal:"<<endl;
	cout << "2. Teacher Faculty:"<<endl;
	cout << "3. Student Data:"<<endl;
	cout << "4. Fee Structure:"<<endl;
	cout << "Enter your choice (1-4):"<<endl;
	cin >> input;
	
	switch(input){
		case 1:
			cout << "Welcome to admin portal" << endl;
			cout << "Admin Name [unknown]" << endl;
			cout << "Qualification: PhD in [Information Technology]" << endl;
			cout << "Experiance: 20 years" << endl;
			cout << "Salary: 50k per seccond" << endl;
			break;
			
			case 2:
			cout << "Welcome to Teacher Faculty" << endl;
			cout << "Teaching Staff: (20 male & female teachers are available )" << endl;
			cout << "Total Subjets: 9 subjects are available" << endl;
			cout << "Qualification: from BSC to MASTERS" << endl;
			cout << "Salary: 30k to 90k" << endl;
			break;
			
			case 3:
			cout << "Welcome to Student portal" << endl;
			cout << "Classes: Nursery to Matric" << endl;
			cout << "Student capacity: 1 thousand students" << endl;
			cout << "Classes capacity: Each class have 30 students" << endl;
			cout << "Sections: 2 sections of each class" << endl;
			
			break;
			
			case 4:
			cout << "Welcome to Fee structure" << endl;
			cout << "Nursery to Matric" << endl;
			cout << "Admission Chammat: 5k to 10k" << endl;
			cout << "Monthly Fee: 6k" << endl;
			cout << "Examination Fee: 4k" << endl;
			break;
			
			default:
		cout << "Invalid choice" << endl;
		break;
	}
	
		return 0;
}

