#include "pch.h"
#include <iostream>
#include "curl.h"
#pragma comment(lib, "libcurl.dll")


int main()
{
	CURL *curl;
	CURLcode res;

	res = curl_global_init(CURL_GLOBAL_DEFAULT);

	if (res != CURLE_OK) {
		fprintf(stderr, "curl_global_init() failed: %s\n",
			curl_easy_strerror(res));
		return 1;
	}

	curl = curl_easy_init();
	if (curl) 
	{
		struct curl_slist *chunk = NULL;
		chunk = curl_slist_append(chunk, "Authorization: INSERT TOKEN HERE");
		chunk = curl_slist_append(chunk, "Content-Type: application/json");

		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, chunk);

		curl_easy_setopt(curl, CURLOPT_URL, "https://discordapp.com/api/channels/INSERT_CHANNEL_ID_HERE/messages");
		//curl_easy_setopt(curl, CURLOPT_POST, 1L);
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "{\"content\":\"Posting as a bot!\"}");
		//curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "{\"content\":\"Posting as a bot\"}");

		res = curl_easy_perform(curl);

		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}
