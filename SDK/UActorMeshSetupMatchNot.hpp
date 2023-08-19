#pragma once
#include <cstdint>
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchNot : public UActorMeshSetupMatch {
public:
    UActorMeshSetupMatch* Not; // 0x28
    static UActorMeshSetupMatchNot* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
