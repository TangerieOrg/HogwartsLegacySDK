#pragma once
#include <cstdint>
#include "FAnimSequencerInstanceProxy.hpp"
#pragma pack(push, 1)
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy {
    char pad_a10[0x2b0];
}; // Size: 0xcc0
#pragma pack(pop)
