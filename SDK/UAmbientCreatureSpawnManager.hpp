#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAmbientCreatureSpawnManager : public UObject {
public:
    char pad_28[0x248];
    static UAmbientCreatureSpawnManager* StaticClass();
    void SetSpawningEnabled(bool bEnabled);
    static UAmbientCreatureSpawnManager* Get();
    void CullAllCreatures(bool bFadeOut);
}; // Size: 0x270
#pragma pack(pop)
