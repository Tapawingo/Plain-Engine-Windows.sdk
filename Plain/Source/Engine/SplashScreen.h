#pragma once

#include "Platform/Win32/Window.h"

namespace SplashScreen {



	VOID		PLAIN_API		Open();
	VOID		PLAIN_API		Close();
	VOID		PLAIN_API		AddMessage(CONST WCHAR* message);

}

class PLAIN_API SplashWindow : public Win32::Window {

public:
	SplashWindow();
	~SplashWindow();

	virtual		LRESULT				MessageHandler(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) override;

private:
	WCHAR m_outputMessage[MAX_NAME_STRING];
};