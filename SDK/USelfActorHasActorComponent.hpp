#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
class UClass;
#pragma pack(push, 1)
class USelfActorHasActorComponent : public UQualifierConsideration {
public:
    UClass* ActorComponentClass; // 0x28
    bool bInverseResult; // 0x30
    char pad_31[0x7];
    static USelfActorHasActorComponent* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
