#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWorld;
class UWorldSupportLevel;
class ULocalPlayer;
#pragma pack(push, 1)
class UWorldSupportWorld : public UObject {
public:
    UWorld* World; // 0x28
    char pad_30[0xb0];
    TArray<UWorldSupportLevel*> Levels; // 0xe0
    char pad_f0[0x8];
    ULocalPlayer* LocalPlayer; // 0xf8
    char pad_100[0x8];
    static UWorldSupportWorld* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
