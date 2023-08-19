#pragma once
#include <cstdint>
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
#include "UObject.hpp"
#pragma pack(push, 1)
class UAutomationTestSettings : public UObject {
public:
    TArray<FString> EngineTestModules; // 0x28
    TArray<FString> EditorTestModules; // 0x38
    FSoftObjectPath AutomationTestmap; // 0x48
    TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60
    TArray<FSoftObjectPath> AssetsToOpen; // 0x70
    TArray<FString> MapsToPIETest; // 0x80
    FBuildPromotionTestSettings BuildPromotionTest; // 0x90
    FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x280
    FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2b0
    FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2c0
    TArray<FString> TestLevelFolders; // 0x2f0
    TArray<FExternalToolDefinition> ExternalTools; // 0x300
    TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x310
    TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x320
    FIntPoint DefaultScreenshotResolution; // 0x330
    float PIETestDuration; // 0x338
    char pad_33c[0x4];
    static UAutomationTestSettings* StaticClass();
}; // Size: 0x340
#pragma pack(pop)
