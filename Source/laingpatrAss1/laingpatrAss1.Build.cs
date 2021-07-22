// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class laingpatrAss1 : ModuleRules
{
    public laingpatrAss1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
