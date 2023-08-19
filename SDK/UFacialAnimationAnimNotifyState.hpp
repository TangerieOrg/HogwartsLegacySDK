#pragma once
#include <cstdint>
#include "EManagedFacialAnimationPriority.hpp"
#include "FFacialAnimation.hpp"
#include "UAnimNotifyState.hpp"
#pragma pack(push, 1)
class UFacialAnimationAnimNotifyState : public UAnimNotifyState {
public:
    FFacialAnimation FacialAnimation; // 0x30
    EManagedFacialAnimationPriority FacialAnimationPriority; // 0x60
    char pad_61[0x57];
    static UFacialAnimationAnimNotifyState* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
