#pragma once
#include <cstdint>
#include "UActor_SpawnFromDOVBase.hpp"
#pragma pack(push, 1)
class UActor_SpawnFromDOVWithName : public UActor_SpawnFromDOVBase {
public:
    FName DOVActorName; // 0x50
    static UActor_SpawnFromDOVWithName* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
