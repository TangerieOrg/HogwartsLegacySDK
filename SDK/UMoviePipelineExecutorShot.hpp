#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMoviePipelineShotConfig;
class UClass;
#pragma pack(push, 1)
class UMoviePipelineExecutorShot : public UObject {
public:
    bool bEnabled; // 0x28
    char pad_29[0x7];
    FString OuterName; // 0x30
    FString InnerName; // 0x40
    char pad_50[0x98];
    float Progress; // 0xe8
    char pad_ec[0x4];
    FString StatusMessage; // 0xf0
    UMoviePipelineShotConfig* ShotOverrideConfig; // 0x100
    char pad_108[0x28];
    static UMoviePipelineExecutorShot* StaticClass();
    bool ShouldRender();
    void SetStatusProgress(float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetShotOverridePresetOrigin(UMoviePipelineShotConfig* InPreset);
    void SetShotOverrideConfiguration(UMoviePipelineShotConfig* InPreset);
    float GetStatusProgress();
    FString GetStatusMessage();
    UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
    UMoviePipelineShotConfig* GetShotOverrideConfiguration();
    UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(UClass* InConfigType);
}; // Size: 0x130
#pragma pack(pop)
