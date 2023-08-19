#pragma once
#include <cstdint>
#include "FAkMidiEventBase.hpp"
#pragma pack(push, 1)
struct FAkMidiProgramChange : public FAkMidiEventBase {
    uint8_t ProgramNum; // 0x2
}; // Size: 0x3
#pragma pack(pop)
