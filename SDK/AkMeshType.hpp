#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class AkMeshType : uint8_t {
    StaticMesh = 0,
    CollisionMesh = 1,
    AkMeshType_MAX = 2,
};
#pragma pack(pop)
