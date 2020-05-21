#include <stdio.h> /* for printf() and fprintf() */ 
#include <sys/socket.h> /* for socket(), connect(), sendto(), and recvfrom() */ 
#include <arpa/inet.h>
#include <stdlib.h> 
#include <string.h>
#include <unistd.h> 
#include <netinet/in.h>
#define ECHOMAX 255 

void datos(char *argv[],char buffer[]);

int main(int argc, char *argv[]) 
{
	int sock; /* Socket descriptor */ 
	struct sockaddr_in echoServAddr; /* Echo server address */ 
	struct sockaddr_in fromAddr; /* Source address of echo */ 
	unsigned short echoServPort;  /* Echo server port */
	unsigned int fromSize; /* In-out of address size for recvfrom() */
	char *servlP;  /* IP address of server */
	char *echoString; /* String to send to echo server */
	char echoBuffer[ECHOMAX]; /* Buffer for receiving echoed string */
	int echoStringLen; /* Length of string to echo */
	int respStringLen;  /* Length of received response */
     
	servlP = "186.155.208.171" ; /* First arg' server IP address (dotted quad)*/
	echoString = argv[1]; /* Second arg' string to echo */ 
	if ((echoStringLen = strlen(echoString)) > ECHOMAX) /* Check input length */ 
	printf("Echo word too long"); 

	echoServPort = 65000; /* Use given port, if any */ 
	
	/* Create a datagram/UDP socket */ 
	if ((sock = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP)) < 0)
		printf( "socket () failed") ; 
	
	/* Construct the server address structure */ 
	memset(&echoServAddr, 0, sizeof(echoServAddr)); /* Zero out structure */ 
	echoServAddr.sin_family = AF_INET; /* Internet addr family */ 
	echoServAddr.sin_addr.s_addr = inet_addr(servlP); /* Server IP address */ 
	echoServAddr.sin_port = htons(echoServPort); /* Server port */ 
	
	/* Send the string to the server */ 
	if (sendto(sock, echoString, echoStringLen, 0, (struct sockaddr *) 
		&echoServAddr, sizeof(echoServAddr)) != echoStringLen) 
	printf("sendto() sent a different number of bytes than expected"); 
	
	/* Recv a response */
	fromSize = sizeof(fromAddr) ; 
	if ((respStringLen = recvfrom(sock, echoBuffer, ECHOMAX, 0, (struct sockaddr *) 
		&fromAddr, &fromSize)) != echoStringLen) 
		//printf("recvfrom() failed") ; 
	
	if (echoServAddr.sin_addr.s_addr != fromAddr.sin_addr.s_addr) 
	{ 
		fprintf(stderr,"Error: received a packet from unknown source.\n"); 
		return(1);
	}
	/* null-terminate the received data */ 
	echoBuffer[respStringLen] = '\0' ; 
	printf("Received: %s\n", echoBuffer); /* Print the echoed arg */ 
	
	datos(argv,echoBuffer);
	close(sock); 
	return (0);
}

void datos(char *argv[],char buffer[])
{
		int tam=0,tam2=0;
		tam=strlen(buffer);
		int cont=0,j=0,w=0;
		int pos1=0,posr=0;
		unsigned char pos[10];
		char infor[tam],buffer2[tam];
		strcpy(buffer2,buffer);
		buffer2[tam-1]=',';
		for(int i=0;i<tam-1;i++)
		{
			if(buffer2[i]==':')
			{
				cont++;
				pos[j]=i;
				j++;
			}
		}
		
		for(int i=1;i<7;i++)
		{
			pos1=pos[i]+1;
			for(int j=pos1;j<tam-1;j++)
			{
			if(buffer2[j]!=',' && buffer2[j]!='}')
				{
					infor[w]=buffer2[j];
					w++;
				}
			if(buffer2[j]==',' || buffer2[j]=='\0')
				{
					infor[w]=' ';
					w++;
					j=tam;
				}
			}
				
		}
		infor[w]=' ';
		infor[w+1]='\0';
		FILE *fd;
		fd=fopen("/home/alse/Documents/Proyecto_ALSE/datos.txt","w");
		if(fd==NULL)
		{
			printf("\n\t el archivo no se creo \n\n");
		}
		fputs(infor,fd);
		fclose(fd);	
	
}
