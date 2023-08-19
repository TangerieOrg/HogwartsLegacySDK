#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base {
    FPoseLink LocalPose; // 0x10
}; // Size: 0x20
#pragma pack(pop)
