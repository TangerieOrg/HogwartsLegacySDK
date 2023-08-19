#include "AActor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UTargetTypeActor.hpp"
#include "UTargetTypeBase.hpp"
FName UTargetTypeActor::GetSocketName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeActor.GetSocketName"));
    struct Params_GetSocketName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSocketName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UTargetTypeActor* UTargetTypeActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TargetTypeActor");
    return (UTargetTypeActor*)res;
}
AActor* UTargetTypeActor::GetTargetActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeActor.GetTargetActor"));
    struct Params_GetTargetActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTargetActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UTargetTypeActor::SetTargetActor(AActor* InTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeActor.SetTargetActor"));
    struct Params_SetTargetActor {
        AActor* InTargetActor; // 0x0
    }; // Size: 0x8
    Params_SetTargetActor params{};
    params.InTargetActor = (AActor*)InTargetActor;
    ProcessEvent(func, &params);
}
void UTargetTypeActor::SetSocketName(FName InSocketName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeActor.SetSocketName"));
    struct Params_SetSocketName {
        FName InSocketName; // 0x0
    }; // Size: 0x8
    Params_SetSocketName params{};
    params.InSocketName = (FName)InSocketName;
    ProcessEvent(func, &params);
}
void UTargetTypeActor::SetActorOffset(FVector InActorOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeActor.SetActorOffset"));
    struct Params_SetActorOffset {
        FVector InActorOffset; // 0x0
    }; // Size: 0xc
    Params_SetActorOffset params{};
    params.InActorOffset = (FVector)InActorOffset;
    ProcessEvent(func, &params);
}
FVector UTargetTypeActor::GetActorOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeActor.GetActorOffset"));
    struct Params_GetActorOffset {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetActorOffset params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
