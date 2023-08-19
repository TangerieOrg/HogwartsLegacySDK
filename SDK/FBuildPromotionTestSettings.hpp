#pragma once
#include <cstdint>
#include "FBuildPromotionImportWorkflowSettings.hpp"
#include "FBuildPromotionNewProjectSettings.hpp"
#include "FBuildPromotionOpenAssetSettings.hpp"
#include "FFilePath.hpp"
#pragma pack(push, 1)
struct FBuildPromotionTestSettings {
    FFilePath DefaultStaticMeshAsset; // 0x0
    FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
    FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
    FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
    FFilePath SourceControlMaterial; // 0x1e0
}; // Size: 0x1f0
#pragma pack(pop)
