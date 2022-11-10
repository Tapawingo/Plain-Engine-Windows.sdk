#pragma once

class PLAIN_API OEngine;

namespace Engine {

	enum EngineMode : INT {
		NONE,
		DEBUG,
		RELEASE,
		EDITOR,
		SERVER
	};

	extern OEngine g_PlainEngine;

	VOID PLAIN_API SetMode(EngineMode mode);
	EngineMode PLAIN_API GetMode();
	WSTRING PLAIN_API EngineModeToString();
}

using namespace Engine;
class PLAIN_API OEngine {

public:
	OEngine();
	~OEngine();

private:
	EngineMode m_EngineMode;

public:
	EngineMode GetEngineMode();
	VOID SetEngineMode(EngineMode mode);
};