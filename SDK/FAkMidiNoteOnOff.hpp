#pragma once
#include <cstdint>
#include "FAkMidiEventBase.hpp"
#pragma pack(push, 1)
struct FAkMidiNoteOnOff : public FAkMidiEventBase {
    uint8_t Note; // 0x2
    uint8_t Velocity; // 0x3
}; // Size: 0x4
#pragma pack(pop)
