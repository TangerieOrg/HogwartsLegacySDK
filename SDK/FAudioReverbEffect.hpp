#pragma once
#include <cstdint>
#include "FAudioEffectParameters.hpp"
#pragma pack(push, 1)
struct FAudioReverbEffect : public FAudioEffectParameters {
    char pad_8[0x40];
}; // Size: 0x48
#pragma pack(pop)
