#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENDISkeletalMesh_SkinningMode : uint8_t {
    Invalid = 255,
    None = 0,
    SkinOnTheFly = 1,
    PreSkin = 2,
};
#pragma pack(pop)
