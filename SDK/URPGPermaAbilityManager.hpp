#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class URPGPermaAbilityManager : public UObject {
public:
    static URPGPermaAbilityManager* StaticClass();
    void OnGameToBeLoaded();
    void AddPermaAbilitiesToPlayer();
}; // Size: 0x28
#pragma pack(pop)
