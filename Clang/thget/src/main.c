#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>

int main(void)
{
	printf("Hello\n");
	int sock,ret;
	struct sockaddr_in_addr;
	WSADATA ws_data;

	if((WSAStartup(0x0101, &ws_data)) != 0)
	{
		printf("NG");
	}
	else
	{
		printf("OK");
	}

	char host[2000];
	struct hostent *ent = gethostbyname("www.google.co.jp");
	unsigned char *addr = (unsigned char*)ent->h_addr_list[0];
	char *ipaddress;
	sprintf(ipaddress, "%d.%d.%d.%d", addr[0], addr[1],addr[2], addr[3]);
	fflush(stdout);
	printf("IP: %d.%d.%d.%d", addr[0],addr[1],addr[2],addr[3]);
	fflush(stdout);
	printf("Hello2");
	fflush(stdout);
	WSACleanup();
	return 0;

}

