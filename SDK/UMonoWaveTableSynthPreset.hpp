#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMonoWaveTableSynthPreset : public UObject {
public:
    FString PresetName; // 0x28
    uint8_t bLockKeyframesToGridBool : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x3];
    int32_t LockKeyframesToGrid; // 0x3c
    int32_t WaveTableResolution; // 0x40
    char pad_44[0x4];
    TArray<FRuntimeFloatCurve> WaveTable; // 0x48
    uint8_t bNormalizeWaveTables : 1; // 0x58
    uint8_t pad_bitfield_58_1 : 7;
    char pad_59[0x117];
    static UMonoWaveTableSynthPreset* StaticClass();
}; // Size: 0x170
#pragma pack(pop)
