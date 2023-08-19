#include "ABP_FieldGuideHotSpot_C.hpp"
#include "ABP_Knowledge_Investigatable_Object_C.hpp"
#include "ABP_Knowledge_Investigatable_Object_Marker_C.hpp"
#include "ABeaconLocation.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBeaconInfo.hpp"
#include "UBeaconManager.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UInvestigatableKnowledge.hpp"
void ABP_Knowledge_Investigatable_Object_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_Knowledge_Investigatable_Object_C* ABP_Knowledge_Investigatable_Object_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C");
    return (ABP_Knowledge_Investigatable_Object_C*)res;
}
void ABP_Knowledge_Investigatable_Object_C::TurnOffMinimap(ABP_Knowledge_Investigatable_Object_Marker_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.TurnOffMinimap"));
    struct Params_TurnOffMinimap {
        ABP_Knowledge_Investigatable_Object_Marker_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker; // 0x0
        bool K2Node_DynamicCast_bSuccess; // 0x8
        char pad_9[0x7];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x10
        bool K2Node_DynamicCast_bSuccess_1; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_GetBeaconHandle_ReturnValue; // 0x1c
    }; // Size: 0x20
    Params_TurnOffMinimap params{};
    params.K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker = (ABP_Knowledge_Investigatable_Object_Marker_C*)K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetBeaconHandle_ReturnValue = (int32_t)CallFunc_GetBeaconHandle_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_Knowledge_Investigatable_Object_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Knowledge_Investigatable_Object_C::Test_Cast() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.Test Cast"));
    struct Params_Test_Cast {
    }; // Size: 0x0
    Params_Test_Cast params{};
    ProcessEvent(func, &params);
}
void ABP_Knowledge_Investigatable_Object_C::ExecuteUbergraph_BP_Knowledge_Investigatable_Object(int32_t EntryPoint, UBeaconManager* CallFunc_Get_ReturnValue, ABP_Knowledge_Investigatable_Object_Marker_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue, UBeaconInfo* CallFunc_GetBeaconByHandleBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Knowledge/BP_Knowledge_Investigatable_Object.BP_Knowledge_Investigatable_Object_C.ExecuteUbergraph_BP_Knowledge_Investigatable_Object"));
    struct Params_ExecuteUbergraph_BP_Knowledge_Investigatable_Object {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UBeaconManager* CallFunc_Get_ReturnValue; // 0x8
        ABP_Knowledge_Investigatable_Object_Marker_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x20
        bool K2Node_DynamicCast_bSuccess_1; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_GetBeaconHandle_ReturnValue; // 0x2c
        UBeaconInfo* CallFunc_GetBeaconByHandleBP_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        bool CallFunc_IsEmpty_ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_ExecuteUbergraph_BP_Knowledge_Investigatable_Object params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UBeaconManager*)CallFunc_Get_ReturnValue;
    params.K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker = (ABP_Knowledge_Investigatable_Object_Marker_C*)K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetBeaconHandle_ReturnValue = (int32_t)CallFunc_GetBeaconHandle_ReturnValue;
    params.CallFunc_GetBeaconByHandleBP_ReturnValue = (UBeaconInfo*)CallFunc_GetBeaconByHandleBP_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsEmpty_ReturnValue = (bool)CallFunc_IsEmpty_ReturnValue;
    ProcessEvent(func, &params);
}
