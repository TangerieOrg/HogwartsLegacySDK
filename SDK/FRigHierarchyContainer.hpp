#pragma once
#include <cstdint>
#include "FRigBoneHierarchy.hpp"
#include "FRigControlHierarchy.hpp"
#include "FRigCurveContainer.hpp"
#include "FRigSpaceHierarchy.hpp"
#pragma pack(push, 1)
struct FRigHierarchyContainer {
    FRigBoneHierarchy BoneHierarchy; // 0x0
    FRigSpaceHierarchy SpaceHierarchy; // 0x98
    FRigControlHierarchy ControlHierarchy; // 0x128
    FRigCurveContainer CurveContainer; // 0x230
    int32_t Version; // 0x2c8
    char pad_2cc[0x9c];
}; // Size: 0x368
#pragma pack(pop)
