#include "Plain.h"
#include "Simulation.h"
#include "Engine/SplashScreen.h"

namespace Plain {
	Simulation::Simulation()
		: Win32::Window(L"MainApplication", NULL)
	{
	}

	Simulation::~Simulation()
	{
	}

	VOID Simulation::PreInitialize()
	{
		Logger::PrintDebugSeparator();
		Logger::PrintLog(L"Application Starting...\n");
		Logger::PrintLog(L"Game Name: %s\n", PerGameSettings::GameName());
		Logger::PrintLog(L"Boot Time: %s\n", Time::GetDateTimeString().c_str());
		Logger::PrintLog(L"Engine Mode: %s\n", Engine::EngineModeToString().c_str());

		Logger::PrintDebugSeparator();

		SplashScreen::Open();

		Win32::Window::RegisterNewClass();
		Win32::Window::Initialize();
	}

	LRESULT Simulation::MessageHandler(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
	{
		switch (message)
		{

		}

		return Window::MessageHandler(hWnd, message, wParam, lParam);
	}
}
