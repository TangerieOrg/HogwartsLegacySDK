#pragma once
#include <cstdint>
#include "FSceneActionSequence_SequenceActorName.hpp"
class UActorProvider;
#pragma pack(push, 1)
struct FSceneActionSequence_ActorMapping {
    FSceneActionSequence_SequenceActorName ActorName; // 0x0
    UActorProvider* AssignedActor; // 0x8
}; // Size: 0x10
#pragma pack(pop)
