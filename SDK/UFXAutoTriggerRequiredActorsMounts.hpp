#pragma once
#include <cstdint>
#include "UFXAutoTriggerRequiredActorsBase.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerRequiredActorsMounts : public UFXAutoTriggerRequiredActorsBase {
public:
    bool bExcludeActivePlayerMount; // 0x28
    char pad_29[0x7];
    static UFXAutoTriggerRequiredActorsMounts* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
