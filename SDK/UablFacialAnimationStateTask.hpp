#pragma once
#include <cstdint>
#include "EManagedFacialAnimationPriority.hpp"
#include "FFacialAnimation.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablFacialAnimationStateTask : public UAblAbilityTask {
public:
    FFacialAnimation FacialAnimation; // 0x70
    EManagedFacialAnimationPriority FacialAnimationPriority; // 0xa0
    char pad_a1[0x7];
    static UablFacialAnimationStateTask* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
