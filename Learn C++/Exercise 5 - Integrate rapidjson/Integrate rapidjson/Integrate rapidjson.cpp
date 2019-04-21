// Integrate rapidjson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>

using namespace rapidjson;

int main()
{
	const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
	Document d;
	d.Parse(json);

	Value& s = d["stars"];
	auto gg = d.FindMember("stars");
	s.SetInt(s.GetInt() + 1);

	StringBuffer buffer;
	Writer<StringBuffer> writer(buffer);
	d.Accept(writer);
	std::cout << buffer.GetString() << std::endl;

	std::cout << (d["stars"] == 10) << std::endl;
	
	std::cout << std::endl << "Playing with move:" << std::endl;
	
	Value a(123);
	Value b(456);
	
	std::cout << a.IsInt() << std::endl;
	b = a;
	std::cout << a.IsInt() << std::endl;

	std::cout << b.IsInt() << std::endl;
	Value c(b, d.GetAllocator());
	std::cout << b.IsInt() << std::endl;
	std::cout << c.GetInt() << std::endl;

	Value e(d, d.GetAllocator());
	std::cout << d.GetType() << " " << e.GetType() << std::endl;


	std::cout << "Array" << std::endl;

	const char* json2 = "{\"one\":\"string\",\"two\":[1,2,\"test\"]}";
	Document d2;
	d2.Parse(json2);

	//cout<<
	Value& two = d2["two"];

	std::cout<< two.IsArray()<<std::endl;

	for (auto& it : two.GetArray())
	{
		if (it.IsInt())
			std::cout << it.GetInt() << " ";
		if (it.IsString())
			std::cout << it.GetString() << " ";
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
