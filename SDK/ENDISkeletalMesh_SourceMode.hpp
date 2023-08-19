#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENDISkeletalMesh_SourceMode : uint8_t {
    Default = 0,
    Source = 1,
    AttachParent = 2,
    ENDISkeletalMesh_MAX = 3,
};
#pragma pack(pop)
