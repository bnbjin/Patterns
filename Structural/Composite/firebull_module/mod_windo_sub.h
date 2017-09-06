#ifndef __MOD_WINDO_SUB_H__
#define __MOD_WINDO_SUB_H__

class mod_windo_sub :
	public mod_base
{
public:
	mod_windo_sub(unsigned long sessid);
	//...
	bool add();
	void del();
private:
	const usigned long m_sid;
}

#endif // __MOD_WINDO_SUB_H__
