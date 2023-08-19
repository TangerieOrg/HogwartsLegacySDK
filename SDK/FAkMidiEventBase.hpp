#pragma once
#include <cstdint>
#include "EAkMidiEventType.hpp"
#pragma pack(push, 1)
struct FAkMidiEventBase {
    EAkMidiEventType Type; // 0x0
    uint8_t Chan; // 0x1
}; // Size: 0x2
#pragma pack(pop)
