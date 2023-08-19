#pragma once
#include <cstdint>
#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablFacialEmotionStateTask : public UAblAbilityTask {
public:
    EFacialEmotion FacialEmotion; // 0x70
    EManagedFacialEmotionPriority FacialEmotionPriority; // 0x71
    char pad_72[0x2];
    float TransitionTime; // 0x74
    FGameplayTagContainer AnimTags; // 0x78
    static UablFacialEmotionStateTask* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
