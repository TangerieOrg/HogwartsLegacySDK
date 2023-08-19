#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsMatchBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorMatchHasComponent : public UFXAutoTriggerRequiredActorsMatchBase {
public:
    char pad_28[0x28];
    static UFXAutoTriggerRequiredActorMatchHasComponent* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
