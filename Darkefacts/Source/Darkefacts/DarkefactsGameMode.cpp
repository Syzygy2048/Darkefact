

#include "Darkefacts.h"
#include "DarkefactsGameMode.h"
#include "DarkefactsPlayerController.h"

ADarkefactsGameMode::ADarkefactsGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ADarkefactsPlayerController::StaticClass();
}


