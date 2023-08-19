#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "USceneRigStageInterface.hpp"
class UBaseArchitectAsset;
class UAnimationArchitectTagProvider;
class ULevelStreaming;
#pragma pack(push, 1)
class USceneRigStage : public USceneRigStageInterface {
public:
    char pad_50[0x8];
    TArray<void*> StageLevels; // 0x58
    FSceneRigStage_Actor StageRoot; // 0x68
    FTransform StageRootFallback; // 0x80
    TArray<UBaseArchitectAsset*> LookupAssets; // 0xb0
    TArray<UAnimationArchitectTagProvider*> LookupTagProviders; // 0xc0
    bool bEnableDefaultLighting; // 0xd0
    bool bShouldSimulatePhysics; // 0xd1
    char pad_d2[0x6];
    TArray<ULevelStreaming*> StreamedStages; // 0xd8
    TArray<FVector> InterestPoints; // 0xe8
    FString ExportFilename; // 0xf8
    bool OverrideEnvironmentPath; // 0x108
    char pad_109[0x7];
    FString ExportEnvironmentPath; // 0x110
    bool UseExportRadius; // 0x120
    char pad_121[0x3];
    float ExportRadius; // 0x124
    char pad_128[0x58];
    static USceneRigStage* StaticClass();
}; // Size: 0x180
#pragma pack(pop)
