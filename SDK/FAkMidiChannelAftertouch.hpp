#pragma once
#include <cstdint>
#include "FAkMidiEventBase.hpp"
#pragma pack(push, 1)
struct FAkMidiChannelAftertouch : public FAkMidiEventBase {
    uint8_t Value; // 0x2
}; // Size: 0x3
#pragma pack(pop)
