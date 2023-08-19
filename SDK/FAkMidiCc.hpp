#pragma once
#include <cstdint>
#include "EAkMidiCcValues.hpp"
#include "FAkMidiEventBase.hpp"
#pragma pack(push, 1)
struct FAkMidiCc : public FAkMidiEventBase {
    EAkMidiCcValues Cc; // 0x2
    uint8_t Value; // 0x3
}; // Size: 0x4
#pragma pack(pop)
