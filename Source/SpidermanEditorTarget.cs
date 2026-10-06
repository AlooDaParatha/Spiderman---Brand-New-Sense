using UnrealBuildTool;
using System.Collections.Generic;

public class SpidermanEditorTarget : TargetRules
{
	public SpidermanEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.AddRange( new string[] { "Spiderman" } );
	}
}
