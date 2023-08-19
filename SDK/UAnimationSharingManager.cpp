#include "AActor.hpp"
#include "UAnimSharingInstance.hpp"
#include "UAnimationSharingManager.hpp"
#include "UAnimationSharingSetup.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USkeleton.hpp"
UAnimationSharingManager* UAnimationSharingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimationSharing.AnimationSharingManager");
    return (UAnimationSharingManager*)res;
}
void UAnimationSharingManager::RegisterActorWithSkeletonBP(AActor* InActor, USkeleton* SharingSkeleton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP"));
    struct Params_RegisterActorWithSkeletonBP {
        AActor* InActor; // 0x0
        USkeleton* SharingSkeleton; // 0x8
    }; // Size: 0x10
    Params_RegisterActorWithSkeletonBP params{};
    params.InActor = (AActor*)InActor;
    params.SharingSkeleton = (USkeleton*)SharingSkeleton;
    ProcessEvent(func, &params);
}
UAnimationSharingManager* UAnimationSharingManager::GetAnimationSharingManager(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager"));
    struct Params_GetAnimationSharingManager {
        UObject* WorldContextObject; // 0x0
        UAnimationSharingManager* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAnimationSharingManager params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAnimationSharingManager*)params.ReturnValue;
}
bool UAnimationSharingManager::CreateAnimationSharingManager(UObject* WorldContextObject, UAnimationSharingSetup* Setup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager"));
    struct Params_CreateAnimationSharingManager {
        UObject* WorldContextObject; // 0x0
        UAnimationSharingSetup* Setup; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CreateAnimationSharingManager params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Setup = (UAnimationSharingSetup*)Setup;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAnimationSharingManager::AnimationSharingEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled"));
    struct Params_AnimationSharingEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnimationSharingEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
