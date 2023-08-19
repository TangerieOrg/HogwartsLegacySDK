#include "FPhysicalAnimationData.hpp"
#include "FTransform.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UPhysicalAnimationComponent.hpp"
#include "USkeletalMeshComponent.hpp"
void UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow(FName BodyName, FName ProfileName, bool bIncludeSelf, bool bClearNotFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationProfileBelow"));
    struct Params_ApplyPhysicalAnimationProfileBelow {
        FName BodyName; // 0x0
        FName ProfileName; // 0x8
        bool bIncludeSelf; // 0x10
        bool bClearNotFound; // 0x11
    }; // Size: 0x12
    Params_ApplyPhysicalAnimationProfileBelow params{};
    params.BodyName = (FName)BodyName;
    params.ProfileName = (FName)ProfileName;
    params.bIncludeSelf = (bool)bIncludeSelf;
    params.bClearNotFound = (bool)bClearNotFound;
    ProcessEvent(func, &params);
}
void UPhysicalAnimationComponent::SetStrengthMultiplyer(float InStrengthMultiplyer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicalAnimationComponent.SetStrengthMultiplyer"));
    struct Params_SetStrengthMultiplyer {
        float InStrengthMultiplyer; // 0x0
    }; // Size: 0x4
    Params_SetStrengthMultiplyer params{};
    params.InStrengthMultiplyer = (float)InStrengthMultiplyer;
    ProcessEvent(func, &params);
}
UPhysicalAnimationComponent* UPhysicalAnimationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicalAnimationComponent");
    return (UPhysicalAnimationComponent*)res;
}
void UPhysicalAnimationComponent::SetSkeletalMeshComponent(USkeletalMeshComponent* InSkeletalMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicalAnimationComponent.SetSkeletalMeshComponent"));
    struct Params_SetSkeletalMeshComponent {
        USkeletalMeshComponent* InSkeletalMeshComponent; // 0x0
    }; // Size: 0x8
    Params_SetSkeletalMeshComponent params{};
    params.InSkeletalMeshComponent = (USkeletalMeshComponent*)InSkeletalMeshComponent;
    ProcessEvent(func, &params);
}
FTransform UPhysicalAnimationComponent::GetBodyTargetTransform(FName BodyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicalAnimationComponent.GetBodyTargetTransform"));
    struct Params_GetBodyTargetTransform {
        FName BodyName; // 0x0
        char pad_8[0x8];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetBodyTargetTransform params{};
    params.BodyName = (FName)BodyName;
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettings(FName BodyName, FPhysicalAnimationData& PhysicalAnimationData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettings"));
    struct Params_ApplyPhysicalAnimationSettings {
        FName BodyName; // 0x0
        FPhysicalAnimationData PhysicalAnimationData; // 0x8
    }; // Size: 0x2c
    Params_ApplyPhysicalAnimationSettings params{};
    params.BodyName = (FName)BodyName;
    params.PhysicalAnimationData = (FPhysicalAnimationData)PhysicalAnimationData;
    ProcessEvent(func, &params);
    PhysicalAnimationData = params.PhysicalAnimationData;
}
void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow(FName BodyName, FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicalAnimationComponent.ApplyPhysicalAnimationSettingsBelow"));
    struct Params_ApplyPhysicalAnimationSettingsBelow {
        FName BodyName; // 0x0
        FPhysicalAnimationData PhysicalAnimationData; // 0x8
        bool bIncludeSelf; // 0x2c
    }; // Size: 0x2d
    Params_ApplyPhysicalAnimationSettingsBelow params{};
    params.BodyName = (FName)BodyName;
    params.PhysicalAnimationData = (FPhysicalAnimationData)PhysicalAnimationData;
    params.bIncludeSelf = (bool)bIncludeSelf;
    ProcessEvent(func, &params);
    PhysicalAnimationData = params.PhysicalAnimationData;
}
