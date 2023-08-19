#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
class UScheduledEntity;
#pragma pack(push, 1)
class UActor_FromSE : public UActorProvider {
public:
    char pad_38[0x8];
    UScheduledEntity* ScheduledEntity; // 0x40
    static UActor_FromSE* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
