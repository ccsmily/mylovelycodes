#include "unp.h"

int main(int argc, char **argv)
{
	int	sockfd, n;
	char recvline[MAXLINE + 1];
	struct sockaddr_in	servaddr;
	int  iRet = 0 ;

	if (argc != 2)
		err_quit("usage: a.out <IPaddress>");

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if ( sockfd  < 0)
		err_sys("socket error");

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port   = htons(13);	/* daytime server */
	iRet = inet_pton(AF_INET, argv[1], &servaddr.sin_addr); 
	if (iRet <= 0)
		err_quit("inet_pton error for %s", argv[1]);

    iRet =connect(sockfd, (SA *) &servaddr, sizeof(servaddr)); 
	if (iRet < 0)
		err_sys("connect error");

	while ( (n = read(sockfd, recvline, MAXLINE)) > 0) 
	{
		recvline[n] = 0;	/* null terminate */
		if (fputs(recvline, stdout) == EOF)
			err_sys("fputs error");
	}
	if (n < 0)
		err_sys("read error");

	exit(0);
}
