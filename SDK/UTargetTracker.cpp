#include "AActor.hpp"
#include "ETargetID\Type.hpp"
#include "ETargetType\Type.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeBase.hpp"
UTargetTracker* UTargetTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TargetTracker");
    return (UTargetTracker*)res;
}
void UTargetTracker::RemoveTargetByPtr(ETargetID::Type InTargetID, UTargetTypeBase* InTargetToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.RemoveTargetByPtr"));
    struct Params_RemoveTargetByPtr {
        ETargetID::Type InTargetID; // 0x0
        char pad_1[0x7];
        UTargetTypeBase* InTargetToRemove; // 0x8
    }; // Size: 0x10
    Params_RemoveTargetByPtr params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    params.InTargetToRemove = (UTargetTypeBase*)InTargetToRemove;
    ProcessEvent(func, &params);
}
void UTargetTracker::RemoveTarget(ETargetID::Type InTargetID, bool bCheckForEmptyList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.RemoveTarget"));
    struct Params_RemoveTarget {
        ETargetID::Type InTargetID; // 0x0
        bool bCheckForEmptyList; // 0x1
    }; // Size: 0x2
    Params_RemoveTarget params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    params.bCheckForEmptyList = (bool)bCheckForEmptyList;
    ProcessEvent(func, &params);
}
FVector UTargetTracker::GetTargetLocation(ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.GetTargetLocation"));
    struct Params_GetTargetLocation {
        ETargetID::Type InTargetID; // 0x0
        char pad_1[0x3];
        FVector ReturnValue; // 0x4
    }; // Size: 0x10
    Params_GetTargetLocation params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UTargetTracker::IsTargetListEmptyThisFrame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.IsTargetListEmptyThisFrame"));
    struct Params_IsTargetListEmptyThisFrame {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTargetListEmptyThisFrame params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTargetTracker::GetTargets() {}
AActor* UTargetTracker::GetTargetActor(ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.GetTargetActor"));
    struct Params_GetTargetActor {
        ETargetID::Type InTargetID; // 0x0
        char pad_1[0x7];
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTargetActor params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::AddTarget_Location(FVector InTargetLocation, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AddTarget_Location"));
    struct Params_AddTarget_Location {
        FVector InTargetLocation; // 0x0
        ETargetID::Type InTargetID; // 0xc
        char pad_d[0x3];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_Location params{};
    params.InTargetLocation = (FVector)InTargetLocation;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::GetTargetByID(ETargetID::Type InTargetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.GetTargetByID"));
    struct Params_GetTargetByID {
        ETargetID::Type InTargetType; // 0x0
        char pad_1[0x7];
        UTargetTypeBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetTargetByID params{};
    params.InTargetType = (ETargetID::Type)InTargetType;
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
bool UTargetTracker::AnyValidTargetsByType(ETargetType::Type InTargetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AnyValidTargetsByType"));
    struct Params_AnyValidTargetsByType {
        ETargetType::Type InTargetType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_AnyValidTargetsByType params{};
    params.InTargetType = (ETargetType::Type)InTargetType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UTargetTracker::GetComputedPriority(ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.GetComputedPriority"));
    struct Params_GetComputedPriority {
        ETargetID::Type InTargetID; // 0x0
        char pad_1[0x3];
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetComputedPriority params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
ETargetID::Type UTargetTracker::GetBestTargetID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.GetBestTargetID"));
    struct Params_GetBestTargetID {
        ETargetID::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetBestTargetID params{};
    ProcessEvent(func, &params);
    return (ETargetID::Type)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::AddTarget_CameraDirection(ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AddTarget_CameraDirection"));
    struct Params_AddTarget_CameraDirection {
        ETargetID::Type InTargetID; // 0x0
        char pad_1[0x7];
        UTargetTypeBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddTarget_CameraDirection params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::GetBestTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.GetBestTarget"));
    struct Params_GetBestTarget {
        UTargetTypeBase* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBestTarget params{};
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
FVector UTargetTracker::ComputeTargetLocation(FVector ProjectFromLocation, float ProjectDistance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.ComputeTargetLocation"));
    struct Params_ComputeTargetLocation {
        FVector ProjectFromLocation; // 0x0
        float ProjectDistance; // 0xc
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_ComputeTargetLocation params{};
    params.ProjectFromLocation = (FVector)ProjectFromLocation;
    params.ProjectDistance = (float)ProjectDistance;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UTargetTracker::ComputeDirectionToTargetOfType(FVector SourceLocation, ETargetID::Type InTargetID, bool bFlattenInXYPlane, bool bNormalize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.ComputeDirectionToTargetOfType"));
    struct Params_ComputeDirectionToTargetOfType {
        FVector SourceLocation; // 0x0
        ETargetID::Type InTargetID; // 0xc
        bool bFlattenInXYPlane; // 0xd
        bool bNormalize; // 0xe
        char pad_f[0x1];
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_ComputeDirectionToTargetOfType params{};
    params.SourceLocation = (FVector)SourceLocation;
    params.InTargetID = (ETargetID::Type)InTargetID;
    params.bFlattenInXYPlane = (bool)bFlattenInXYPlane;
    params.bNormalize = (bool)bNormalize;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UTargetTracker::ComputeDirection(FVector SourceLocation, bool bFlattenInXYPlane, bool bNormalize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.ComputeDirection"));
    struct Params_ComputeDirection {
        FVector SourceLocation; // 0x0
        bool bFlattenInXYPlane; // 0xc
        bool bNormalize; // 0xd
        char pad_e[0x2];
        FVector ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_ComputeDirection params{};
    params.SourceLocation = (FVector)SourceLocation;
    params.bFlattenInXYPlane = (bool)bFlattenInXYPlane;
    params.bNormalize = (bool)bNormalize;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UTargetTracker::ComputeCameraDirection(AActor* InActor, bool bFlattenInXYPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.ComputeCameraDirection"));
    struct Params_ComputeCameraDirection {
        AActor* InActor; // 0x0
        bool bFlattenInXYPlane; // 0x8
        char pad_9[0x3];
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_ComputeCameraDirection params{};
    params.InActor = (AActor*)InActor;
    params.bFlattenInXYPlane = (bool)bFlattenInXYPlane;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UTargetTracker::AnyValidTargetsByID(ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AnyValidTargetsByID"));
    struct Params_AnyValidTargetsByID {
        ETargetID::Type InTargetID; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_AnyValidTargetsByID params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UTargetTracker::AnyValidTargets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AnyValidTargets"));
    struct Params_AnyValidTargets {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AnyValidTargets params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::AddTarget_StaticWorldDirection(FVector InStaticWorldDirection, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AddTarget_StaticWorldDirection"));
    struct Params_AddTarget_StaticWorldDirection {
        FVector InStaticWorldDirection; // 0x0
        ETargetID::Type InTargetID; // 0xc
        char pad_d[0x3];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_StaticWorldDirection params{};
    params.InStaticWorldDirection = (FVector)InStaticWorldDirection;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::AddTarget_DesiredDirection(ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AddTarget_DesiredDirection"));
    struct Params_AddTarget_DesiredDirection {
        ETargetID::Type InTargetID; // 0x0
        char pad_1[0x7];
        UTargetTypeBase* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_AddTarget_DesiredDirection params{};
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::AddTarget_Custom(UClass* TargetClass, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AddTarget_Custom"));
    struct Params_AddTarget_Custom {
        UClass* TargetClass; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_Custom params{};
    params.TargetClass = (UClass*)TargetClass;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::AddTarget_ActorWithOffset(AActor* InTargetActor, FVector& InTargetOffset, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AddTarget_ActorWithOffset"));
    struct Params_AddTarget_ActorWithOffset {
        AActor* InTargetActor; // 0x0
        FVector InTargetOffset; // 0x8
        ETargetID::Type InTargetID; // 0x14
        char pad_15[0x3];
        UTargetTypeBase* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddTarget_ActorWithOffset params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InTargetOffset = (FVector)InTargetOffset;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    InTargetOffset = params.InTargetOffset;
    return (UTargetTypeBase*)params.ReturnValue;
}
UTargetTypeBase* UTargetTracker::AddTarget_Actor(AActor* InTargetActor, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTracker.AddTarget_Actor"));
    struct Params_AddTarget_Actor {
        AActor* InTargetActor; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_Actor params{};
    params.InTargetActor = (AActor*)InTargetActor;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
