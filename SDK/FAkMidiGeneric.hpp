#pragma once
#include <cstdint>
#include "FAkMidiEventBase.hpp"
#pragma pack(push, 1)
struct FAkMidiGeneric : public FAkMidiEventBase {
    uint8_t Param1; // 0x2
    uint8_t Param2; // 0x3
}; // Size: 0x4
#pragma pack(pop)
