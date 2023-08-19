#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_IdleBreak : public UAblAnimationTagChooser {
public:
    FGameplayTagContainer BaseTags; // 0x50
    bool bFootMatch; // 0x70
    char pad_71[0x3];
    FGameplayTag LeftFootTag; // 0x74
    FGameplayTag RightFootTag; // 0x7c
    bool bIndoorOutdoorMatch; // 0x84
    char pad_85[0x3];
    FGameplayTag OutdoorsTag; // 0x88
    FGameplayTag IndoorsTag; // 0x90
    static UAblAnimationTagChooser_IdleBreak* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
