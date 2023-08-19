#pragma once
#include <cstdint>
#include "FAblAbilityChannel.hpp"
#pragma pack(push, 1)
struct FAblDynamicAbilityChannel : public FAblAbilityChannel {
    char pad_88[0x8];
}; // Size: 0x90
#pragma pack(pop)
