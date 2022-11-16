/* AnalogIn.h
 * Created by Jason Malouin
 * This class wraps the functionality of the analog to digital converter
 */

#ifndef ANALOGIN_H_
#define ANALOGIN_H_

using namespace std;

class AnalogIn{

	private:
		unsigned int number;

	public:
		AnalogIn();
		AnalogIn(unsigned int n);
		virtual unsigned int getNumber(){return number;}
		virtual void setNumber(unsigned int n);
		virtual int readAdcSample();
		virtual ~AnalogIn();
};
#endif
