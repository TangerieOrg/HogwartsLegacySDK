#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UAblAnimNotify.hpp"
#pragma pack(push, 1)
class UAblSetTagNotify : public UAblAnimNotify {
public:
    FGameplayTag EventTag; // 0x40
    bool AddThisTag; // 0x48
    bool RemoveThisTag; // 0x49
    bool ApplyToAnimationArchitect; // 0x4a
    bool ApplyToInteractionArchitect; // 0x4b
    char pad_4c[0x4];
    static UAblSetTagNotify* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
