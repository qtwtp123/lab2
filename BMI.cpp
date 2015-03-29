#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"BMI.h"
void BMI::yo()
{
	file();
}
void BMI::file()
{
	string headline;
	float height,weight,bmi;
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
	cerr<<"Failed opening"<<endl;
	exit(1);
	}
	fstream outFile("file.out",ios::out);
	if(!"file.out"){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	outFile<<"BMI	Category"<<endl;
	while(inFile>>height>>weight)
	{
		if(height==0&&weight==0)
		break;
		bmi=weight/((height/100.0)*(height/100.0));
		if(bmi<15)
		{
		outFile<<bmi<<"	Very severely underweight"<<endl;
		}
		
		if(bmi>15&&bmi<16)
		{
		outFile<<bmi<<"	Severely underweight"<<endl;
		}

		if(bmi>16&&bmi<18.5)
		{
		outFile<<bmi<<"	Underweight"<<endl;
		}
	
		if(bmi>18.5&&bmi<25)
		{
		outFile<<bmi<<"	Normal"<<endl;
		}
		
		if(bmi>25&&bmi<30)
		{
		outFile<<bmi<<"	Overweight"<<endl;
		}
		
		if(bmi>30&&bmi<35)
		{
		outFile<<bmi<<"	Obese Class I(Moderately obese)"<<endl;
		}

		if(bmi>35&&bmi<40)
		{
		outFile<<bmi<<"	Obese Class II(Severelyy obese)"<<endl;
		}
		if(bmi>=40)
		{
		outFile<<bmi<<"	Obese Class III(Very severely obese)"<<endl;
		}
	
	}
	return ;
}
