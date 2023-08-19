#pragma once
#include <cstdint>
#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimNotifyState.hpp"
#pragma pack(push, 1)
class UFacialEmotionAnimNotifyState : public UAnimNotifyState {
public:
    EFacialEmotion FacialEmotion; // 0x30
    char pad_31[0x3];
    float TransitionTime; // 0x34
    EManagedFacialEmotionPriority FacialEmotionPriority; // 0x38
    char pad_39[0x7];
    FGameplayTagContainer AnimTags; // 0x40
    char pad_60[0x50];
    static UFacialEmotionAnimNotifyState* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
