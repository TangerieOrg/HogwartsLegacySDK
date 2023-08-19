#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECompositeLevelBoundsDraw {
    None = 0,
    OverallBounds = 1,
    ActorBounds = 2,
    LandscapeBounds = 3,
    LevelBoundsActors = 4,
    CalculatedActorBounds = 5,
    ECompositeLevelBoundsDraw_MAX = 6,
};
#pragma pack(pop)
