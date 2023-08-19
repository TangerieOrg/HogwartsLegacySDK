#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchActorTags : public UActorMeshSetupMatch {
public:
    TArray<FName> ActorTags; // 0x28
    static UActorMeshSetupMatchActorTags* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
