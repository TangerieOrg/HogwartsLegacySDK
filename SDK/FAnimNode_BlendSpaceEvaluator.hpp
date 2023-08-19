#pragma once
#include <cstdint>
#include "FAnimNode_BlendSpacePlayer.hpp"
#pragma pack(push, 1)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer {
    float NormalizedTime; // 0xe8
    char pad_ec[0x4];
}; // Size: 0xf0
#pragma pack(pop)
