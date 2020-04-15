#include <stdio.h>
#include <i386-linux-gnu/curl/curl.h>

#define URL "http://www.cc.puv.fi/~gc/php/raspsound.php"

int main(int argc, char **argv){
	CURL *curl;
	CURLcode res;
	
	curl_global_init(CURL_GLOBAL_ALL);

	curl = curl_easy_init();

	if(curl){
		curl_easy_setopt(curl, CURLOPT_URL, URL);
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "name=Ho Trung&ID=e1900312");
		res = curl_easy_perform(curl);
		if(res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform() failed: %s\n",
							 curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}	//end of if
	curl_global_cleanup();
	return 0;
}
