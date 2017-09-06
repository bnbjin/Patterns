#include "mod_windo.h"
#include "mod_windo_sub.h"

mod_windo::mod_windo() :
	mod_base(MI_WINDO)
{}

mod_windo::~mod_windo() {}

bool mod_windo::add(mod_base* sub)
{
	if (sub->get_id() != MI_WINDO_SUB)
		return false;

	mod_windo_sub* windo_sub =  dynamic_cast<mod_windo_sub*>(sub);
	m_sub_tbl.insert(windo_sub);
	
	return true;
}

void mod_windo_del(mod_base* sub)
{
	if (sub->get_id() != MI_WINDO_SUB)
		throw std::exception("is not MI_WINDO_SUB");

	mod_windo_sub* windo_sub =  dynamic_cast<mod_windo_sub*>(sub);
	m_sub_tbl.erase(windo_sub);
}
