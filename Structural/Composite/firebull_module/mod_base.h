#ifndef __MOD_BASE_H__
#define __MOD_BASE_H__

#include <string>

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
protected:
	mod_base(const std::string &name);
private:
	const std::string m_name;
};

#endif // __MOD_BASE_H__
