#include <iostream>
using namespace std;

int main()
{
	float value;
	string um;
	string conversion;

	cout << "Please enter a numerical value (without the measurement unit): ";
	cin >> value;

	cout << "Please enter the base, or any multiple/submultiple of length/distance (mm < cm < dm < m < dam < hm < km): ";
	cin >> um;

	cout << "What do you want to convert the unit to? (ex. from m to km): ";
	cin >> conversion;

	if (um == "m")
	{
		if (conversion == "km")
		{
			float result(value / 1000);
			cout << "The result of " << value << " meters to kilometers is: " << result << "km." << endl;
		}
		else if (conversion == "hm")
		{
			float result1(value / 100);
			cout << "The result of " << value << " meters to hectometers is: " << result1 << "hm." << endl;
		}
		else if (conversion == "dam")
		{
			float result2(value / 10);
			cout << "The result of " << value << " meters to decameters is: " << result2 << "dam." << endl;
		}
		else if (conversion == "dm")
		{
			float result3(value * 10);
			cout << "The result of " << value << " meters to decimeters is: " << result3 << "dm." << endl;
		}
		else if (conversion == "cm")
		{
			float result4(value * 100);
			cout << "The result of " << value << " meters to centimeters is: " << result4 << "cm." << endl;
		}
		else if (conversion == "mm")
		{
			float result5(value * 1000);
			cout << "The result of " << value << " meters to millimeters is: " << result5 << "mm." << endl;
		}
		else
		{
			cout << "Invalid conversion." << endl;
		}
	}
	if (um == "dm")
	{
		if (conversion == "m")
		{
			float result6(value / 10);
			cout << "The result of " << value << "decimeters to meters is: " << result6 << "m." << endl;
		}
		else if (conversion == "dam")
		{
			float result7(value / 100);
			cout << "The result of " << value << "decimeters to decameters is: " << result7 << "dam." << endl;
		}
		else if (conversion == "hm")
		{
			float result8(value / 1000);
			cout << "The result of " << value << "decimeters to hectometers is: " << result8 << "hm." << endl;
		}
		else if (conversion == "km")
		{
			float result9(value / 10000);
			cout << "The result of " << value << "decimeters to kilometers is: " << result9 << "km." << endl;
		}
		else if (conversion == "cm")
		{
			float result10(value * 10);
			cout << "The result of " << value << "decimeters to centimeters is: " << result10 << "cm." << endl;
		}
		else if (conversion == "mm")
		{
			float result11(value * 100);
			cout << "The result of " << value << "decimeters to millimeters is: " << result11 << "mm." << endl;
		}
		else
		{
			cout << "Invalid conversion." << endl;
		}
	}
	if (um == "cm")
	{
		if (conversion == "dm")
		{
			float result12(value / 10);
			cout << "The result of " << value << "centimeters to decimeters is: " << result12 << "dm." << endl;
		}
		else if (conversion == "m")
		{
			float result13(value / 100);
			cout << "The result of " << value << "centimeters to meters is: " << result13 << "m." << endl;
		}
		else if (conversion == "dam")
		{
			float result14(value / 1000);
			cout << "The result of " << value << "centimeters to decameters is: " << result14 << "dam." << endl;
		}
		else if (conversion == "hm")
		{
			float result15(value / 10000);
			cout << "The result of " << value << "centimeters to hectometers is: " << result15 << "hm." << endl;
		}
		else if (conversion == "km")
		{
			float result16(value / 100000);
			cout << "The result of " << value << "centimeters to kilometers is: " << result16 << "km." << endl;
		}
		else if (conversion == "mm")
		{
			float result17(value * 10);
			cout << "The result of " << value << "centimeters to milimeters is: " << result17 << "mm." << endl;
		}
		else
		{
			cout << "Invalid conversion." << endl;
		}
	}
	if (um == "mm")
	{
		if (conversion == "cm")
		{
			float result18(value / 10);
			cout << "The result of " << value << "millimeters to centimeters is: " << result18 << "cm." << endl;
		}
		else if (conversion == "dm")
		{
			float result19(value / 100);
			cout << "The result of " << value << "millimeters to decimeters is: " << result19 << "cm." << endl;
		}
		else if (conversion == "m")
		{
			float result20(value / 1000);
			cout << "The result of " << value << "millimeters to meters is: " << result20 << "m." << endl;
		}
		else if (conversion == "dam")
		{
			float result21(value / 10000);
			cout << "The result of " << value << "millimeters to decameters is: " << result21 << "dam." << endl;
		}
		else if (conversion == "hm")
		{
			float result22(value / 100000);
			cout << "The result of " << value << "millimeters to hectometers is: " << result22 << "hm." << endl;
		}
		else if (conversion == "km")
		{
			float result23(value / 1000000);
			cout << "The result of " << value << "millimeters to kilometers is: " << result23 << "km." << endl;
		}
		else
		{
			cout << "Invalid conversion." << endl;
		}
	}
	if (um == "dam")
	{
		if (conversion == "hm")
		{
			float result24(value / 10);
			cout << "The result of " << value << "decameters to hectometers is: " << result24 << "hm." << endl;
		}
		else if (conversion == "km")
		{
			float result25(value / 100);
			cout << "The result of " << value << "decameters to kilometers is: " << result25 << "km." << endl;
		}
		else if (conversion == "m")
		{
			float result26(value * 10);
			cout << "The result of " << value << "decameters to meters is: " << result26 << "m." << endl;
		}
		else if (conversion == "dm")
		{
			float result27(value * 100);
			cout << "The result of " << value << "decameters to decimeters is: " << result27 << "dm." << endl;
		}
		else if (conversion == "cm")
		{
			float result28(value * 1000);
			cout << "The result of " << value << "decameters to centimeters is: " << result28 << "cm." << endl;
		}
		else if (conversion == "mm")
		{
			float result29(value * 10000);
			cout << "The result of " << value << "decameters to millimeters is: " << result29 << "mm." << endl;
		}
		else
		{
			cout << "Invalid conversion." << endl;
		}
	}
	if (um == "hm")
	{
		if (conversion == "km")
		{
			float result30(value / 10);
			cout << "The result of " << value << "hectometers to kilometers is: " << result30 << "km." << endl;
		}
		else if (conversion == "dam")
		{
			float result31(value * 10);
			cout << "The result of " << value << "hectometers to decameters is: " << result31 << "dam." << endl;
		}
		else if (conversion == "m")
		{
			float result32(value * 100);
			cout << "The result of " << value << "hectometers to meters is: " << result32 << "m." << endl;
		}
		else if (conversion == "dm")
		{
			float result33(value * 1000);
			cout << "The result of " << value << "hectometers to decimeters is: " << result33 << "dm." << endl;
		}
		else if (conversion == "cm")
		{
			float result34(value * 10000);
			cout << "The result of " << value << "hectometers to centimeters is: " << result34 << "cm." << endl;
		}
		else if (conversion == "mm")
		{
			float result35(value * 100);
			cout << "The result of " << value << "hectometers to millimeters is: " << result35 << "mm." << endl;
		}
		else
		{
			cout << "Invalid conversion." << endl;
		}
	}
	if (um == "km")
	{
		if (conversion == "hm")
		{
		    float result36(value * 10);
		cout << "The result of " << value << "kilometers to hectometers is: " << result36 << "hm." << endl;
		}
	    else if (conversion == "dam")
      	{
		    float result37(value * 100);
			cout << "The result of " << value << "kilometers to decameters is: " << result37 << "dam." << endl;
		}
		else if (conversion == "m")
		{
			float result38(value * 1000);
			cout << "The result of " << value << "kilometers to meters is: " << result38 << "m." << endl;
		}
		else if (conversion == "dm")
		{
			float result39(value * 10000);
			cout << "The result of " << value << "kilometers to decimeters is: " << result39 << "dm." << endl;
		}
		else if (conversion == "cm")
		{
			float result40(value * 100000);
			cout << "The result of " << value << "kilometers to centimeters is: " << result40 << "cm." << endl;
		}
		else if (conversion == "mm")
		{
			float result41(value * 1000000);
			cout << "The result of " << value << "kilometers to millimeters is: " << result41 << "mm." << endl;
		}
		else
		{
			cout << "Invalid conversion." << endl;
		}
	}
	
	return 0;
	cout << endl;
}