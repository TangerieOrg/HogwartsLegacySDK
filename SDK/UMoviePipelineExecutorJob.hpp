#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
class UMoviePipelineExecutorShot;
class UMoviePipelineMasterConfig;
#pragma pack(push, 1)
class UMoviePipelineExecutorJob : public UObject {
public:
    FString JobName; // 0x28
    FSoftObjectPath Sequence; // 0x38
    FSoftObjectPath Map; // 0x50
    FString Author; // 0x68
    TArray<UMoviePipelineExecutorShot*> ShotInfo; // 0x78
    FString UserData; // 0x88
    FString StatusMessage; // 0x98
    float StatusProgress; // 0xa8
    bool bIsConsumed; // 0xac
    char pad_ad[0x3];
    UMoviePipelineMasterConfig* Configuration; // 0xb0
    char pad_b8[0x28];
    static UMoviePipelineExecutorJob* StaticClass();
    void SetStatusProgress(float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetSequence(FSoftObjectPath InSequence);
    void SetPresetOrigin(UMoviePipelineMasterConfig* InPreset);
    void SetConsumed(bool bInConsumed);
    void SetConfiguration(UMoviePipelineMasterConfig* InPreset);
    void OnDuplicated();
    bool IsConsumed();
    float GetStatusProgress();
    FString GetStatusMessage();
    UMoviePipelineMasterConfig* GetPresetOrigin();
    UMoviePipelineMasterConfig* GetConfiguration();
}; // Size: 0xe0
#pragma pack(pop)
