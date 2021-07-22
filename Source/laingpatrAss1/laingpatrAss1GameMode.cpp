// Copyright Epic Games, Inc. All Rights Reserved.

#include "laingpatrAss1GameMode.h"
#include "laingpatrAss1Ball.h"

AlaingpatrAss1GameMode::AlaingpatrAss1GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = AlaingpatrAss1Ball::StaticClass();
}
