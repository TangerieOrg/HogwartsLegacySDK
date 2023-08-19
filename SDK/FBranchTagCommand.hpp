#pragma once
#include <cstdint>
#include "ETrafficFlow.hpp"
#include "FBaseTagCommand.hpp"
#pragma pack(push, 1)
struct FBranchTagCommand : public FBaseTagCommand {
    char pad_1[0x7];
    int64_t UUID_BranchTo; // 0x8
    int32_t FromPathPointIndex; // 0x10
    int32_t ToPathPointIndex; // 0x14
    float Probability; // 0x18
    ETrafficFlow ForwardToBranchDirection; // 0x1c
    ETrafficFlow BackwardToBranchDirection; // 0x1d
    char pad_1e[0x2];
}; // Size: 0x20
#pragma pack(pop)
