// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Hunter_Micro_Game_APEditorTarget : TargetRules
{
	public Hunter_Micro_Game_APEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Hunter_Micro_Game_AP" } );
	}
}
