#include "ABP_Marker_Base_C.hpp"
#include "ABP_OL_Chest_VP_Marker_C.hpp"
#include "ABP_VaultRuin_Marker_C.hpp"
#include "ABeaconLocation.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBeaconInfo.hpp"
#include "UBeaconManager.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
ABP_OL_Chest_VP_Marker_C* ABP_OL_Chest_VP_Marker_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C");
    return (ABP_OL_Chest_VP_Marker_C*)res;
}
void ABP_OL_Chest_VP_Marker_C::UserConstructionScript() {}
void ABP_OL_Chest_VP_Marker_C::Gett_Beacon() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C.Gett Beacon"));
    struct Params_Gett_Beacon {
    }; // Size: 0x0
    Params_Gett_Beacon params{};
    ProcessEvent(func, &params);
}
void ABP_OL_Chest_VP_Marker_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_OL_Chest_VP_Marker_C::ExecuteUbergraph_BP_OL_Chest_VP_Marker(int32_t EntryPoint, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Array_Index_Variable, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetBeaconHandle_ReturnValue, UBeaconManager* CallFunc_Get_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UBeaconInfo* CallFunc_GetBeaconByHandleBP_ReturnValue, TArray<ABP_VaultRuin_Marker_C*>& CallFunc_GetAllActorsOfClass_OutActors, ABP_VaultRuin_Marker_C* CallFunc_Array_Get_Item, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_Chest_VP_Marker.BP_OL_Chest_VP_Marker_C.ExecuteUbergraph_BP_OL_Chest_VP_Marker"));
    struct Params_ExecuteUbergraph_BP_OL_Chest_VP_Marker {
        int32_t EntryPoint; // 0x0
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x4
        char pad_5[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x8
        char pad_c[0x4];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_GetBeaconHandle_ReturnValue; // 0x1c
        UBeaconManager* CallFunc_Get_ReturnValue; // 0x20
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x28
        char pad_34[0x4];
        UBeaconInfo* CallFunc_GetBeaconByHandleBP_ReturnValue; // 0x38
        TArray<ABP_VaultRuin_Marker_C*> CallFunc_GetAllActorsOfClass_OutActors; // 0x40
        ABP_VaultRuin_Marker_C* CallFunc_Array_Get_Item; // 0x50
        float CallFunc_GetDistanceTo_ReturnValue; // 0x58
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x5c
        char pad_5d[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x60
        int32_t Temp_int_Loop_Counter_Variable; // 0x64
        bool CallFunc_Less_IntInt_ReturnValue; // 0x68
        char pad_69[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x6c
    }; // Size: 0x70
    Params_ExecuteUbergraph_BP_OL_Chest_VP_Marker params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetBeaconHandle_ReturnValue = (int32_t)CallFunc_GetBeaconHandle_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UBeaconManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_GetBeaconByHandleBP_ReturnValue = (UBeaconInfo*)CallFunc_GetBeaconByHandleBP_ReturnValue;
    params.CallFunc_GetAllActorsOfClass_OutActors = (TArray<ABP_VaultRuin_Marker_C*>)CallFunc_GetAllActorsOfClass_OutActors;
    params.CallFunc_Array_Get_Item = (ABP_VaultRuin_Marker_C*)CallFunc_Array_Get_Item;
    params.CallFunc_GetDistanceTo_ReturnValue = (float)CallFunc_GetDistanceTo_ReturnValue;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllActorsOfClass_OutActors = params.CallFunc_GetAllActorsOfClass_OutActors;
}
