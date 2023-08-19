#pragma once
#include <cstdint>
#include "FLerpVolumesLevelName.hpp"
#include "UActorMeshSetupMatch.hpp"
#pragma pack(push, 1)
class UActorMeshSetupMatchInLevel : public UActorMeshSetupMatch {
public:
    FLerpVolumesLevelName Level; // 0x28
    static UActorMeshSetupMatchInLevel* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
