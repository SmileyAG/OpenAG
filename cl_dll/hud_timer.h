#pragma once

class CHudTimer : public CHudBase
{
	float draw_until;
	int seconds_total;
	int seconds_passed;

	cvar_t* hud_timer;

public:
	virtual int Init() override;
	virtual int VidInit() override;
	virtual int Draw(float time) override;

	int MsgFunc_Timer(const char* name, int size, void* buf);
};
