#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESetCollisionGeometryInputMode : int32_t {
    CombineAll = 0,
    PerInputObject = 1,
    PerMeshComponent = 2,
    PerMeshGroup = 3,
    ESetCollisionGeometryInputMode_MAX = 4,
};
#pragma pack(pop)
