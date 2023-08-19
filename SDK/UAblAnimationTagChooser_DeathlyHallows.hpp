#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_DeathlyHallows : public UAblAnimationTagChooser {
public:
    FGameplayTagContainer BaseTags; // 0x50
    FGameplayTag LeftFootTag; // 0x70
    FGameplayTag RightFootTag; // 0x78
    FGameplayTag StoneTag; // 0x80
    FGameplayTag WandTag; // 0x88
    FGameplayTag CloakTag; // 0x90
    static UAblAnimationTagChooser_DeathlyHallows* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
