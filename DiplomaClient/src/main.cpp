#include <iostream>
#include <vector>
#include <array>

extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
}


int main()
{
	AVFormatContext *pFormatContext = avformat_alloc_context();
	return 0;
}