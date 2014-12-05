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

static int scan_type(unsigned char *buf, int len)
{

	return 0;
}

int process_input(unsigned char *buf, int len, unsigned char fill, unsigned char **obuf, int *olen)
{
	int packs = (len + 511) / 512;
	int bytes = packs * 512;
	if (bytes > MAX_FILE_SIZE) {
		fprintf(stderr, "file too long.\n");
		return -1;
	}

	assert(fill == 0 || fill == 0xFF);

	memset(buf+len, fill, bytes-len);

	if (obuf) *obuf = buf;
	if (olen) *olen = bytes;

	return 0;
}

int hex2bin(unsigned char *hbuf, int hlen, unsigned char **bbuf, int *blen)
{

	return 0;
}

#ifdef __cplusplus
}
#endif