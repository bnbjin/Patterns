#ifndef __MOD_CFG_H__
#define __MOD_CFG_H__

enum MOD_ID
{
	MI_AGENT,
	MI_PORC,
	MI_FILE,
	MI_NET,
	MI_FIREWALL,
	MI_PACKET,
	MI_LOGON,
	MI_WINDO,
	MI_WINDO_SUB
};

const char* MOD_NAME_TBL[] = {
	"agent",
	"proc",
	"file",
	"net",
	"firewall",
	"packet",
	"logon",
	"window",
	"window_sub"
};

#endif // __MOD_CFG_H__
