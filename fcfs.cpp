// First come First serve Algorithm with same arrival time for all processes
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// number of processes
	int t;
	cout << "Enter number of processes: ";
	cin >> t;
	
	// input the number of processes in array pointer
	int *p = new int[t];
	
	// input process info
	for(int i=0; i<t; i++){
		cout << "Burst time of Process #" << i+1 << ": ";
		cin >> p[i];
	}
	
	// output info
	cout << setw(8) << "\nProcesses | " << setw(12) << "Waiting Time | " << setw(12) << "Turnaround Time" << endl;
	int wait = 0;	//waiting time
	int last = 0;	//turnaround time for last process
	int av = 0;		//average waiting time
	// printing out the table
	for(int j=0; j<t; j++){
		last = p[j]+wait;
		cout << "Process #" << j+1 << setw(12) << wait << setw(12) << last << endl;
		av = av+wait;
		wait = last;
	}
	
	// Average waiting time
	cout << "\nAverage Waiting time: " << av/t << endl;
	cout << "Average Turnaround time: " << last/t << endl;
	
}
