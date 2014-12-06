/*

Copyright (C) 2014 Mario Huang

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and 
associated documentation files (the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, 
subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial 
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT 
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include "isp.h"

#ifdef __cplusplus
extern "C" {
#endif

void purge_ttys(pttys fd)
{
	tcflush(fd, TCIOFLUSH);
}

int set_baudrate(pttys fd, int baudrate)
{
	

	printf("Changed baudrate to: %d\n", baudrate);

	return 0;
}

pttys open_ttys(const char *port)
{
	pttys fd;

	printf("Open device OK.\n");

	return fd;
}

void close_ttys(pttys fd)
{
	if (fd != NULL_TTYS) {
		close(fd);
	}
}

int write_ttys(pttys fd, unsigned char *buf, int len)
{
	

	return 0;
}

int read_ttys(pttys fd, unsigned char *buf, int len)
{

	return 0;
}

void keep_send(pttys fd, unsigned char *ibuf, int len)
{
	fd_set rfds, wfds;

	while (1) {
		FD_ZERO(&rfds);
		FD_SET(fd, &rfds);
		FD_ZERO();
	}
	
}

#ifdef __cplusplus
}
#endif
