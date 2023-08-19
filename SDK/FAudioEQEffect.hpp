#pragma once
#include <cstdint>
#include "FAudioEffectParameters.hpp"
#pragma pack(push, 1)
struct FAudioEQEffect : public FAudioEffectParameters {
    char pad_8[0x8];
    float FrequencyCenter0; // 0x10
    float Gain0; // 0x14
    float Bandwidth0; // 0x18
    float FrequencyCenter1; // 0x1c
    float Gain1; // 0x20
    float Bandwidth1; // 0x24
    float FrequencyCenter2; // 0x28
    float Gain2; // 0x2c
    float Bandwidth2; // 0x30
    float FrequencyCenter3; // 0x34
    float Gain3; // 0x38
    float Bandwidth3; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
