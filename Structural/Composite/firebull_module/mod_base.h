#ifndef __MOD_BASE_H__
#define __MOD_BASE_H__

#include <string>
#include <exception>
#include "mod_cfg.h"

class mod_base
{
public:
	virtual ~mod_base();
	virtual bool init();
	virtual void free();
	virtual void run();
	virtual void stop();
	virtual bool up_rule();
	virtual bool up_cfg();
	virtual bool add(mod_base* sub) throw (std::exception);
	virtual void del(mod_base* sub) throw (std::exception);
	MOD_ID get_id();
	std::string get_name();
protected:
	mod_base(MOD_ID mid);
private:
	const MOD_ID m_mid;
};

#endif // __MOD_BASE_H__
