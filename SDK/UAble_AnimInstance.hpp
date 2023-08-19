#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAnimationArchitect_AnimInstance.hpp"
class UAblAnimationModifier;
class UAblAbilityComponent;
#pragma pack(push, 1)
class UAble_AnimInstance : public UAnimationArchitect_AnimInstance {
public:
    char pad_2c0[0x50];
    bool InIdle; // 0x310
    char pad_311[0x7];
    TArray<UAblAnimationModifier*> AnimationModifiers; // 0x318
    FVector DesiredWorldDirection; // 0x328
    FVector LastDesiredWorldDirection; // 0x334
    float DesiredWorldSpeed; // 0x340
    float RateMultiplierOverride; // 0x344
    float FixedYawRemaining; // 0x348
    float FixedYawOffset; // 0x34c
    float FixedYawSampleTime; // 0x350
    char pad_354[0x1a4];
    UAblAbilityComponent* AbleAbilityComponent; // 0x4f8
    char pad_500[0x10];
    static UAble_AnimInstance* StaticClass();
    void Set_LastDesiredWorldDirection(FVector InWorldDirection);
    void Set_FixedYaw(float InFixedYawRemaining, float InFixedYawOffset, float SampleTime);
    void Set_DesiredWorldSpeed(float InSpeed);
    void Set_DesiredWorldDirection(FVector InWorldDirection);
    void Get_LastDesiredWorldDirection(FVector& OutWorldDirection);
    void Get_FixedYawSampleTime(float& OutFixedYawSampleTime);
    void Get_FixedYawRemaining(float& OutFixedYawRemaining);
    void Get_FixedYawOffset(float& OutFixedYawOffset);
    void Get_DesiredWorldSpeed(float& OutSpeed);
    void Get_DesiredWorldDirection(FVector& OutWorldDirection);
}; // Size: 0x510
#pragma pack(pop)
