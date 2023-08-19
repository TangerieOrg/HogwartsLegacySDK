#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#include "FPoseUtilityBipedController.hpp"
#pragma pack(push, 1)
struct FAnimNode_BipedIK : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    FPoseUtilityBipedController ControlParameters; // 0x20
}; // Size: 0x200
#pragma pack(pop)
