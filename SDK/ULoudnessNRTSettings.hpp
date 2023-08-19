#pragma once
#include <cstdint>
#include "ELoudnessNRTCurveTypeEnum.hpp"
#include "UAudioSynesthesiaNRTSettings.hpp"
#pragma pack(push, 1)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings {
public:
    float AnalysisPeriod; // 0x28
    float MinimumFrequency; // 0x2c
    float MaximumFrequency; // 0x30
    ELoudnessNRTCurveTypeEnum CurveType; // 0x34
    char pad_35[0x3];
    float NoiseFloorDb; // 0x38
    char pad_3c[0x4];
    static ULoudnessNRTSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
