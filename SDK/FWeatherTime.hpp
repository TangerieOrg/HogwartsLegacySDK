#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#include "FTimespan.hpp"
#include "FWeatherTimeBase.hpp"
#include "FWeatherTimeSyncTime.hpp"
#include "FWeatherWorldTime.hpp"
#pragma pack(push, 1)
struct FWeatherTime : public FWeatherTimeBase {
    float RealDeltaTime; // 0x10
    float AccumulationDeltaTime; // 0x14
    FWeatherWorldTime GameTime; // 0x18
    FWeatherTimeSyncTime SyncTime; // 0x38
    FDateTime SequenceStart; // 0x50
    FTimespan SequenceDuration; // 0x58
    char pad_60[0x8];
}; // Size: 0x68
#pragma pack(pop)
