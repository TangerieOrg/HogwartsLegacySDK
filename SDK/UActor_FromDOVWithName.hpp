#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_FromDOVWithName : public UActorProvider {
public:
    char pad_38[0x8];
    FName DOVActorName; // 0x40
    FName SpawnGroupName; // 0x48
    static UActor_FromDOVWithName* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
