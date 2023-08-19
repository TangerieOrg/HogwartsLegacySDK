#pragma once
#include <cstdint>
#include "UBTTask_PlayAbilityBase.hpp"
class UClass;
#pragma pack(push, 1)
class UBTTask_PlayAbility : public UBTTask_PlayAbilityBase {
public:
    UClass* Ability; // 0xc0
    static UBTTask_PlayAbility* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
