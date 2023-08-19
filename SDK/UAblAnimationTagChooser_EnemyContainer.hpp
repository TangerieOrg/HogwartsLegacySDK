#pragma once
#include <cstdint>
#include "EEnemy_TagContainer.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_EnemyContainer : public UAblAnimationTagChooser {
public:
    EEnemy_TagContainer ContainerSource; // 0x50
    char pad_51[0x7];
    FGameplayTagContainer AttackTagContainer; // 0x58
    bool bAddWeaponTags; // 0x78
    bool bAddWeaponsTagsIfMatchAttackType; // 0x79
    char pad_7a[0x6];
    FGameplayTagContainer WeaponTagsAttackTagContainer; // 0x80
    bool bAddDirectionalTags; // 0xa0
    bool bAddDirectionalTagsIfMatchAttackType; // 0xa1
    char pad_a2[0x6];
    FGameplayTagContainer DirectionalTagsAttackTagContainer; // 0xa8
    static UAblAnimationTagChooser_EnemyContainer* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
