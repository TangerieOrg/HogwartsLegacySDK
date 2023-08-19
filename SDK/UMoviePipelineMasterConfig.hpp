#pragma once
#include <cstdint>
#include "FFrameRate.hpp"
#include "UMoviePipelineConfigBase.hpp"
class UMoviePipelineOutputSetting;
class UMoviePipelineSetting;
class ULevelSequence;
#pragma pack(push, 1)
class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase {
public:
    char pad_50[0x50];
    UMoviePipelineOutputSetting* OutputSetting; // 0xa0
    TArray<UMoviePipelineSetting*> TransientSettings; // 0xa8
    static UMoviePipelineMasterConfig* StaticClass();
    void InitializeTransientSettings();
    TArray<UMoviePipelineSetting*> GetTransientSettings();
    FFrameRate GetEffectiveFrameRate(ULevelSequence* InSequence);
    TArray<UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);
}; // Size: 0xb8
#pragma pack(pop)
