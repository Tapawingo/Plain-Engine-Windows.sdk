#include "Plain.h"

namespace Engine {
	OEngine g_PlainEngine;

	VOID SetMode(EngineMode mode)
	{
		g_PlainEngine.SetEngineMode(mode);
	}

	WSTRING EngineModeToString()
	{
		switch (Engine::GetMode())
		{
		case EngineMode::DEBUG:		return L"Debug";
		case EngineMode::RELEASE:	return L"Release";
		case EngineMode::SERVER:	return L"Server";
		case EngineMode::EDITOR:	return L"Editor";
		default:					return L"None";
		}
	}

	EngineMode GetMode()
	{
		return g_PlainEngine.GetEngineMode();
	}
}

OEngine::OEngine()
{
#ifdef _DEBUG
	m_EngineMode = EngineMode::DEBUG;
#else
	m_EngineMode = EngineMode::RELEASE;
#endif
}

OEngine::~OEngine()
{
}

EngineMode OEngine::GetEngineMode()
{
	return m_EngineMode;
}

VOID OEngine::SetEngineMode(EngineMode mode)
{
	m_EngineMode = mode;
}