// Client.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <zmq.h>


using namespace std;

int main()
{
	void* context = zmq_ctx_new();
	void* socket = zmq_socket(context, ZMQ_REP);
	zmq_msg_t message;

	string data = "Hallo";
	int dataLen = data.length() + 1;
	int boba = zmq_msg_init_size(&message, dataLen);
	cout << "boba=" << boba << endl;
	memcpy(zmq_msg_data(&message), data.c_str(), dataLen);

	cout << zmq_connect(socket, "tcp://localhost:1234");
	int error = zmq_errno();

	int cv = zmq_msg_send(&message, socket, 0);
	cout << endl << cv;
	cout << endl << "Errno:" << strerror(errno) << endl;
	cout << endl << "Error: " << strerror(error) << endl;

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
