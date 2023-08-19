#pragma once
#include <cstdint>
#include "FAnimationTrack.hpp"
#include "USceneRigObjectActionState.hpp"
class UAnimationComponent;
#pragma pack(push, 1)
class USceneActionState_Animation : public USceneRigObjectActionState {
public:
    char pad_70[0x40];
    FAnimationTrack AnimationTrack; // 0xb0
    char pad_280[0x8];
    float MaxWeight; // 0x288
    float BlendInTime; // 0x28c
    float BlendOutTime; // 0x290
    float CurrentBlendWeight; // 0x294
    bool CurrentlyInBlendInTime; // 0x298
    bool CurrentlyInBlendOutTime; // 0x299
    bool ShouldBeRegistered; // 0x29a
    char pad_29b[0x5];
    UAnimationComponent* AnimationComponent; // 0x2a0
    char pad_2a8[0x8];
    static USceneActionState_Animation* StaticClass();
}; // Size: 0x2b0
#pragma pack(pop)
