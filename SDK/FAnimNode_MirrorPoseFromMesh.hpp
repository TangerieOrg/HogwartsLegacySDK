#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#pragma pack(push, 1)
struct FAnimNode_MirrorPoseFromMesh : public FAnimNode_Base {
    char pad_10[0x8];
    uint8_t bUseAttachedParent : 1; // 0x18
    uint8_t bCopyCurves : 1; // 0x18
    uint8_t pad_bitfield_18_2 : 6;
    bool bCopyCustomAttributes; // 0x19
    uint8_t bUseMeshPose : 1; // 0x1a
    uint8_t pad_bitfield_1a_1 : 7;
    char pad_1b[0x1];
    FName RootBoneToCopy; // 0x1c
    char pad_24[0x204];
}; // Size: 0x228
#pragma pack(pop)
