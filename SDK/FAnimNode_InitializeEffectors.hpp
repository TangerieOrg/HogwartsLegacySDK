#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FInitializeEffectorData.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_InitializeEffectors : public FAnimNode_Base {
    FPoseLink BasePose; // 0x10
    TArray<FInitializeEffectorData> EffectorData; // 0x20
}; // Size: 0x30
#pragma pack(pop)
