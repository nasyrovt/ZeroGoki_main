// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ZeroGoki_main : ModuleRules
{
	public ZeroGoki_main(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
