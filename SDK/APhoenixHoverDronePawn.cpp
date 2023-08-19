#include "AActor.hpp"
#include "ADefaultPawn.hpp"
#include "APhoenixHoverDronePawn.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UCapsuleComponent.hpp"
#include "UClass.hpp"
#include "UCurveVector.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UUserWidget.hpp"
APhoenixHoverDronePawn* APhoenixHoverDronePawn::StaticClass() {
    static auto res = find_uobject("Class /Script/HoverDrone.PhoenixHoverDronePawn");
    return (APhoenixHoverDronePawn*)res;
}
void APhoenixHoverDronePawn::ActorOverlapEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.PhoenixHoverDronePawn.ActorOverlapEndOverlap"));
    struct Params_ActorOverlapEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_ActorOverlapEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void APhoenixHoverDronePawn::AllowIcons(bool InVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.PhoenixHoverDronePawn.AllowIcons"));
    struct Params_AllowIcons {
        bool InVal; // 0x0
    }; // Size: 0x1
    Params_AllowIcons params{};
    params.InVal = (bool)InVal;
    ProcessEvent(func, &params);
}
bool APhoenixHoverDronePawn::IsMaintainingConstantAltitude() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.PhoenixHoverDronePawn.IsMaintainingConstantAltitude"));
    struct Params_IsMaintainingConstantAltitude {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMaintainingConstantAltitude params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float APhoenixHoverDronePawn::GetAltitude() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.PhoenixHoverDronePawn.GetAltitude"));
    struct Params_GetAltitude {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAltitude params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void APhoenixHoverDronePawn::ActorOverlapBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HoverDrone.PhoenixHoverDronePawn.ActorOverlapBeginOverlap"));
    struct Params_ActorOverlapBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* Other; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult OverlapInfo; // 0x20
    }; // Size: 0xa8
    Params_ActorOverlapBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.Other = (AActor*)Other;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.OverlapInfo = (FHitResult)OverlapInfo;
    ProcessEvent(func, &params);
    OverlapInfo = params.OverlapInfo;
}
