#include "AActor.hpp"
#include "AMapBaseActor.hpp"
#include "AMapHogwartsBPActor.hpp"
#include "AMapLocationActor.hpp"
#include "EMap3DState.hpp"
#include "FLinearColor.hpp"
#include "FPathLocationData.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "ULevelData.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UMapCameraParameters.hpp"
#include "UMapData.hpp"
#include "UMapHogwarts.hpp"
#include "UMapLocation.hpp"
#include "UMapMarkupComponent.hpp"
#include "UMapObjectComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UScheduledEntity.hpp"
#include "UStaticMeshComponent.hpp"
void AMapHogwartsBPActor::PushLocaitonNameToScreen(FString LocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.PushLocaitonNameToScreen"));
    struct Params_PushLocaitonNameToScreen {
        FString LocationName; // 0x0
    }; // Size: 0x10
    Params_PushLocaitonNameToScreen params{};
    params.LocationName = (FString)LocationName;
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnSingleState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnSingleState_Start_Event"));
    struct Params_OnSingleState_Start_Event {
    }; // Size: 0x0
    Params_OnSingleState_Start_Event params{};
    ProcessEvent(func, &params);
}
AMapHogwartsBPActor* AMapHogwartsBPActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapHogwartsBPActor");
    return (AMapHogwartsBPActor*)res;
}
void AMapHogwartsBPActor::OnTransitionToSingleState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToSingleState_Update_Event"));
    struct Params_OnTransitionToSingleState_Update_Event {
    }; // Size: 0x0
    Params_OnTransitionToSingleState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::DoUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.DoUp"));
    struct Params_DoUp {
    }; // Size: 0x0
    Params_DoUp params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnFastTravelState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnFastTravelState_Update_Event"));
    struct Params_OnFastTravelState_Update_Event {
    }; // Size: 0x0
    Params_OnFastTravelState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::SetStaticMapTarget(FVector Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.SetStaticMapTarget"));
    struct Params_SetStaticMapTarget {
        FVector Target; // 0x0
    }; // Size: 0xc
    Params_SetStaticMapTarget params{};
    params.Target = (FVector)Target;
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::SetNextState(EMap3DState NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.SetNextState"));
    struct Params_SetNextState {
        EMap3DState NewState; // 0x0
    }; // Size: 0x1
    Params_SetNextState params{};
    params.NewState = (EMap3DState)NewState;
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::SetDynamicMapTarget(UScheduledEntity* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.SetDynamicMapTarget"));
    struct Params_SetDynamicMapTarget {
        UScheduledEntity* Target; // 0x0
    }; // Size: 0x8
    Params_SetDynamicMapTarget params{};
    params.Target = (UScheduledEntity*)Target;
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::DoBack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.DoBack"));
    struct Params_DoBack {
    }; // Size: 0x0
    Params_DoBack params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::PushLocationListToScreen(TArray<FString> InLocationList, int32_t InStartIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.PushLocationListToScreen"));
    struct Params_PushLocationListToScreen {
        TArray<FString> InLocationList; // 0x0
        int32_t InStartIndex; // 0x10
    }; // Size: 0x14
    Params_PushLocationListToScreen params{};
    params.InLocationList = (TArray<FString>)InLocationList;
    params.InStartIndex = (int32_t)InStartIndex;
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnTransitionToSingleState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToSingleState_Start_Event"));
    struct Params_OnTransitionToSingleState_Start_Event {
    }; // Size: 0x0
    Params_OnTransitionToSingleState_Start_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnTransitionToGroupState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToGroupState_Update_Event"));
    struct Params_OnTransitionToGroupState_Update_Event {
    }; // Size: 0x0
    Params_OnTransitionToGroupState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnTransitionToSingleState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToSingleState_Exit_Event"));
    struct Params_OnTransitionToSingleState_Exit_Event {
    }; // Size: 0x0
    Params_OnTransitionToSingleState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnTransitionToCastleState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToCastleState_Update_Event"));
    struct Params_OnTransitionToCastleState_Update_Event {
    }; // Size: 0x0
    Params_OnTransitionToCastleState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnTransitionToGroupState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToGroupState_Start_Event"));
    struct Params_OnTransitionToGroupState_Start_Event {
    }; // Size: 0x0
    Params_OnTransitionToGroupState_Start_Event params{};
    ProcessEvent(func, &params);
}
AMapLocationActor* AMapHogwartsBPActor::FindLocationActorBelowPoint(FVector Point) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.FindLocationActorBelowPoint"));
    struct Params_FindLocationActorBelowPoint {
        FVector Point; // 0x0
        char pad_c[0x4];
        AMapLocationActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindLocationActorBelowPoint params{};
    params.Point = (FVector)Point;
    ProcessEvent(func, &params);
    return (AMapLocationActor*)params.ReturnValue;
}
void AMapHogwartsBPActor::OnTransitionToGroupState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToGroupState_Exit_Event"));
    struct Params_OnTransitionToGroupState_Exit_Event {
    }; // Size: 0x0
    Params_OnTransitionToGroupState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnStartState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnStartState_Exit_Event"));
    struct Params_OnStartState_Exit_Event {
    }; // Size: 0x0
    Params_OnStartState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnTransitionToCastleState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToCastleState_Start_Event"));
    struct Params_OnTransitionToCastleState_Start_Event {
    }; // Size: 0x0
    Params_OnTransitionToCastleState_Start_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnTransitionToCastleState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnTransitionToCastleState_Exit_Event"));
    struct Params_OnTransitionToCastleState_Exit_Event {
    }; // Size: 0x0
    Params_OnTransitionToCastleState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnStartState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnStartState_Update_Event"));
    struct Params_OnStartState_Update_Event {
    }; // Size: 0x0
    Params_OnStartState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnStartState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnStartState_Start_Event"));
    struct Params_OnStartState_Start_Event {
    }; // Size: 0x0
    Params_OnStartState_Start_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnSingleState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnSingleState_Update_Event"));
    struct Params_OnSingleState_Update_Event {
    }; // Size: 0x0
    Params_OnSingleState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnSingleState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnSingleState_Exit_Event"));
    struct Params_OnSingleState_Exit_Event {
    }; // Size: 0x0
    Params_OnSingleState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnFastTravelState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnFastTravelState_Start_Event"));
    struct Params_OnFastTravelState_Start_Event {
    }; // Size: 0x0
    Params_OnFastTravelState_Start_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnGroupState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnGroupState_Update_Event"));
    struct Params_OnGroupState_Update_Event {
    }; // Size: 0x0
    Params_OnGroupState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnGroupState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnGroupState_Start_Event"));
    struct Params_OnGroupState_Start_Event {
    }; // Size: 0x0
    Params_OnGroupState_Start_Event params{};
    ProcessEvent(func, &params);
}
bool AMapHogwartsBPActor::GetIsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.GetIsActive"));
    struct Params_GetIsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AMapHogwartsBPActor::OnCastleState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnCastleState_Exit_Event"));
    struct Params_OnCastleState_Exit_Event {
    }; // Size: 0x0
    Params_OnCastleState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnGroupState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnGroupState_Exit_Event"));
    struct Params_OnGroupState_Exit_Event {
    }; // Size: 0x0
    Params_OnGroupState_Exit_Event params{};
    ProcessEvent(func, &params);
}
AMapLocationActor* AMapHogwartsBPActor::FindLocationActorThatContainsPoint(FVector Point) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.FindLocationActorThatContainsPoint"));
    struct Params_FindLocationActorThatContainsPoint {
        FVector Point; // 0x0
        char pad_c[0x4];
        AMapLocationActor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindLocationActorThatContainsPoint params{};
    params.Point = (FVector)Point;
    ProcessEvent(func, &params);
    return (AMapLocationActor*)params.ReturnValue;
}
void AMapHogwartsBPActor::OnFastTravelState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnFastTravelState_Exit_Event"));
    struct Params_OnFastTravelState_Exit_Event {
    }; // Size: 0x0
    Params_OnFastTravelState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnDiscoverState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnDiscoverState_Update_Event"));
    struct Params_OnDiscoverState_Update_Event {
    }; // Size: 0x0
    Params_OnDiscoverState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnCastleState_Update_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnCastleState_Update_Event"));
    struct Params_OnCastleState_Update_Event {
    }; // Size: 0x0
    Params_OnCastleState_Update_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnDiscoverState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnDiscoverState_Start_Event"));
    struct Params_OnDiscoverState_Start_Event {
    }; // Size: 0x0
    Params_OnDiscoverState_Start_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnDiscoverState_Exit_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnDiscoverState_Exit_Event"));
    struct Params_OnDiscoverState_Exit_Event {
    }; // Size: 0x0
    Params_OnDiscoverState_Exit_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnActivate_Event(bool Activate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnActivate_Event"));
    struct Params_OnActivate_Event {
        bool Activate; // 0x0
    }; // Size: 0x1
    Params_OnActivate_Event params{};
    params.Activate = (bool)Activate;
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::OnCastleState_Start_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.OnCastleState_Start_Event"));
    struct Params_OnCastleState_Start_Event {
    }; // Size: 0x0
    Params_OnCastleState_Start_Event params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::GiveMeHelp_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.GiveMeHelp_Event"));
    struct Params_GiveMeHelp_Event {
    }; // Size: 0x0
    Params_GiveMeHelp_Event params{};
    ProcessEvent(func, &params);
}
UMapHogwarts* AMapHogwartsBPActor::GetHogwartsMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.GetHogwartsMap"));
    struct Params_GetHogwartsMap {
        UMapHogwarts* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHogwartsMap params{};
    ProcessEvent(func, &params);
    return (UMapHogwarts*)params.ReturnValue;
}
void AMapHogwartsBPActor::GiveMeHelp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.GiveMeHelp"));
    struct Params_GiveMeHelp {
    }; // Size: 0x0
    Params_GiveMeHelp params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::DoSelect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.DoSelect"));
    struct Params_DoSelect {
    }; // Size: 0x0
    Params_DoSelect params{};
    ProcessEvent(func, &params);
}
EMap3DState AMapHogwartsBPActor::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.GetState"));
    struct Params_GetState {
        EMap3DState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EMap3DState)params.ReturnValue;
}
FString AMapHogwartsBPActor::GetRoomStairFloorString(UMapMarkupComponent* MapLocation, UMapMarkupComponent* StairLocation, UMapLocation* FloorLocation, UMapLocation* PrimaryrLocation, bool IsOnlyPrimaryLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.GetRoomStairFloorString"));
    struct Params_GetRoomStairFloorString {
        UMapMarkupComponent* MapLocation; // 0x0
        UMapMarkupComponent* StairLocation; // 0x8
        UMapLocation* FloorLocation; // 0x10
        UMapLocation* PrimaryrLocation; // 0x18
        bool IsOnlyPrimaryLocation; // 0x20
        char pad_21[0x7];
        FString ReturnValue; // 0x28
    }; // Size: 0x38
    Params_GetRoomStairFloorString params{};
    params.MapLocation = (UMapMarkupComponent*)MapLocation;
    params.StairLocation = (UMapMarkupComponent*)StairLocation;
    params.FloorLocation = (UMapLocation*)FloorLocation;
    params.PrimaryrLocation = (UMapLocation*)PrimaryrLocation;
    params.IsOnlyPrimaryLocation = (bool)IsOnlyPrimaryLocation;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void AMapHogwartsBPActor::DoDown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.DoDown"));
    struct Params_DoDown {
    }; // Size: 0x0
    Params_DoDown params{};
    ProcessEvent(func, &params);
}
void AMapHogwartsBPActor::ClearMapTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwartsBPActor.ClearMapTarget"));
    struct Params_ClearMapTarget {
    }; // Size: 0x0
    Params_ClearMapTarget params{};
    ProcessEvent(func, &params);
}
