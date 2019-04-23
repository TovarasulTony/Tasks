
#include "pch.h"
#include <string.h> 
#include <iostream>
#include "zlib.h"

using namespace std;

char in[100] = "Salut";
char out[100];
char out2[100];

void def()
{
	cout << "***def" << endl;
	int ret;
	unsigned have;
	z_stream strm;

	strm.zalloc = Z_NULL;
	strm.zfree = Z_NULL;
	strm.opaque = Z_NULL;

	strm.next_in = (Bytef *)in;
	strm.next_out = (Bytef *)out;
	strm.avail_in = (uInt)strlen(in) + 1;
	strm.avail_out = (uInt)sizeof(out);


	deflateInit(&strm, Z_BEST_COMPRESSION);
	deflate(&strm, Z_FINISH);//Z_FINISH
	//deflateEnd(&strm);
}

void inf()
{
	cout << "***inf" << endl;
	int ret;
	z_stream strm;

	strm.zalloc = Z_NULL;
	strm.zfree = Z_NULL;
	strm.opaque = Z_NULL;

	strm.next_in = (Bytef *)out;
	strm.next_out = (Bytef *)out2;
	strm.avail_in = (uInt)strlen(out) + 1;
	strm.avail_out = (uInt)sizeof(out2);

	inflateInit(&strm);
	inflate(&strm, Z_NO_FLUSH);// Z_FINISH
	inflateEnd(&strm);
}

int main()
{
	cout << in << endl;
	cout << out << endl;
	def();
	cout << out << endl;
	inf();
	cout << out2 << endl;
	return 1;
}

//******************************************************************
/*
#include <stdio.h>
#include "pch.h"
#include <string.h>  // for strlen
#include <assert.h>
#include<iostream>
#include "zlib.h"

using namespace std;

int main()
{
	// original string len = 36
	char a[50] = "Hello Hello Hello Hello Hello Hello!";

	// placeholder for the compressed (deflated) version of "a" 
	char b[50];

	// placeholder for the UNcompressed (inflated) version of "b"
	char c[50];


	cout << "Uncompressed size is: " << strlen(a) << endl;
	cout << "Uncompressed string is: " << a << endl;


	cout << "\n----------\n\n" << endl;

	// STEP 1.
	// deflate a into b. (that is, compress a into b)

	// zlib struct
	z_stream defstream;
	defstream.zalloc = Z_NULL;
	defstream.zfree = Z_NULL;
	defstream.opaque = Z_NULL;
	// setup "a" as the input and "b" as the compressed output
	defstream.avail_in = (uInt)strlen(a) + 1; // size of input, string + terminator
	
	defstream.next_in = (Bytef *)a; // input char array
	defstream.avail_out = (uInt)sizeof(b); // size of output
	defstream.next_out = (Bytef *)b; // output char array

	// the actual compression work.
	deflateInit(&defstream, Z_BEST_COMPRESSION);
	deflate(&defstream, Z_FINISH);
	deflateEnd(&defstream);

	// This is one way of getting the size of the output
	cout << "Compressed size is: " << strlen(b) << endl;
	cout << "Compressed string is: " << b << endl;


	cout << "\n----------\n\n" << endl;


	// STEP 2.
	// inflate b into c
	// zlib struct
	z_stream infstream;
	infstream.zalloc = Z_NULL;
	infstream.zfree = Z_NULL;
	infstream.opaque = Z_NULL;
	// setup "b" as the input and "c" as the compressed output
	infstream.avail_in = (uInt)((char*)defstream.next_out - b); // size of input
	infstream.next_in = (Bytef *)b; // input char array
	infstream.avail_out = (uInt)sizeof(c); // size of output
	infstream.next_out = (Bytef *)c; // output char array

	// the actual DE-compression work.
	inflateInit(&infstream);
	inflate(&infstream, Z_NO_FLUSH);
	inflateEnd(&infstream);

	cout << "Uncompressed size is: " << strlen(c) << endl;
	cout << "Uncompressed string is: " << c << endl;


	// make sure uncompressed is exactly equal to original.
	assert(strcmp(a, c) == 0);

	return 0;
}
*/