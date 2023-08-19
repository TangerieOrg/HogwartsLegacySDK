#pragma once
#include <cstdint>
#include "UAISenseConfig.hpp"
class UClass;
class UPlayer_FootfallDataAsset;
#pragma pack(push, 1)
class UAISenseConfig_GameEvent : public UAISenseConfig {
public:
    UClass* Implementation; // 0x48
    UPlayer_FootfallDataAsset* FootfallDataAsset; // 0x50
    static UAISenseConfig_GameEvent* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
