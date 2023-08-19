#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
class UClass;
#pragma pack(push, 1)
class UActor_MountCreature : public UActorProvider {
public:
    char pad_38[0x8];
    UClass* MountHandlerClass; // 0x40
    static UActor_MountCreature* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
