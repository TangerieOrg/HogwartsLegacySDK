#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroomBindingMeshType : uint8_t {
    SkeletalMesh = 0,
    GeometryCache = 1,
    EGroomBindingMeshType_MAX = 2,
};
#pragma pack(pop)
