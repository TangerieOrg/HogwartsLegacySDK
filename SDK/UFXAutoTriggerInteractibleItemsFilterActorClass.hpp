#pragma once
#include <cstdint>
#include "UFXAutoTriggerInteractibleItemsFilter.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerInteractibleItemsFilterActorClass : public UFXAutoTriggerInteractibleItemsFilter {
public:
    TArray<void*> OfActorTypes; // 0x28
    bool bIncludeSubclasses; // 0x38
    char pad_39[0x7];
    static UFXAutoTriggerInteractibleItemsFilterActorClass* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
