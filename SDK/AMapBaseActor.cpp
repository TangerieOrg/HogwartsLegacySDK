#include "AActor.hpp"
#include "AMapBaseActor.hpp"
#include "AMapPawn.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMapCameraParameters.hpp"
AMapBaseActor* AMapBaseActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapBaseActor");
    return (AMapBaseActor*)res;
}
void AMapBaseActor::SetMapPawn(AMapPawn* Pawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBaseActor.SetMapPawn"));
    struct Params_SetMapPawn {
        AMapPawn* Pawn; // 0x0
    }; // Size: 0x8
    Params_SetMapPawn params{};
    params.Pawn = (AMapPawn*)Pawn;
    ProcessEvent(func, &params);
}
AMapPawn* AMapBaseActor::GetMapPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapBaseActor.GetMapPawn"));
    struct Params_GetMapPawn {
        AMapPawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapPawn params{};
    ProcessEvent(func, &params);
    return (AMapPawn*)params.ReturnValue;
}
