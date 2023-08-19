#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchNotInLevels : public UActorMeshSetupMatch {
public:
    TArray<FLerpVolumesLevelName> Levels; // 0x28
    static UActorMeshSetupMatchNotInLevels* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
