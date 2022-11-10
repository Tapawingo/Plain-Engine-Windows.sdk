#include "BlankGame.h"
#include "Engine/Simulation.h"
#include "Platform/Win32/WinEntry.h"


class BlankGame : public Plain::Simulation {

public:
	/* Application constructor */
	BlankGame() {};

	/* Application Deconstructor */
	~BlankGame() {};

public:

	VOID SetupPerGameSettings();

	/* Called to initialize the application */
	VOID Initialize() {};

	/* Game loop - Called on a loop while the Application is running */
	VOID Update() {};
};

ENTRYAPP(BlankGame)

VOID BlankGame::SetupPerGameSettings()
{
	PerGameSettings::SetGameName(IDS_PERGAMENAME);
	PerGameSettings::SetShortName(IDS_SHORTNAME);
	PerGameSettings::SetSplashURL(IDS_SPLASHURL);
	PerGameSettings::SetMainIcon(IDI_MAINICON);
}
