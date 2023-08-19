#pragma once
#include <cstdint>
#include "FAkMidiEventBase.hpp"
#pragma pack(push, 1)
struct FAkMidiPitchBend : public FAkMidiEventBase {
    uint8_t ValueLsb; // 0x2
    uint8_t ValueMsb; // 0x3
    int32_t FullValue; // 0x4
}; // Size: 0x8
#pragma pack(pop)
