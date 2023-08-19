#include "ABP_KnowledgeNamedEnemy_Marker_C.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABeaconLocation.hpp"
#include "FColor.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_KnowledgeNamedEnemy_Marker_C* ABP_KnowledgeNamedEnemy_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_KnowledgeNamedEnemy_Marker.BP_KnowledgeNamedEnemy_Marker_C");
    return (ABP_KnowledgeNamedEnemy_Marker_C*)res;
}
void ABP_KnowledgeNamedEnemy_Marker_C::UserConstructionScript(bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_StrStr_ReturnValue_7, bool CallFunc_EqualEqual_StrStr_ReturnValue_8, bool CallFunc_EqualEqual_StrStr_ReturnValue_9, bool CallFunc_EqualEqual_StrStr_ReturnValue_10, bool CallFunc_EqualEqual_StrStr_ReturnValue_11, bool CallFunc_EqualEqual_StrStr_ReturnValue_12, bool CallFunc_EqualEqual_StrStr_ReturnValue_13, bool CallFunc_EqualEqual_StrStr_ReturnValue_14, bool CallFunc_EqualEqual_StrStr_ReturnValue_15, bool CallFunc_EqualEqual_StrStr_ReturnValue_16, bool CallFunc_EqualEqual_StrStr_ReturnValue_17, bool CallFunc_EqualEqual_StrStr_ReturnValue_18, bool CallFunc_EqualEqual_StrStr_ReturnValue_19, bool CallFunc_EqualEqual_StrStr_ReturnValue_20, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FColor K2Node_MakeStruct_Color, bool CallFunc_InitMarker_Valid, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_KnowledgeNamedEnemy_Marker.BP_KnowledgeNamedEnemy_Marker_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x0
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x1
        bool CallFunc_EqualEqual_StrStr_ReturnValue_2; // 0x2
        bool CallFunc_EqualEqual_StrStr_ReturnValue_3; // 0x3
        bool CallFunc_EqualEqual_StrStr_ReturnValue_4; // 0x4
        bool CallFunc_EqualEqual_StrStr_ReturnValue_5; // 0x5
        bool CallFunc_EqualEqual_StrStr_ReturnValue_6; // 0x6
        bool CallFunc_EqualEqual_StrStr_ReturnValue_7; // 0x7
        bool CallFunc_EqualEqual_StrStr_ReturnValue_8; // 0x8
        bool CallFunc_EqualEqual_StrStr_ReturnValue_9; // 0x9
        bool CallFunc_EqualEqual_StrStr_ReturnValue_10; // 0xa
        bool CallFunc_EqualEqual_StrStr_ReturnValue_11; // 0xb
        bool CallFunc_EqualEqual_StrStr_ReturnValue_12; // 0xc
        bool CallFunc_EqualEqual_StrStr_ReturnValue_13; // 0xd
        bool CallFunc_EqualEqual_StrStr_ReturnValue_14; // 0xe
        bool CallFunc_EqualEqual_StrStr_ReturnValue_15; // 0xf
        bool CallFunc_EqualEqual_StrStr_ReturnValue_16; // 0x10
        bool CallFunc_EqualEqual_StrStr_ReturnValue_17; // 0x11
        bool CallFunc_EqualEqual_StrStr_ReturnValue_18; // 0x12
        bool CallFunc_EqualEqual_StrStr_ReturnValue_19; // 0x13
        bool CallFunc_EqualEqual_StrStr_ReturnValue_20; // 0x14
        char pad_15[0x3];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x3];
        FColor K2Node_MakeStruct_Color; // 0x24
        bool CallFunc_InitMarker_Valid; // 0x28
        char pad_29[0x3];
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x2c
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x38
        float CallFunc_BreakRotator_Roll; // 0x44
        float CallFunc_BreakRotator_Pitch; // 0x48
        float CallFunc_BreakRotator_Yaw; // 0x4c
    }; // Size: 0x50
    Params_UserConstructionScript params{};
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_2 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_2;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_3 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_3;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_4 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_4;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_5 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_5;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_6 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_6;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_7 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_7;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_8 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_8;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_9 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_9;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_10 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_10;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_11 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_11;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_12 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_12;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_13 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_13;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_14 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_14;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_15 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_15;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_16 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_16;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_17 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_17;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_18 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_18;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_19 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_19;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_20 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_20;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    ProcessEvent(func, &params);
}
