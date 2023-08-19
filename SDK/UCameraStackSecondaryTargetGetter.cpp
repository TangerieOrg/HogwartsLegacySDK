#include "AActor.hpp"
#include "FVector.hpp"
#include "UCameraStack.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
FVector UCameraStackSecondaryTargetGetter::GetTargetLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSecondaryTargetGetter.GetTargetLocation"));
    struct Params_GetTargetLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTargetLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UCameraStackSecondaryTargetGetter::HasValidData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSecondaryTargetGetter.HasValidData"));
    struct Params_HasValidData {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasValidData params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UCameraStackSecondaryTargetGetter* UCameraStackSecondaryTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackSecondaryTargetGetter");
    return (UCameraStackSecondaryTargetGetter*)res;
}
bool UCameraStackSecondaryTargetGetter::IsValid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSecondaryTargetGetter.IsValid"));
    struct Params_IsValid {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsValid params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCameraStackSecondaryTargetGetter::Update(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSecondaryTargetGetter.Update"));
    struct Params_Update {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_Update params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UCameraStackSecondaryTargetGetter::GetTargetBoundingCylinder(FVector& OutCenterLocation, float& OutHalfHeight, float& OutRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSecondaryTargetGetter.GetTargetBoundingCylinder"));
    struct Params_GetTargetBoundingCylinder {
        FVector OutCenterLocation; // 0x0
        float OutHalfHeight; // 0xc
        float OutRadius; // 0x10
    }; // Size: 0x14
    Params_GetTargetBoundingCylinder params{};
    params.OutCenterLocation = (FVector)OutCenterLocation;
    params.OutHalfHeight = (float)OutHalfHeight;
    params.OutRadius = (float)OutRadius;
    ProcessEvent(func, &params);
    OutHalfHeight = params.OutHalfHeight;
    OutCenterLocation = params.OutCenterLocation;
    OutRadius = params.OutRadius;
}
AActor* UCameraStackSecondaryTargetGetter::GetTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSecondaryTargetGetter.GetTargetActor"));
    struct Params_GetTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UCameraStackSecondaryTargetGetter::Activate(UCameraStack* InList) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackSecondaryTargetGetter.Activate"));
    struct Params_Activate {
        UCameraStack* InList; // 0x0
    }; // Size: 0x8
    Params_Activate params{};
    params.InList = (UCameraStack*)InList;
    ProcessEvent(func, &params);
}
