#include "Plain.h"

PerGameSettings* PerGameSettings::inst;

PerGameSettings::PerGameSettings()
{
	inst = this;

	wcscpy_s(inst->m_GameName, L"Undefined");
	wcscpy_s(inst->m_ShortName, L"Undefined");
	wcscpy_s(inst->m_BootTime, Time::GetDateTimeString(TRUE).c_str());
	wcscpy_s(inst->m_SplashURL, L"..\\Plain\\Content\\Images\\PlainSplash.bmp");

}

PerGameSettings::~PerGameSettings()
{
}
