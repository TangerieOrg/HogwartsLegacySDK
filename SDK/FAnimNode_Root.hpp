#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_Root : public FAnimNode_Base {
    FPoseLink Result; // 0x10
    FName Name; // 0x20
    FName Group; // 0x28
}; // Size: 0x30
#pragma pack(pop)
