#pragma once
#include <cstdint>
#include "EQuadrupedSpineChainType.hpp"
#include "FBoneReferenceEx.hpp"
#pragma pack(push, 1)
struct FQuadrupedSpineBoneChain {
    EQuadrupedSpineChainType Type; // 0x0
    char pad_1[0x3];
    FBoneReferenceEx StartBone; // 0x4
    FBoneReferenceEx EndBone; // 0x14
    float weight; // 0x24
    char pad_28[0x10];
}; // Size: 0x38
#pragma pack(pop)
