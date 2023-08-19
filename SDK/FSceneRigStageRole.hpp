#pragma once
#include <cstdint>
#include "ESceneRigStageRoleType.hpp"
#pragma pack(push, 1)
struct FSceneRigStageRole {
    ESceneRigStageRoleType RoleType; // 0x0
    char pad_1[0x3];
    int32_t RoleIndex; // 0x4
}; // Size: 0x8
#pragma pack(pop)
