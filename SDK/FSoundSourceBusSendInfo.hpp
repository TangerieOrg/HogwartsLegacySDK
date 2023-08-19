#pragma once
#include <cstdint>
#include "ESourceBusSendLevelControlMethod.hpp"
#include "FRuntimeFloatCurve.hpp"
class USoundSourceBus;
class UAudioBus;
#pragma pack(push, 1)
struct FSoundSourceBusSendInfo {
    ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0
    char pad_1[0x7];
    USoundSourceBus* SoundSourceBus; // 0x8
    UAudioBus* AudioBus; // 0x10
    float SendLevel; // 0x18
    float MinSendLevel; // 0x1c
    float MaxSendLevel; // 0x20
    float MinSendDistance; // 0x24
    float MaxSendDistance; // 0x28
    char pad_2c[0x4];
    FRuntimeFloatCurve CustomSendLevelCurve; // 0x30
}; // Size: 0xb8
#pragma pack(pop)
