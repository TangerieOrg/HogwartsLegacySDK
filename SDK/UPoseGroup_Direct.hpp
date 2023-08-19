#pragma once
#include <cstdint>
#include "UPoseGroupProvider.hpp"
class UPoseGroup;
#pragma pack(push, 1)
class UPoseGroup_Direct : public UPoseGroupProvider {
public:
    UPoseGroup* PoseGroup; // 0x28
    static UPoseGroup_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
