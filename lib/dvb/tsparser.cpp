#ifdef DREAMNEXTGEN
#include <lib/dvb/tsparser.h>

eTsParser::eTsParser()
	: m_stop(0), m_fd_demux(-1), m_pause(false), m_eAudioDecoder(nullptr)
{
}

eTsParser::~eTsParser()
{
	stop();
}

void eTsParser::thread()
{
}

int eTsParser::startPid(int fd_demux)
{
	m_fd_demux = fd_demux;
	return 0;
}

void eTsParser::stop()
{
	m_stop = 1;
}

void eTsParser::flush()
{
}

void eTsParser::freeze()
{
	m_pause = true;
}

void eTsParser::unfreeze()
{
	m_pause = false;
}

void eTsParser::setChannel(int /*channel*/)
{
}

int eTsParser::getPTS(pts_t &now)
{
	now = 0;
	return -1;
}

void eTsParser::set_pts()
{
}

void eTsParser::set_latency()
{
}

void eTsParser::parse(const uint8_t * /*data*/, int /*size*/, int /*is_start*/)
{
}

int eTsParser::play(const uint8_t * /*data*/, int /*size*/)
{
	return 0;
}
#endif
