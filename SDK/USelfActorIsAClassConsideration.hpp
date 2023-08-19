#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
class UClass;
#pragma pack(push, 1)
class USelfActorIsAClassConsideration : public UQualifierConsideration {
public:
    UClass* ActorClass; // 0x28
    static USelfActorIsAClassConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
