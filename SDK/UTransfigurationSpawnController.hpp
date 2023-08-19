#pragma once
#include <cstdint>
#include "UTickableWorldSubsystem.hpp"
class UClass;
#pragma pack(push, 1)
class UTransfigurationSpawnController : public UTickableWorldSubsystem {
public:
    char pad_40[0x258];
    UClass* PreviewActorClass; // 0x298
    char pad_2a0[0x8];
    static UTransfigurationSpawnController* StaticClass();
}; // Size: 0x2a8
#pragma pack(pop)
