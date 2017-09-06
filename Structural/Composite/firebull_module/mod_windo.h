#ifndef __MOD_WINDO_H__
#define __MOD_WINDO_H__

#include <set>
#include <exception>
#include "mod_base.h"

class mod_windo :
	public mod_base
{
public: 
	mod_windo();
	~mod_windo();
	bool add(mod_base* sub);
	void del(mod_base* sub) throw (std::exception);
	// ...
private:
	class mod_windo_sub : public mod_base;
	std::set<mod_windo_sub*> m_sub_tbl;
};

#endif // __MOD_WINDO_H__
