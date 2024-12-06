// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ChronoCleaner : ModuleRules
{
	public ChronoCleaner(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
