#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Student 
{
    public:
        string firstname;
        string lastname;
        int rollno;
        
        Student(string fn, string ln, int rn)
        {
            firstname = fn;
            lastname = ln;
            rollno = rn;
        }
        
        //We need to overload the "==" operator because we will compare two objects.
        //If two students are having the same name, then we won't stop there, we will 
        //also compare their roll numbers, which are unique.
        bool operator ==(const Student &s)const //make the function constant because it is not modifying any data member.
        {
            if(rollno == s.rollno)
                return true;
            else
                return false;
        }
};

class HashFn //Here we are building a custom hash function.
{
    public:
    //size_t. Alias of one of the fundamental unsigned integer types. It is a type able to represent the size of any object in bytes:
    //size_t is the type returned by the sizeof operator and is widely used in the standard library to represent sizes and counts.
        size_t operator()(const Student &s) const 
        {
            return s.firstname.length() + s.lastname.length();//two students having the same name will collide
        }
};

int main() {
    //unordered map of Student type, integer return type to return the hash value
    //and we pass the custom made HashFn
	unordered_map <Student, int, HashFn> student_map; 
	Student s1("Souvik", "Ghosh", 592);
	Student s2("Kingshuk", "Mukherjee", 514);
	Student s3("Indranil", "Das", 594);
	Student s4("Souvik", "Ghosh", 579);
	
	student_map[s1] = 100;
	student_map[s2] = 95;
	student_map[s3] = 90;
	student_map[s4] = 80;
	
	for(auto x:student_map)
	    cout << x.first.firstname << " " << x.first.lastname << " " << x.first.rollno << "->" << x.second << endl;
	return 0;
}
