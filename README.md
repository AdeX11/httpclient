# httpclient
A http client that creates GET and POST HTTP requests based on command line arguments.

# How to use
The program takes 3 arguments

host - a url to make the request to i.e. www.example.com

verb - the action to take, either GET or POST

path - the page to GET or POST i.e. / or /coolpage/home.html
It should print out the contents of the response from the server.

To get the contents of a remote website, you would first build your code with make from within the directory with the Makefile and main.c file.

# example
$ make
$ ./httpcmd www.example.com GET /

