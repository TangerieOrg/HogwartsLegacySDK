#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
class UClass;
#pragma pack(push, 1)
class UAblAnimationTagChooser_EnemyCounterAttack : public UAblAnimationTagChooser {
public:
    FGameplayTagContainer CounterTagContainer; // 0x50
    TArray<UClass*> RequiredList; // 0x70
    static UAblAnimationTagChooser_EnemyCounterAttack* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
