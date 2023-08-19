#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
class UAimEyesData;
#pragma pack(push, 1)
struct FAnimNode_AmbientFacial : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    UAimEyesData* AimEyesData; // 0x20
    char pad_28[0x1a8];
}; // Size: 0x1d0
#pragma pack(pop)
