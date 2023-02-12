// Program name : stereoreceiver.cpp
// Author : EMMANUEL ADEBANJO
// Date last updated : 1 / 30 / 2023
// Purpose : program for a stereo receiver.



#include <iostream>
#include<string>
#include<limits>
using namespace std;

class StereoReceiver {
private:
	//attributes
	string manufacturer;
	string model;
	string SerialNo;
	float wattage;
	int NoOfChannels;
	string band;
	float freq;
	int volume;
	bool power;
	int BassLevel;
	int feedback;

public:
	StereoReceiver(string manufacturer, string model, string srlNo, float wattage, int noOfChannels) {
		this->manufacturer = manufacturer;
		this->model = model;
		this->SerialNo = srlNo;
		this->wattage = wattage;
		this->NoOfChannels = noOfChannels;
		this->power = false;
		this->band = "FM";
		this->volume = 0;
		this->freq = 0;
		this->BassLevel = 0;
		this->feedback = 0;
	}
	//manufacturer
	string getManufacturer() {
		return this->manufacturer;
	}
	void setManufacturer(string manufacturer) {
		this->manufacturer = manufacturer;
	}
	//model
	string getModel() {
		return this->model;
	}
	void setModel(string model) {
		this->model = model;
	}
	//serial No
	string getSerialNo() {
		return this->SerialNo;
	}
	void setSerialNo(string srlNo) {
		this->SerialNo = srlNo;
	}
	//wattage
	float getWattage() {
		return this->wattage;
	}
	void setWattage(float wattage) {
		this->wattage = wattage;
	}
	//No of channels
	int getNoOfChannels() {
		return this->NoOfChannels;
	}
	void setNoOfChannels(int noOfChannels) {
		this->NoOfChannels = noOfChannels;
	}
	//band
	string getBand() {
		return this->band;
	}
	void setBand(string band) {
		this->band = band;
	}
	//frequency
	float getFrequency() {
		return this->freq;
	}
	void setFrequency(float freqeuncy) {
		this->freq = freqeuncy;
	}
	//volume
	int getVolume() {
		return this->volume;
	}
	void setVolume(int volume) {
		this->volume = volume;
	}
	//power
	void powerOn() {
		this->power = true;
	}
	void powerOff() {
		this->power = false;
	}
	bool getPowerStatus() {
		return this->power;
	}
	//Bass level
	int getBass() {
		return this->BassLevel;
	}
	void setBassLevel(int BassLevel) {
		this->BassLevel = BassLevel;
	}
	//Feedback
	int getFeedBCK() {
		return this->feedback;
	}
	void setfeedback(int feedback) {
		this->feedback = feedback;
	}

};
int getIntegerInput() {
	int n;
	cin >> n;

	while (!cin || cin.fail()) {
		cin.clear(); // reset failbit
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Value should be a integer. "<< endl;
		cout << "Please enter an integer" << endl;
		cin >> n;
	}
	return n;
}
float getFloatInput() {
	float n;
	cin >> n;

	while (!cin || cin.fail()) {
		cin.clear(); // reset failbit
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Value should be a float."<< endl;
		cout << "Please enter an float value (example 98.50)" << endl;
		cin >> n;
	}
	return n;
}

int getVolume() {
	int volume;
	volume = getIntegerInput();
	while (volume < 0 || volume >10) {
		cout << "Volume should be in range 0-10. Enter a new value:";
		volume = getIntegerInput();
	}
	return volume;
}

int getBass() {
	int BassLevel;
	BassLevel = getIntegerInput();
	while (BassLevel < 0 || BassLevel >10) {
		cout << "Bass level should be in range 0-10. Enter a new value:";
		BassLevel = getIntegerInput();
	}
	return BassLevel;
}

int getFeedBCK() {
	int feedback;
	feedback = getIntegerInput();
	while (feedback < 0 || feedback >10) {
		cout << "Feedback level should be in range 0-10. Enter a new value:";
		feedback = getIntegerInput();
	}
	return feedback;
}


int main() {
	string manufacturer, model, srlNo, band;
	int noOfChannels, volume, BassLevel, feedback;
	float wattage, frequency;
	cout << "Welcom to the stereo program" << endl;
	cout << "Enter the following information for your stereo." << endl;
	cout << "Manufacturer: ";
	cin >> manufacturer;
	cout << "Model: ";
	cin >> model;
	cout << "Serial No: ";
	cin >> srlNo;
	cout << "Wattage: ";
	wattage = getFloatInput();
	cout << "No of Channels:";
	noOfChannels = getIntegerInput();
	cout << "Enter a band (AM / FM): ";
	cin >> band;

	StereoReceiver reciever(manufacturer, model, srlNo, wattage, noOfChannels);
	cout << endl << "Displaying information for your stereo receiver:" << endl;
	cout << "Manufacturer:" << reciever.getManufacturer() << endl;
	cout << "Model:" << reciever.getModel() << endl;
	cout << "SerialNo:" << reciever.getSerialNo() << endl;
	cout << "Wattage:" << reciever.getWattage() << endl;
	cout << "No of Channels:" << reciever.getNoOfChannels() << endl << endl;

	cout << "Switching stereo ON" << endl;
	reciever.powerOn();
	cout << "Stereo now ON: " << reciever.getPowerStatus() << endl << endl;

	cout << "Band:" << reciever.getBand() << endl;


	cout << "Select a volume (0-10):";
	volume = getVolume();
	reciever.setVolume(volume);

	cout << "Adjust Bass (0-10):";
	BassLevel = getBass();
	reciever.setBassLevel(BassLevel);

	cout << "Adjust feedback (0-10):";
	feedback = getFeedBCK();
	reciever.setfeedback(feedback);

	cout << "Adjust Frequency:";
	frequency = getFloatInput();
	reciever.setFrequency(frequency);
	cout << endl;
	cout << "Band:" << reciever.getBand() << endl;
	cout << "Volume set to:" << reciever.getVolume() << endl;
	cout << "Bass set to:" << reciever.getVolume() << endl;
	cout << "Feedback level is:" << reciever.getVolume() << endl;
	cout << "Frequency now:" << reciever.getFrequency() << endl;
	cout << "Switching off stereo..." << endl;
	reciever.powerOff();
	cout << "Stereo turned off: " << reciever.getPowerStatus() << endl << endl;


}