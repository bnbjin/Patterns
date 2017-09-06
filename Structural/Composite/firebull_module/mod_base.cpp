#include "mod_base.h"

mod_base::mod_base(MOD_ID mid)
	: m_mid(mid)
{}

mod_base::~mod_base() {}

bool mod_base::init() 
{
	return true;
}

void mod_base::free() {}

void mod_base::run() {}

void mod_base::stop() {}

bool mod_base::up_rule()
{
	return true;
}

bool mod_base::up_cfg()
{
	return true;
}

bool mod_base::add(mod_base* sub)
{
	throw std::exception("invalid operation.");
}

void mod_base::del(mod_base* sub)
{
	throw std::exception("invalied operation.");
}

MOD_ID mod_base::get_id()
{
	return m_mid;
}

std::string mod_base::get_name()
{
	return MOD_NAME_TBL[m_mid];
}
