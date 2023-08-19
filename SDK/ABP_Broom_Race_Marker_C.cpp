#include "ABP_Broom_Race_Marker_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABeaconLocation.hpp"
#include "FColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_Broom_Race_Marker_C* ABP_Broom_Race_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_Broom_Race_Marker.BP_Broom_Race_Marker_C");
    return (ABP_Broom_Race_Marker_C*)res;
}
void ABP_Broom_Race_Marker_C::UserConstructionScript(FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_Broom_Race_Marker.BP_Broom_Race_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FColor K2Node_MakeStruct_Color; // 0x0
        bool CallFunc_InitMarker_Valid; // 0x4
        char pad_5[0x3];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x3];
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x14
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x20
        float CallFunc_BreakRotator_Roll; // 0x28
        float CallFunc_BreakRotator_Pitch; // 0x2c
        float CallFunc_BreakRotator_Yaw; // 0x30
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x34
    }; // Size: 0x40
    Params_UserConstructionScript params{};
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Broom_Race_Marker_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_Broom_Race_Marker.BP_Broom_Race_Marker_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Broom_Race_Marker_C::ExecuteUbergraph_BP_Broom_Race_Marker(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_Broom_Race_Marker.BP_Broom_Race_Marker_C.ExecuteUbergraph_BP_Broom_Race_Marker"));
    struct Params_ExecuteUbergraph_BP_Broom_Race_Marker {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_Broom_Race_Marker params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
