#include "FBlueprintEditorPromotionSettings.hpp"
#include "FBuildPromotionTestSettings.hpp"
#include "FEditorImportExportTestDefinition.hpp"
#include "FEditorMapPerformanceTestDefinition.hpp"
#include "FExternalToolDefinition.hpp"
#include "FIntPoint.hpp"
#include "FLaunchOnTestSettings.hpp"
#include "FMaterialEditorPromotionSettings.hpp"
#include "FParticleEditorPromotionSettings.hpp"
#include "FSoftObjectPath.hpp"
#include "UAutomationTestSettings.hpp"
#include "UObject.hpp"
UAutomationTestSettings* UAutomationTestSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AutomationTestSettings");
    return (UAutomationTestSettings*)res;
}
