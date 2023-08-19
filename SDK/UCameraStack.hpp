#pragma once
#include <cstdint>
#include "ECameraStackBehaviorSorting.hpp"
#include "UObject.hpp"
class UCameraStackBehavior;
class UCameraStackBehaviorCore;
class ACameraStackActor;
struct FOptionalTriplet;
class UCameraStackBehaviorMultiBehaviorBlend;
class UClass;
struct FCameraStackData;
#pragma pack(push, 1)
class UCameraStack : public UObject {
public:
    TArray<UCameraStackBehavior*> Behaviors; // 0x28
    char pad_38[0x190];
    static UCameraStack* StaticClass();
    bool UnpauseBehavior(UCameraStackBehavior* InBehavior);
    bool ResetBehaviors(UCameraStackBehaviorCore* InBehavior);
    bool ReplaceCoreBehavior(UCameraStackBehaviorCore* InBehavior, float InBlendOutDuration, float InBlendInDuration);
    bool ReplaceBehavior(UCameraStackBehavior* InBehavior, UCameraStackBehavior* InPredecessorBehavior, float InBlendOutDuration, float InBlendInDuration);
    bool RemoveBehavior(UCameraStackBehavior* InBehavior, float InBlendOutDuration);
    bool PauseBehavior(UCameraStackBehavior* InBehavior);
    bool InsertBeforeBehavior(UCameraStackBehavior* InBehavior, UCameraStackBehavior* InBeforeBehavior, float InBlendInDuration);
    bool InsertAfterBehavior(UCameraStackBehavior* InBehavior, UCameraStackBehavior* InAfterBehavior, float InBlendInDuration);
    UCameraStackBehavior* GetTopmostBehavior();
    bool GetRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    ACameraStackActor* GetOwner();
    bool GetFocusDistanceLimits(float& OutMin, float& OutMax);
    bool GetFieldOfViewLimits(float& OutMin, float& OutMax);
    UCameraStackBehaviorCore* GetCoreBehavior();
    bool GetCameraSpaceTranslationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    bool GetCameraSpaceRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    UCameraStackBehavior* GetBehaviourWithType(UClass* InType, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags);
    UCameraStackBehavior* GetBehaviorWithTypes(TArray<UClass*>& InTypes, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags);
    TArray<UCameraStackBehavior*> GetBehaviorsWithTypes(TArray<UClass*>& InTypes, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags);
    TArray<UCameraStackBehavior*> GetBehaviorsWithType(UClass* InType, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags);
    bool GetArmOriginLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax);
    bool GetArmLengthLimits(float& OutMin, float& OutMax);
    bool GetApertureLimits(float& OutMin, float& OutMax);
    bool EnableBehavior(UCameraStackBehavior* InBehavior, float InBlendInDuration);
    bool DisableBehavior(UCameraStackBehavior* InBehavior, float InBlendOutDuration);
    UCameraStackBehavior* CreateNonCoreBehavior(UClass* BehaviorClass, UObject* Template);
    UCameraStackBehaviorCore* CreateCoreBehavior(UClass* BehaviorClass, UObject* Template);
    bool ContainsBehaviorWithType(UClass*& InType, int32_t FilterFlags);
    UCameraStackBehaviorMultiBehaviorBlend* AddStackBehaviors(FCameraStackData& InStackData, float InBlendInDuration);
    bool AddBehavior(UCameraStackBehavior* InBehavior, float InBlendInDuration, bool bInSkipFlags);
}; // Size: 0x1c8
#pragma pack(pop)
