#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchActorTag : public UActorMeshSetupMatch {
public:
    FName ActorTag; // 0x28
    static UActorMeshSetupMatchActorTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
