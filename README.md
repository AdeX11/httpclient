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

# Result


HTTP/1.0 200 OK
Age: 578569
Cache-Control: max-age=604800
Content-Type: text/html; charset=UTF-8
Date: Wed, 24 Aug 2022 15:04:42 GMT
Etag: "3147526947+ident"
Expires: Wed, 31 Aug 2022 15:04:42 GMT
Last-Modified: Thu, 17 Oct 2019 07:18:26 GMT
Server: ECS (chb/0286)
Vary: Accept-Encoding
X-Cache: HIT
Content-Length: 1256
Connection: close

<!doctype html>
<html>
<head>
    <title>Example Domain</title>

    <meta charset="utf-8" />
    <meta http-equiv="Content-type" content="text/html; charset=utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <style type="text/css">
    body {
        background-color: #f0f0f2;
        margin: 0;
        padding: 0;
        font-family: -apple-system, system-ui, BlinkMacSystemFont, "Segoe UI", "Open Sans", "Helvetica Neue", Helvetica, Arial, sans-serif;

    }
    div {
        width: 600px;
        margin: 5em auto;
        padding: 2em;
        background-color: #fdfdff;
        border-radius: 0.5em;
        box-shadow: 2px 3px 7px 2px rgba(0,0,0,0.02);
    }
    a:link, a:visited {
        color: #38488f;
        text-decoration: none;
    }
    @media (max-width: 700px) {
        div {
            margin: 0 auto;
            width: auto;
        }
    }
    </style>
</head>

<body>
<div>
    <h1>Example Domain</h1>
    <p>This domain is for use in illustrative examples in documents. You may use this
    domain in literature without prior coordination or asking for permission.</p>
    <p><a href="https://www.iana.org/domains/example">More information...</a></p>
</div>
</body>
</html>

