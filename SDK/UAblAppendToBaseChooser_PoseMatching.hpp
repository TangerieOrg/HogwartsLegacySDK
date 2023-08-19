#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#pragma pack(push, 1)
class UAblAppendToBaseChooser_PoseMatching : public UAblAnimationTagChooser_AppendToBaseChooser {
public:
    TArray<FGameplayTagContainer> AnimationArchitectTags; // 0x28
    static UAblAppendToBaseChooser_PoseMatching* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
