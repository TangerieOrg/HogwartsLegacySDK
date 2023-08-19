#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECustomBoneAttributeLookup : uint8_t {
    BoneOnly = 0,
    ImmediateParent = 1,
    ParentHierarchy = 2,
    ECustomBoneAttributeLookup_MAX = 3,
};
#pragma pack(pop)
