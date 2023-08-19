#include "AActor.hpp"
#include "FLinearColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "UViewport.hpp"
#include "UWorld.hpp"
void UViewport::SetViewRotation(FRotator Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Viewport.SetViewRotation"));
    struct Params_SetViewRotation {
        FRotator Rotation; // 0x0
    }; // Size: 0xc
    Params_SetViewRotation params{};
    params.Rotation = (FRotator)Rotation;
    ProcessEvent(func, &params);
}
UViewport* UViewport::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Viewport");
    return (UViewport*)res;
}
UWorld* UViewport::GetViewportWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Viewport.GetViewportWorld"));
    struct Params_GetViewportWorld {
        UWorld* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetViewportWorld params{};
    ProcessEvent(func, &params);
    return (UWorld*)params.ReturnValue;
}
AActor* UViewport::Spawn(UClass* ActorClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Viewport.Spawn"));
    struct Params_Spawn {
        UClass* ActorClass; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Spawn params{};
    params.ActorClass = (UClass*)ActorClass;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UViewport::SetViewLocation(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Viewport.SetViewLocation"));
    struct Params_SetViewLocation {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_SetViewLocation params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
FRotator UViewport::GetViewRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Viewport.GetViewRotation"));
    struct Params_GetViewRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetViewRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
FVector UViewport::GetViewLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Viewport.GetViewLocation"));
    struct Params_GetViewLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetViewLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
