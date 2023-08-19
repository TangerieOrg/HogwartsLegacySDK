#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchOr : public UActorMeshSetupMatch {
public:
    TArray<UActorMeshSetupMatch*> OR; // 0x28
    static UActorMeshSetupMatchOr* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
