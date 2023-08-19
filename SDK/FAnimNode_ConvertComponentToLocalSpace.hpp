#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FComponentSpacePoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base {
    FComponentSpacePoseLink ComponentPose; // 0x10
}; // Size: 0x20
#pragma pack(pop)
