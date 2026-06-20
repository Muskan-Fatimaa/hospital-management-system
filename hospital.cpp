#include <iostream>
#include <ctime>
using namespace std;

void doctorMainMenu();

void patientMainMenu();

void hospitalManagement();

void addDoctor(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]);

void addPatient(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]);

void findAllDoctors(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]);

void drSubMainMenu(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]);

void findAllPatients(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]);

void patientSubMainMenu(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]);

void searchDoctorRecord(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]);

int searchPatientRecord(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]);

void updateDoctorRecord(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]);

void updatePatientRecord(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]);

void deleteDoctorRecord(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]);
 
void deletePatientRecord(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]);

struct Time {
	//Time
	int tm_min[50];   
	int tm_hour[50];  

	//Date
	int tm_mday[50];  
	int tm_mon[50]; 
	int tm_year[50];  

};

void searchPatient(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {
	int patientId;
	cout << "Enter Patient Id :";
	cin >> patientId;
	cout << endl;
	cout << "****************************************" << endl;
	cout << endl;
	bool flag = false;
      int i;
	for ( i = 0; i < 50; i++) {

		if (patId[i] == patientId) {

			cout << "Patient Id : " << patId[i] << endl;
			cout << "Patient Name : " << patName[i] << endl;
			cout << "Patient Age : " << patAge[i] << endl;
			cout << "Patient Contact Information : " << patConNo[i] << endl;
			cout << "Patient Disease : " << patDisease[i] << endl;
			cout << "****************************************" << endl;

			flag = true;

			break;
		}

	}

	if (flag == false) {

		cout << "Doctor Record Not Found " << endl;
		
	}
	cout << endl;
	cout << "*************************************************" << endl;

	patientSubMainMenu(patId, patName, patAge, patConNo, patDisease);

	
}
void makeAppointment(int  patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {

	Time tm;
	string appointmentDay;
	cout << "*********************************************" << endl;
	cout << "***********   Appointment    ****************" << endl;
	cout << "*********************************************" << endl;

	int recordIndex = searchPatientRecord(patId, patName, patAge, patConNo, patDisease);

	//int docRecordIndex = searchDoctorRecord(docId,  docName,  docAge,  docSpecialization, contactInfo);
	
	if (recordIndex != 50) {

		cout << "Enter Date for Appointment : ";
		cin >> tm.tm_mday[recordIndex] >> tm.tm_mon[recordIndex] >> tm.tm_year[recordIndex];

		cout << "Enter Time of Appointment : ";
		cin >> tm.tm_hour[recordIndex] >> tm.tm_min[recordIndex];
		cout << endl;
		cout << "Appointment Detail" << endl;

		cout << "Patient ID : " << patId[recordIndex] << endl;
		cout << "Patient Name : " << patName[recordIndex] << endl;
		cout << "Date : " << tm.tm_mday[recordIndex] << " : " << tm.tm_mon[recordIndex] << " : " << tm.tm_year[recordIndex] << endl;
		cout << "Time : " << tm.tm_hour[recordIndex] << " : " << tm.tm_min[recordIndex] << endl;
		//cout << "Doctor ID : " << docId[docRecordIndex] << endl;
		//cout << "Doctor Name : " << docName[docRecordIndex] << endl;
		//cout << "Specialization : " << docSpecialization[docRecordIndex] << endl;
	}
	else {

	}
	

	patientSubMainMenu(patId, patName, patAge, patConNo, patDisease);
}

int main() {

	hospitalManagement();

	return 0;
}

void hospitalManagement() {

	cout << "			*****************************************************" << endl;
	cout << "			***********   HOSPITAL MANAGEMENT SYSTEM   **********" << endl;
	cout <<	"			*****************************************************" << endl;
	cout << endl;

	cout << "1. Doctor Menu " << endl;
	cout << "2. Patient Menu " << endl;
	cout << "3. Exit " << endl;
	cout << endl;

	int choice;
	cout << "Enter your choice ";
	cin >> choice;
	system("CLS");
	if (choice == 1) {

		doctorMainMenu();

	}
	if (choice == 2) {

		patientMainMenu();

	}
	else {

		
		system("CLS");
		cout << "**********************************************************************************" << endl;
		cout << "*********   You made no choice. But Thank You for using our system!...  **********" << endl;
		cout << "**********************************************************************************" << endl;
		cout << endl << endl << endl << endl << endl << endl;

	}

}

void doctorMainMenu() {

	int doctorId[60] = { 203,204,205 };

	string doctorName[60] = { "Ayesha","Aiza","Eman" };

	int doctorAge[60] = { 40,34,50 };

	string doctorSpecialization[60] = { "Cardialogist","Dermatologist","Gynecologist" };

	string contactInformation[60] = { "00834892","00897689","00897654" };

	cout << endl;

	cout << "			*****************************************" << endl;
	cout << "			************  DOCTOR MENU  *************" << endl;
	cout << "			*****************************************" << endl;
	cout << endl;


	drSubMainMenu(doctorId, doctorName, doctorAge, doctorSpecialization, contactInformation);

}

void drSubMainMenu(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]) {
	cout << "1.Add Doctor " << endl;

	cout << "2.Delete Doctor " << endl;

	cout << "3.Search Doctor " << endl;

	cout << "4.Update Doctor " << endl;

	cout << "5.Find All Doctors" << endl;

	cout << "6.Exit" << endl;

	int choice;

	cout << "Enter your choice : ";

	cin >> choice;

	if (choice == 1) {
		system("CLS");

		addDoctor(docId, docName, docAge, docSpecialization, contactInfo);

	}
	if (choice == 2) {
		system("CLS");
		deleteDoctorRecord(docId, docName, docAge, docSpecialization, contactInfo);

	}
	if (choice == 3) {
		system("CLS");
		searchDoctorRecord(docId, docName, docAge, docSpecialization, contactInfo);

	}
	if (choice == 4) {
		system("CLS");
		updateDoctorRecord(docId, docName, docAge, docSpecialization, contactInfo);

	}
	if (choice == 5) {
		system("CLS");
		findAllDoctors(docId, docName, docAge, docSpecialization, contactInfo);

	}
	if (choice == 6) {
		system("CLS");
		hospitalManagement();
	}
}
void addDoctor(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]) {


	for (int i = 0; i < 60; i++) {

		if (docId[i] == 0) {

			int doId;
			string doName;
			int doAge;
			string doSpecialization;
			string contactInf;

			cout << "Enter Doctor Id : ";
			cin >> doId;
			docId[i] = doId;

			cout << "Enter Doctor Name : ";
			cin >> doName;
			docName[i] = doName;

			cout << "Enter Doctor Age : ";
			cin >> doAge;
			docAge[i] = doAge;

			cout << "Enter Doctor Specialization : ";
			cin >> doSpecialization;
			docSpecialization[i] = doSpecialization;

			cout << "Enter Doctor Contact No : ";
			cin >> contactInf;
			contactInfo[i] = contactInf;
			break;
		}

	}
	cout << endl;
	cout << "***************************************" << endl;

	drSubMainMenu(docId, docName, docAge, docSpecialization, contactInfo);

	cout << endl;

	cout << "New Doctor Record is added successfully!..." << endl;
}

void findAllDoctors(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]) {

	for (int i = 0; i < 60; i++) {

		if (docId[i] == 0)

		{
			break;
		}
		cout << "Doctor Id : " << docId[i] << endl;
		cout << "Doctor Name : " << docName[i] << endl;
		cout << "Doctor Age : " << docAge[i] << endl;
		cout << "Doctor Specialization : " << docSpecialization[i] << endl;
		cout << "Doctor Contact Information : " << contactInfo[i] << endl;

		cout << "**************************************" << endl;

	}

	cout << "******************************************" << endl;

	drSubMainMenu(docId, docName, docAge, docSpecialization, contactInfo);
	cout << endl;
}
void searchDoctorRecord(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]) {
	
	int doctorId;
	cout << "Enter doctor Id : ";
	cin >> doctorId;
	cout << endl;
	cout << "*****************************************" << endl;
	cout << endl;
	bool flag = false;
	for ( int i = 0; i < 60; i++) {

		if (docId[i] == doctorId) {

			cout << "Doctor Id : " << docId[i] << endl;
			cout << "Doctor Name : " << docName[i] << endl;
			cout << "Doctor Age : " << docAge[i] << endl;
			cout << "Doctor Specialization : " << docSpecialization[i] << endl;
			cout << "Doctor Contact Information : " << contactInfo[i] << endl;
			flag = true;
		}
	}
	if (flag == false) {

		cout << "Doctor Record Not Found " << endl;
	}
	cout << endl;
	drSubMainMenu(docId, docName, docAge, docSpecialization, contactInfo);
}
void updateDoctorRecord(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]) {

	int drId;
	string drName;
	int drAge;
	string drSpecialization;
	string contactInformation;
	cout << "Enter Doctor Id : ";
	cin >> drId;


	bool flag = false;
	for (int i = 0; i < 60; i++) {
		if (docId[i] == drId) {

			int choice;
			cout << "Press 1 to change Doctor Name " << endl;
			cout << "Press 2 to change Doctor Age " << endl;
			cout << "Press 3 to change Doctor Specialization " << endl;
			cout << "Press 4 to change Doctor Contact Information " << endl;
			cout << "Press 5 to change All Characteristics" << endl;

			cout << "Enter your choice ";
			cin >> choice;

			if(choice ==1){
			cout << "Enter new Name : ";
			cin>> drName;
			docName[i] = drName;
		    }
			if (choice == 2) {
				cout << "Enter new Age : ";
				cin >> drAge;
				docAge[i] = drAge;
			}
			if (choice == 3) {
				cout << "Enter new Doctor Specializtion: ";
				cin >> drSpecialization;
				docSpecialization[i] = drSpecialization;
			}
			if (choice == 4) {
				cout << "Enter new Contact Information : ";
				cin >> contactInformation;
				contactInfo[i] = contactInformation;
			}
			if (choice == 5) {
				cout << "Enter new Name : ";
				cin >> drName;
				docName[i] = drName;
				cout << "Enter new Age : ";
				cin >> drAge;
				docAge[i] = drAge;
				cout << "Enter new Doctor Specializtion: ";
				cin >> drSpecialization;
				docSpecialization[i] = drSpecialization;
				cout << "Enter new Contact Information : ";
				cin >> contactInformation;
				contactInfo[i] = contactInformation;
		

			}
			flag = true;
		}


	}
	if (flag ==false) {

		cout << "Record not found " << endl;
	}
	cout << "*****************************************" << endl;
	drSubMainMenu(docId, docName, docAge, docSpecialization, contactInfo);

	cout << endl;

}

void deleteDoctorRecord(int docId[60], string docName[60], int docAge[60], string docSpecialization[60], string contactInfo[60]) {
	
	int doctorId;
	cout << "Enter doctor Id : ";
	cin >> doctorId;
	bool flag = false;
	
	int i = 0;

	for ( ; i < 60; i++) {

		if (docId[i] == doctorId) {

			flag = true;
			break;

		}

	}
	int j = i;

	for ( ; j < 59; j++) {

		docId[j] = docId[j + 1];
		docName[j] = docName[j + 1];
		docAge[j] = docAge[j + 1];
		docSpecialization[j] = docSpecialization[j + 1];
		contactInfo[j] = contactInfo[j + 1];
		
	}
	
	if (flag == true) {
		docId[j] = 0;
		docName[j] = " ";
		docAge[i] = 0;
		docSpecialization[j] = " ";
		contactInfo[j] = " ";
		cout << endl;
		cout << "Record is successfully deleted " << endl;
		
	}

	if (flag == false) {
		cout << "Record Not Found " << endl;
	}
  
	cout << endl;
	cout << "*****************************************" << endl;

	drSubMainMenu(docId, docName, docAge, docSpecialization, contactInfo);

	cout << endl;


}




void patientMainMenu() {

	int patientId[50] = { 23,9,45 };
	string patientName[50] = { "Hania ","Hamna ","Nida " };
	int patientAge[50] = { 23,34,56 };
	string patientConNo[50] = { "004567","004562","002345" };
	string patientDisease[50] = { "Asthma ","Bronchitis ", "Appendix" };

	cout << endl;

	cout << "			*****************************************" << endl;
	cout << "			***********  PATIENT MENU  **************" << endl;
	cout << "			*****************************************" << endl;

	cout << endl;

	

	patientSubMainMenu(patientId, patientName, patientAge, patientConNo, patientDisease);

}

void patientSubMainMenu(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {

	cout << "1.Add Patient " << endl;
	cout << "2.Delete Patient " << endl;
	cout << "3.Search Patient " << endl;
	cout << "4.Update Patient " << endl;
	cout << "5.Find All Patients " << endl;
	cout << "6.Book Appointment" << endl;
	cout << "7.Exit" << endl;

	cout << endl;

	int choice;
	cout << "Enter your choice : ";
	cin >> choice;

	if (choice == 1) {
		system("CLS");

		addPatient(patId, patName, patAge, patConNo, patDisease);

	}
	if (choice == 2) {
		system("CLS");
		deletePatientRecord(patId, patName, patAge, patConNo, patDisease);

	}

	
	if (choice == 3) {
		system("CLS");
		searchPatient(patId, patName, patAge, patConNo, patDisease);

	}
	if (choice == 4) {
		system("CLS");
		 updatePatientRecord(patId, patName, patAge, patConNo, patDisease);

	}
	if (choice == 5) {
		system("CLS");
		findAllPatients(patId, patName, patAge, patConNo, patDisease);

	}
	if (choice == 6) {

		system("CLS");
		makeAppointment(patId, patName, patAge, patConNo, patDisease);
	}
	if (choice == 7) {
		system("CLS");
		hospitalManagement();
	}

}

void addPatient(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {

	for (int i = 0; i < 50; i++) {

		if (patId[i] == 0) {

			int patieId;
			string patieName;
			int patieAge;
			string patieConNo;
			string patieDisease;

			cout << "Enter Patient Id : ";
			cin >> patieId;
			patId[i] = patieId;

			cout << "Enter Patient Name : ";
			cin >> patieName;
			patName[i] = patieName;

			cout << "Enter Patient Age : ";
			cin >> patieAge;
			patAge[i] = patieAge;

			cout << "Enter Patient Contact No : ";
			cin >> patieConNo;
			patConNo[i] = patieConNo;

			cout << "Enter Patient Disease ";
			cin >> patieDisease;
			patDisease[i] = patieDisease;

			break;
		}
	}
	cout << endl;

	cout << "*************************************************" << endl;

	patientSubMainMenu(patId, patName, patAge, patConNo, patDisease);

	cout << endl;

}

void findAllPatients(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {
	for (int i = 0; i < 50; i++) {
		if (patId[i] == 0)
		{
			break;
		}

		cout << "Patient Id : " << patId[i] << endl;
		
		cout << "Patient Name : " << patName[i] << endl;
	
		cout << "Patient Age : " << patAge[i] << endl;
	
		cout << "Patient Contact Information : " << patConNo[i] << endl;
	
		cout << "Patient Disease : " << patDisease[i] << endl;

		cout << "*************************************************" << endl;
		
	}
	cout << "*************************************************" << endl;
	patientSubMainMenu(patId, patName, patAge, patConNo, patDisease);

}

int searchPatientRecord(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {
	int patientId;
	cout << "Enter Patient Id :";
	cin >> patientId;
	cout << endl;
	cout << "****************************************" << endl;
	cout << endl;
	bool flag = false;
	int i;

	for (i = 0; i < 50; i++) {

		if(patId[i] == patientId){

		cout << "Patient Id : " << patId[i] << endl;
		cout << "Patient Name : " << patName[i] << endl;
		cout << "Patient Age : " << patAge[i] << endl;
		cout << "Patient Contact Information : " << patConNo[i] << endl;
		cout << "Patient Disease : " << patDisease[i] << endl;
		cout << "****************************************" << endl;

		flag = true;
		
		break;
		}

	}

	if (flag == false) {

		cout << "Doctor Record Not Found " << endl;
		i = 50;
	}
	cout << endl;
	cout << "*************************************************" << endl;

	//patientSubMainMenu(patId, patName, patAge, patConNo, patDisease);

	return i;
}
  

void updatePatientRecord(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {
	
	int patientId;
	string patientName;
	int patientAge;
	string patientContactNo;
	string patientDisease;

	cout << "Enter Patient Id : ";
	cin>> patientId;

	bool flag = false;

	for (int i = 0; i < 50; i++) {

		if (patId[i] == patientId) {

			int choice;
			cout << "Enter your choice ";
			cout << "Press 1 for new Name " << endl;
			cout << "Press 2 for new Age " << endl;
			cout << "Press 3 for  new Contact number " << endl;
			cout << "Press 4 for new disease " << endl;
			cout << "Press 5 for adding all new characteristics " << endl;
			cin >> choice;

			if (choice == 1) {

				cout << "Enter new patient name : ";
				cin >> patientName;
				patName[i] = patientName;

			}
			if (choice == 2) {

				cout << "Enter new patient age : ";
				cin >> patientAge;
				patAge[i] = patientAge;

			}
			if (choice == 3) {

				cout << "Enter new patient contact number : ";
				cin >> patientContactNo;
				patConNo[i]= patientContactNo;

			}
			if (choice == 4) {

				cout << "Enter new patient disease : ";
				cin >> patientDisease;
				patDisease[i] = patientDisease;

			}
			
			flag = true;

		}

	}
	if (flag == false) {

		cout << "Record Not Found " << endl;

	}

	cout << endl;
	cout << "*****************************************" << endl;

	patientSubMainMenu(patId, patName, patAge, patConNo, patDisease);
   
	cout << endl;


}


void deletePatientRecord(int patId[50], string patName[50], int patAge[50], string patConNo[50], string patDisease[50]) {


	int patientId;
	cout << "Enter patient id: ";
	cin >> patientId;
	bool flag = false;

	int i = 0;

	for ( ; i < 50; i++) {

		if (patId[i] == patientId) {

			flag = true;

			break;

		}
		
	}

	int j = i;

	for ( ; j < 49; j++) {

		patId[j] = patId[j + 1];
		patName[j] = patName[j + 1];
		patAge[j] = patAge[j + 1];
		patConNo[j] = patConNo[j + 1];
		patDisease[j] = patDisease[j + 1];

	}
	if(flag==true){
	patId[j] = 0;
	patName[j] = " ";
	patAge[j] = 0;
	patConNo[j] = " ";
	patDisease[j] = " ";


	cout << endl;
	cout << "Record is successfully deleted " << ":) "<<endl;

	}

	if (flag == false) {

		cout << "Record Not Found " << ":( " << endl;

	}
	cout << endl;

	cout << "******************************************" << endl;

     patientSubMainMenu (patId, patName, patAge, patConNo, patDisease);
	 cout<<endl;

}
