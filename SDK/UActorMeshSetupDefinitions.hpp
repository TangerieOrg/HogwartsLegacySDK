#pragma once
#include <cstdint>
#include "FActorMeshSetupAutoDefinition.hpp"
#include "FActorMeshSetupNamedDefinition.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UActorMeshSetupDefinitions : public UDataAsset {
public:
    TArray<FActorMeshSetupAutoDefinition> AutoDefinitions; // 0x30
    TArray<FActorMeshSetupNamedDefinition> NamedDefinitions; // 0x40
    static UActorMeshSetupDefinitions* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
