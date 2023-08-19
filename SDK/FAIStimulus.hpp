#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAIStimulus {
    float Age; // 0x0
    float ExpirationAge; // 0x4
    float Strength; // 0x8
    FVector StimulusLocation; // 0xc
    FVector ReceiverLocation; // 0x18
    FName Tag; // 0x24
    char pad_2c[0xc];
    uint8_t pad_bitfield_38_0 : 1;
    uint8_t bSuccessfullySensed : 1; // 0x38
    uint8_t pad_bitfield_38_2 : 6;
    char pad_39[0x3];
}; // Size: 0x3c
#pragma pack(pop)
