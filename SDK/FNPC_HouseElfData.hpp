#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FNPC_HouseElfData {
    UClass* HidingAbility; // 0x0
    UClass* SightedAbility; // 0x8
    UClass* FleeAbility; // 0x10
    UClass* BefriendAbility; // 0x18
    float ScaredTime; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
