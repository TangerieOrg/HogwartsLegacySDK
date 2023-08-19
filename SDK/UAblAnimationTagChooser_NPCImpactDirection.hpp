#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAnimationTagChooser.hpp"
#pragma pack(push, 1)
class UAblAnimationTagChooser_NPCImpactDirection : public UAblAnimationTagChooser {
public:
    FGameplayTag ReactionAnimationTag; // 0x50
    FGameplayTag ReactFrontTag; // 0x58
    FGameplayTag ReactBackTag; // 0x60
    FGameplayTag ReactRightTag; // 0x68
    FGameplayTag ReactLeftTag; // 0x70
    FGameplayTag ReactUpTag; // 0x78
    FGameplayTag ReactDownTag; // 0x80
    static UAblAnimationTagChooser_NPCImpactDirection* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
