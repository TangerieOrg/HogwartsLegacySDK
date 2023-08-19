#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UStreamingSettings : public UDeveloperSettings {
public:
    uint8_t AsyncLoadingThreadEnabled : 1; // 0x38
    uint8_t WarnIfTimeLimitExceeded : 1; // 0x38
    uint8_t pad_bitfield_38_2 : 6;
    char pad_39[0x3];
    float TimeLimitExceededMultiplier; // 0x3c
    float TimeLimitExceededMinTime; // 0x40
    int32_t MinBulkDataSizeForAsyncLoading; // 0x44
    uint8_t UseBackgroundLevelStreaming : 1; // 0x48
    uint8_t AsyncLoadingUseFullTimeLimit : 1; // 0x48
    uint8_t pad_bitfield_48_2 : 6;
    char pad_49[0x3];
    float AsyncLoadingTimeLimit; // 0x4c
    float PriorityAsyncLoadingExtraTime; // 0x50
    float LevelStreamingActorsUpdateTimeLimit; // 0x54
    float PriorityLevelStreamingActorsUpdateExtraTime; // 0x58
    int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5c
    float LevelStreamingUnregisterComponentsTimeLimit; // 0x60
    int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x64
    uint8_t FlushStreamingOnExit : 1; // 0x68
    uint8_t EventDrivenLoaderEnabled : 1; // 0x68
    uint8_t pad_bitfield_68_2 : 6;
    char pad_69[0x7];
    static UStreamingSettings* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
