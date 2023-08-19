#pragma once
#include <cstdint>
#include "ESubmixSendMethod.hpp"
#include "FRuntimeFloatCurve.hpp"
class USoundSubmixBase;
#pragma pack(push, 1)
struct FAttenuationSubmixSendSettings {
    USoundSubmixBase* Submix; // 0x0
    ESubmixSendMethod SubmixSendMethod; // 0x8
    char pad_9[0x3];
    float SubmixSendLevelMin; // 0xc
    float SubmixSendLevelMax; // 0x10
    float SubmixSendDistanceMin; // 0x14
    float SubmixSendDistanceMax; // 0x18
    float ManualSubmixSendLevel; // 0x1c
    FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20
}; // Size: 0xa8
#pragma pack(pop)
