#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBoneVisibilityStatus {
    BVS_HiddenByParent = 0,
    BVS_Visible = 1,
    BVS_ExplicitlyHidden = 2,
    BVS_MAX = 3,
};
#pragma pack(pop)
