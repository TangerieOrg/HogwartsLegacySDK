#pragma once
#include <cstdint>
#include "ESendLevelControlMethod.hpp"
#include "ESubmixSendStage.hpp"
#include "FRuntimeFloatCurve.hpp"
class USoundSubmixBase;
#pragma pack(push, 1)
struct FSoundSubmixSendInfo {
    ESendLevelControlMethod SendLevelControlMethod; // 0x0
    ESubmixSendStage SendStage; // 0x1
    char pad_2[0x6];
    USoundSubmixBase* SoundSubmix; // 0x8
    float SendLevel; // 0x10
    float MinSendLevel; // 0x14
    float MaxSendLevel; // 0x18
    float MinSendDistance; // 0x1c
    float MaxSendDistance; // 0x20
    char pad_24[0x4];
    FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
}; // Size: 0xb0
#pragma pack(pop)
