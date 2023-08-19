#pragma once
#include <cstdint>
#include "FAnimInstanceProxy.hpp"
#pragma pack(push, 1)
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy {
    char pad_770[0x2a0];
}; // Size: 0xa10
#pragma pack(pop)
