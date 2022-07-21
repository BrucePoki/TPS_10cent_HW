// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPS_10cent_HW : ModuleRules
{
	public TPS_10cent_HW(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
