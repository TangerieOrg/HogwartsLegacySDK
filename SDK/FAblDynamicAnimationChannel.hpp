#pragma once
#include <cstdint>
#include "FAblAnimationChannel.hpp"
#pragma pack(push, 1)
struct FAblDynamicAnimationChannel : public FAblAnimationChannel {
    char pad_70[0x8];
}; // Size: 0x78
#pragma pack(pop)
