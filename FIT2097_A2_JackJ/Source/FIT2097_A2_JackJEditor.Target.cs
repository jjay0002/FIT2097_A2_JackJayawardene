// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FIT2097_A2_JackJEditorTarget : TargetRules
{
	public FIT2097_A2_JackJEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("FIT2097_A2_JackJ");
	}
}
