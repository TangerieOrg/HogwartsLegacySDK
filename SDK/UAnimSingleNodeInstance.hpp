#pragma once
#include <cstdint>
#include "UAnimInstance.hpp"
class UAnimationAsset;
struct FVector;
#pragma pack(push, 1)
class UAnimSingleNodeInstance : public UAnimInstance {
public:
    char pad_2c0[0x10];
    static UAnimSingleNodeInstance* StaticClass();
    void StopAnim();
    void SetReverse(bool bInReverse);
    void SetPreviewCurveOverride(FName& PoseName, float Value, bool bRemoveIfZero);
    void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);
    void SetPosition(float InPosition, bool bFireNotifies);
    void SetPlayRate(float InPlayRate);
    void SetPlaying(bool bIsPlaying);
    void SetLooping(bool bIsLooping);
    void SetBlendSpaceInput(FVector& InBlendInput);
    void SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);
    void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);
    float GetLength();
    UAnimationAsset* GetAnimationAsset();
}; // Size: 0x2d0
#pragma pack(pop)
