#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialSwapInvert {
    MeshObjectFilter = 0,
    MeshTypeFilter = 1,
    MeshTagFilter = 2,
    ActorObjectFilter = 3,
    ActorTypeFilter = 4,
    ActorTagFilter = 5,
    DependentSelection = 6,
    DependentSelectionAttached = 7,
    DependentActorObjectFilter = 8,
    DependentActorTypeFilter = 9,
    DependentActorTagFilter = 10,
    EMaterialSwapInvert_MAX = 11,
};
#pragma pack(pop)
