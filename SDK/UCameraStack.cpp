#include "ACameraStackActor.hpp"
#include "ECameraStackBehaviorSorting.hpp"
#include "FCameraStackData.hpp"
#include "FOptionalTriplet.hpp"
#include "UCameraStack.hpp"
#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorCore.hpp"
#include "UCameraStackBehaviorMultiBehaviorBlend.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UCameraStack::InsertBeforeBehavior(UCameraStackBehavior* InBehavior, UCameraStackBehavior* InBeforeBehavior, float InBlendInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.InsertBeforeBehavior"));
    struct Params_InsertBeforeBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        UCameraStackBehavior* InBeforeBehavior; // 0x8
        float InBlendInDuration; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_InsertBeforeBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    params.InBeforeBehavior = (UCameraStackBehavior*)InBeforeBehavior;
    params.InBlendInDuration = (float)InBlendInDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCameraStackBehavior* UCameraStack::GetTopmostBehavior() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetTopmostBehavior"));
    struct Params_GetTopmostBehavior {
        UCameraStackBehavior* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTopmostBehavior params{};
    ProcessEvent(func, &params);
    return (UCameraStackBehavior*)params.ReturnValue;
}
bool UCameraStack::ResetBehaviors(UCameraStackBehaviorCore* InBehavior) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.ResetBehaviors"));
    struct Params_ResetBehaviors {
        UCameraStackBehaviorCore* InBehavior; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ResetBehaviors params{};
    params.InBehavior = (UCameraStackBehaviorCore*)InBehavior;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCameraStack* UCameraStack::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStack");
    return (UCameraStack*)res;
}
bool UCameraStack::AddBehavior(UCameraStackBehavior* InBehavior, float InBlendInDuration, bool bInSkipFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.AddBehavior"));
    struct Params_AddBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        float InBlendInDuration; // 0x8
        bool bInSkipFlags; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_AddBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    params.InBlendInDuration = (float)InBlendInDuration;
    params.bInSkipFlags = (bool)bInSkipFlags;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStack::UnpauseBehavior(UCameraStackBehavior* InBehavior) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.UnpauseBehavior"));
    struct Params_UnpauseBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_UnpauseBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStack::EnableBehavior(UCameraStackBehavior* InBehavior, float InBlendInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.EnableBehavior"));
    struct Params_EnableBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        float InBlendInDuration; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_EnableBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    params.InBlendInDuration = (float)InBlendInDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStack::ReplaceCoreBehavior(UCameraStackBehaviorCore* InBehavior, float InBlendOutDuration, float InBlendInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.ReplaceCoreBehavior"));
    struct Params_ReplaceCoreBehavior {
        UCameraStackBehaviorCore* InBehavior; // 0x0
        float InBlendOutDuration; // 0x8
        float InBlendInDuration; // 0xc
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ReplaceCoreBehavior params{};
    params.InBehavior = (UCameraStackBehaviorCore*)InBehavior;
    params.InBlendOutDuration = (float)InBlendOutDuration;
    params.InBlendInDuration = (float)InBlendInDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStack::ReplaceBehavior(UCameraStackBehavior* InBehavior, UCameraStackBehavior* InPredecessorBehavior, float InBlendOutDuration, float InBlendInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.ReplaceBehavior"));
    struct Params_ReplaceBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        UCameraStackBehavior* InPredecessorBehavior; // 0x8
        float InBlendOutDuration; // 0x10
        float InBlendInDuration; // 0x14
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_ReplaceBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    params.InPredecessorBehavior = (UCameraStackBehavior*)InPredecessorBehavior;
    params.InBlendOutDuration = (float)InBlendOutDuration;
    params.InBlendInDuration = (float)InBlendInDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStack::RemoveBehavior(UCameraStackBehavior* InBehavior, float InBlendOutDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.RemoveBehavior"));
    struct Params_RemoveBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        float InBlendOutDuration; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_RemoveBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    params.InBlendOutDuration = (float)InBlendOutDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStack::PauseBehavior(UCameraStackBehavior* InBehavior) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.PauseBehavior"));
    struct Params_PauseBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PauseBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ACameraStackActor* UCameraStack::GetOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetOwner"));
    struct Params_GetOwner {
        ACameraStackActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwner params{};
    ProcessEvent(func, &params);
    return (ACameraStackActor*)params.ReturnValue;
}
bool UCameraStack::InsertAfterBehavior(UCameraStackBehavior* InBehavior, UCameraStackBehavior* InAfterBehavior, float InBlendInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.InsertAfterBehavior"));
    struct Params_InsertAfterBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        UCameraStackBehavior* InAfterBehavior; // 0x8
        float InBlendInDuration; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_InsertAfterBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    params.InAfterBehavior = (UCameraStackBehavior*)InAfterBehavior;
    params.InBlendInDuration = (float)InBlendInDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCameraStack::GetRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetRotationLimits"));
    struct Params_GetRotationLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetRotationLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStack::GetFocusDistanceLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetFocusDistanceLimits"));
    struct Params_GetFocusDistanceLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetFocusDistanceLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStack::GetFieldOfViewLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetFieldOfViewLimits"));
    struct Params_GetFieldOfViewLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetFieldOfViewLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
UCameraStackBehaviorCore* UCameraStack::GetCoreBehavior() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetCoreBehavior"));
    struct Params_GetCoreBehavior {
        UCameraStackBehaviorCore* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCoreBehavior params{};
    ProcessEvent(func, &params);
    return (UCameraStackBehaviorCore*)params.ReturnValue;
}
bool UCameraStack::GetCameraSpaceTranslationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetCameraSpaceTranslationLimits"));
    struct Params_GetCameraSpaceTranslationLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetCameraSpaceTranslationLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStack::GetCameraSpaceRotationLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetCameraSpaceRotationLimits"));
    struct Params_GetCameraSpaceRotationLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetCameraSpaceRotationLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
UCameraStackBehavior* UCameraStack::GetBehaviourWithType(UClass* InType, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetBehaviourWithType"));
    struct Params_GetBehaviourWithType {
        UClass* InType; // 0x0
        ECameraStackBehaviorSorting InSorting; // 0x8
        char pad_9[0x3];
        int32_t FilterFlags; // 0xc
        UCameraStackBehavior* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetBehaviourWithType params{};
    params.InType = (UClass*)InType;
    params.InSorting = (ECameraStackBehaviorSorting)InSorting;
    params.FilterFlags = (int32_t)FilterFlags;
    ProcessEvent(func, &params);
    return (UCameraStackBehavior*)params.ReturnValue;
}
UCameraStackBehavior* UCameraStack::GetBehaviorWithTypes(TArray<UClass*>& InTypes, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetBehaviorWithTypes"));
    struct Params_GetBehaviorWithTypes {
        TArray<UClass*> InTypes; // 0x0
        ECameraStackBehaviorSorting InSorting; // 0x10
        char pad_11[0x3];
        int32_t FilterFlags; // 0x14
        UCameraStackBehavior* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetBehaviorWithTypes params{};
    params.InTypes = (TArray<UClass*>)InTypes;
    params.InSorting = (ECameraStackBehaviorSorting)InSorting;
    params.FilterFlags = (int32_t)FilterFlags;
    ProcessEvent(func, &params);
    InTypes = params.InTypes;
    return (UCameraStackBehavior*)params.ReturnValue;
}
TArray<UCameraStackBehavior*> UCameraStack::GetBehaviorsWithTypes(TArray<UClass*>& InTypes, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetBehaviorsWithTypes"));
    struct Params_GetBehaviorsWithTypes {
        TArray<UClass*> InTypes; // 0x0
        ECameraStackBehaviorSorting InSorting; // 0x10
        char pad_11[0x3];
        int32_t FilterFlags; // 0x14
        TArray<UCameraStackBehavior*> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetBehaviorsWithTypes params{};
    params.InTypes = (TArray<UClass*>)InTypes;
    params.InSorting = (ECameraStackBehaviorSorting)InSorting;
    params.FilterFlags = (int32_t)FilterFlags;
    ProcessEvent(func, &params);
    InTypes = params.InTypes;
    return (TArray<UCameraStackBehavior*>)params.ReturnValue;
}
TArray<UCameraStackBehavior*> UCameraStack::GetBehaviorsWithType(UClass* InType, ECameraStackBehaviorSorting InSorting, int32_t FilterFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetBehaviorsWithType"));
    struct Params_GetBehaviorsWithType {
        UClass* InType; // 0x0
        ECameraStackBehaviorSorting InSorting; // 0x8
        char pad_9[0x3];
        int32_t FilterFlags; // 0xc
        TArray<UCameraStackBehavior*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetBehaviorsWithType params{};
    params.InType = (UClass*)InType;
    params.InSorting = (ECameraStackBehaviorSorting)InSorting;
    params.FilterFlags = (int32_t)FilterFlags;
    ProcessEvent(func, &params);
    return (TArray<UCameraStackBehavior*>)params.ReturnValue;
}
bool UCameraStack::GetArmOriginLimits(FOptionalTriplet& OutMin, FOptionalTriplet& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetArmOriginLimits"));
    struct Params_GetArmOriginLimits {
        FOptionalTriplet OutMin; // 0x0
        FOptionalTriplet OutMax; // 0x18
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_GetArmOriginLimits params{};
    params.OutMin = (FOptionalTriplet)OutMin;
    params.OutMax = (FOptionalTriplet)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStack::GetArmLengthLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetArmLengthLimits"));
    struct Params_GetArmLengthLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetArmLengthLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStack::GetApertureLimits(float& OutMin, float& OutMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.GetApertureLimits"));
    struct Params_GetApertureLimits {
        float OutMin; // 0x0
        float OutMax; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetApertureLimits params{};
    params.OutMin = (float)OutMin;
    params.OutMax = (float)OutMax;
    ProcessEvent(func, &params);
    OutMin = params.OutMin;
    OutMax = params.OutMax;
    return (bool)params.ReturnValue;
}
bool UCameraStack::DisableBehavior(UCameraStackBehavior* InBehavior, float InBlendOutDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.DisableBehavior"));
    struct Params_DisableBehavior {
        UCameraStackBehavior* InBehavior; // 0x0
        float InBlendOutDuration; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_DisableBehavior params{};
    params.InBehavior = (UCameraStackBehavior*)InBehavior;
    params.InBlendOutDuration = (float)InBlendOutDuration;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCameraStackBehavior* UCameraStack::CreateNonCoreBehavior(UClass* BehaviorClass, UObject* Template) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.CreateNonCoreBehavior"));
    struct Params_CreateNonCoreBehavior {
        UClass* BehaviorClass; // 0x0
        UObject* Template; // 0x8
        UCameraStackBehavior* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateNonCoreBehavior params{};
    params.BehaviorClass = (UClass*)BehaviorClass;
    params.Template = (UObject*)Template;
    ProcessEvent(func, &params);
    return (UCameraStackBehavior*)params.ReturnValue;
}
UCameraStackBehaviorCore* UCameraStack::CreateCoreBehavior(UClass* BehaviorClass, UObject* Template) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.CreateCoreBehavior"));
    struct Params_CreateCoreBehavior {
        UClass* BehaviorClass; // 0x0
        UObject* Template; // 0x8
        UCameraStackBehaviorCore* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateCoreBehavior params{};
    params.BehaviorClass = (UClass*)BehaviorClass;
    params.Template = (UObject*)Template;
    ProcessEvent(func, &params);
    return (UCameraStackBehaviorCore*)params.ReturnValue;
}
bool UCameraStack::ContainsBehaviorWithType(UClass*& InType, int32_t FilterFlags) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.ContainsBehaviorWithType"));
    struct Params_ContainsBehaviorWithType {
        UClass* InType; // 0x0
        int32_t FilterFlags; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_ContainsBehaviorWithType params{};
    params.InType = (UClass*)InType;
    params.FilterFlags = (int32_t)FilterFlags;
    ProcessEvent(func, &params);
    InType = params.InType;
    return (bool)params.ReturnValue;
}
UCameraStackBehaviorMultiBehaviorBlend* UCameraStack::AddStackBehaviors(FCameraStackData& InStackData, float InBlendInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStack.AddStackBehaviors"));
    struct Params_AddStackBehaviors {
        FCameraStackData InStackData; // 0x0
        float InBlendInDuration; // 0x18
        char pad_1c[0x4];
        UCameraStackBehaviorMultiBehaviorBlend* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_AddStackBehaviors params{};
    params.InStackData = (FCameraStackData)InStackData;
    params.InBlendInDuration = (float)InBlendInDuration;
    ProcessEvent(func, &params);
    InStackData = params.InStackData;
    return (UCameraStackBehaviorMultiBehaviorBlend*)params.ReturnValue;
}
