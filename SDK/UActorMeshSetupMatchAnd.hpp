#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchAnd : public UActorMeshSetupMatch {
public:
    TArray<UActorMeshSetupMatch*> AND; // 0x28
    static UActorMeshSetupMatchAnd* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
