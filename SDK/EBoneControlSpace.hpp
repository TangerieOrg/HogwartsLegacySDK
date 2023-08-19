#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBoneControlSpace : uint8_t {
    BCS_WorldSpace = 0,
    BCS_ComponentSpace = 1,
    BCS_ParentBoneSpace = 2,
    BCS_BoneSpace = 3,
    BCS_MAX = 4,
};
#pragma pack(pop)
