#include <stdio.h>
#include <string.h>

void send_http(char* host, char* msg, char* resp, size_t len);


/*
  Implement a program that takes a host, verb, and path and
  prints the contents of the response from the request
  represented by that request.
 */
int main(int argc, char* argv[]) {
  if (argc != 4) {
    printf("Invalid arguments - %s <host> <GET|POST> <path>\n", argv[0]);
    return -1;
  }
  char * host = argv[1];
  char* verb = argv[2];
  char* path = argv[3];
  /*if(!(strcmp(verb, "GET") || strcmp(verb,"POST")))
  {
    return -1
  }*/
  /*
    STUDENT CODE HERE
   */
  char response[4096];
  char request[1024];
  strcat(request,verb);
  strcat(request," ");
  strcat(request,path);
  strcat(request, " ");
  strcat(request, "HTTP/1.0\r\n");
  strcat(request,"Host: ");
  strcat(request, host);
  strcat(request,"\r\nConnection: close\r\n\r\n");
  send_http(host,request, response, 4096);
  printf("%s\n", response);
  return 0;
}