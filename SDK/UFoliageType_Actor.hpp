#pragma once
#include <cstdint>
#include "UFoliageType.hpp"
class UClass;
#pragma pack(push, 1)
class UFoliageType_Actor : public UFoliageType {
public:
    UClass* ActorClass; // 0x3b8
    bool bShouldAttachToBaseComponent; // 0x3c0
    char pad_3c1[0x7];
    static UFoliageType_Actor* StaticClass();
}; // Size: 0x3c8
#pragma pack(pop)
