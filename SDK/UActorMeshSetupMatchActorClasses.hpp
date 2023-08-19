#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchActorClasses : public UActorMeshSetupMatch {
public:
    TArray<void*> ActorClasses; // 0x28
    bool bIncludeSubclasses; // 0x38
    char pad_39[0x7];
    static UActorMeshSetupMatchActorClasses* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
