#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfActorHasActorTagConsideration : public UQualifierConsideration {
public:
    FName TagName; // 0x28
    static USelfActorHasActorTagConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
