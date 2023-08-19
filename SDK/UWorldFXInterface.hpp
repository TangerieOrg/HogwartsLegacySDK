#pragma once
#include <cstdint>
#include "FWorldFXSpawnOverrides.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UWorldFXInterface : public UInterface {
public:
    static UWorldFXInterface* StaticClass();
    void WorldFXInterfaceStop(bool bImmediately);
    void WorldFXInterfaceStart(FWorldFXSpawnOverrides SpawnOverrides);
}; // Size: 0x28
#pragma pack(pop)
