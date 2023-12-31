#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMultiFXLocation : uint8_t {
    DefaultLoc = 0,
    AnchorLoc = 1,
    ObjectCenterLoc = 2,
    ObjectTopLoc = 3,
    ObjectBottomLoc = 4,
    ObjectFrontLoc = 5,
    ObjectBackLoc = 6,
    ObjectRightLoc = 7,
    ObjectLeftLoc = 8,
    GroundBelowLoc = 9,
    ComponentCenterLoc = 10,
    ComponentTopLoc = 11,
    ComponentBottomLoc = 12,
    ComponentFrontLoc = 13,
    ComponentBackLoc = 14,
    ComponentRightLoc = 15,
    ComponentLeftLoc = 16,
    WandtipLoc = 17,
    ImpactPoint = 18,
    TargetPoint = 19,
    BoneLoc = 20,
    MeshPointNearestInstigator = 21,
    ActorPointNearestInstigator = 22,
    MeshPointNearestLoc = 23,
    ActorPointNearestLoc = 24,
    WaterSurfaceLoc = 25,
    WeaponLoc = 26,
    ProjectileLoc = 27,
    EMultiFXLocation_MAX = 28,
};
#pragma pack(pop)
