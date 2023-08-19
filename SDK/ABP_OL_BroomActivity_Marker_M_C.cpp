#include "AActor.hpp"
#include "ABP_Marker_Base_C.hpp"
#include "ABP_OL_BroomActivity_Marker_M_C.hpp"
#include "ABeaconLocation.hpp"
#include "FColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
void ABP_OL_BroomActivity_Marker_M_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_OL_BroomActivity_Marker_M_C* ABP_OL_BroomActivity_Marker_M_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Overland/BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C");
    return (ABP_OL_BroomActivity_Marker_M_C*)res;
}
void ABP_OL_BroomActivity_Marker_M_C::UserConstructionScript(AActor* CallFunc_GetParentActor_ReturnValue, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Contains_ReturnValue, FString CallFunc_Conv_ObjectToString_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_Contains_ReturnValue_3, FRotator CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_Contains_ReturnValue_4, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue, FColor K2Node_MakeStruct_Color, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_InitMarker_Valid, bool CallFunc_NotEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        AActor* CallFunc_GetParentActor_ReturnValue; // 0x0
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        FString CallFunc_GetDisplayName_ReturnValue; // 0x18
        bool CallFunc_Contains_ReturnValue; // 0x28
        char pad_29[0x7];
        FString CallFunc_Conv_ObjectToString_ReturnValue; // 0x30
        bool CallFunc_Contains_ReturnValue_1; // 0x40
        bool CallFunc_Contains_ReturnValue_2; // 0x41
        bool CallFunc_Contains_ReturnValue_3; // 0x42
        char pad_43[0x1];
        FRotator CallFunc_K2_GetActorRotation_ReturnValue; // 0x44
        bool CallFunc_Contains_ReturnValue_4; // 0x50
        char pad_51[0x3];
        float CallFunc_BreakRotator_Roll; // 0x54
        float CallFunc_BreakRotator_Pitch; // 0x58
        float CallFunc_BreakRotator_Yaw; // 0x5c
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x60
        FColor K2Node_MakeStruct_Color; // 0x6c
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x70
        bool CallFunc_InitMarker_Valid; // 0x80
        bool CallFunc_NotEqual_StrStr_ReturnValue; // 0x81
    }; // Size: 0x82
    Params_UserConstructionScript params{};
    params.CallFunc_GetParentActor_ReturnValue = (AActor*)CallFunc_GetParentActor_ReturnValue;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetDisplayName_ReturnValue = (FString)CallFunc_GetDisplayName_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Conv_ObjectToString_ReturnValue = (FString)CallFunc_Conv_ObjectToString_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_3 = (bool)CallFunc_Contains_ReturnValue_3;
    params.CallFunc_K2_GetActorRotation_ReturnValue = (FRotator)CallFunc_K2_GetActorRotation_ReturnValue;
    params.CallFunc_Contains_ReturnValue_4 = (bool)CallFunc_Contains_ReturnValue_4;
    params.CallFunc_BreakRotator_Roll = (float)CallFunc_BreakRotator_Roll;
    params.CallFunc_BreakRotator_Pitch = (float)CallFunc_BreakRotator_Pitch;
    params.CallFunc_BreakRotator_Yaw = (float)CallFunc_BreakRotator_Yaw;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.K2Node_MakeStruct_Color = (FColor)K2Node_MakeStruct_Color;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_InitMarker_Valid = (bool)CallFunc_InitMarker_Valid;
    params.CallFunc_NotEqual_StrStr_ReturnValue = (bool)CallFunc_NotEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_OL_BroomActivity_Marker_M_C::ExecuteUbergraph_BP_OL_BroomActivity_Marker_M(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Overland/BP_OL_BroomActivity_Marker_M.BP_OL_BroomActivity_Marker_M_C.ExecuteUbergraph_BP_OL_BroomActivity_Marker_M"));
    struct Params_ExecuteUbergraph_BP_OL_BroomActivity_Marker_M {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_BP_OL_BroomActivity_Marker_M params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
