#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchInLevels : public UActorMeshSetupMatch {
public:
    TArray<FLerpVolumesLevelName> Levels; // 0x28
    static UActorMeshSetupMatchInLevels* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
