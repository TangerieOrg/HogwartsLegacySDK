#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base {
    FPoseLink Base; // 0x10
    FPoseLink Additive; // 0x20
    bool bMeshSpaceAdditive; // 0x30
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
