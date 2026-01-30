#include<iostream>
using namespace std;
class AcademicRecord
{
	protected:
		int rollno;
		int marks;
	public:
		void GetAR(){
			cout<<"AcademicRecord:(rollno. & marks)";
			cin>>rollno>>marks;
		}
		void AR(){
			cout<<"AcademicRecord: \nrollno. "<<rollno;
			cout<<"\nmarks"<<marks<<endl;
		}
};
class SportsRecord {
	protected :
		string SportName;
		int SportScore;
			
	public:
		void GetSR(){
			cout<<"SportsRecord:(Sport name and score)";
			cin>>SportName>>SportScore;
		}
		
		void SR(){
			cout<<"SportsRecord: \n Name:"<<SportName;
			cout<<"\nScore"<<SportScore<<endl;
		}
	
		
};
class Student : public AcademicRecord, public SportsRecord{
	public: 
	void read()
	{
		GetAR();
		GetSR();
	}
	void display()
	{
		AR();
		SR();
	}
	void Dperfromance(){
		float TP=(SportScore+marks)/2.0;
		cout<<"Total performance:"<<TP;
		
	}
};

int main()
{
	
	Student s1;
	s1.read();
	s1.display();
	s1.Dperfromance();
	return 0;
}
