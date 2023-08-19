#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
    HideNone = 0,
    HideWithCollision = 1,
    HideSelected = 2,
    HideWholeCollection = 3,
    HideAll = 4,
    EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};
#pragma pack(pop)
