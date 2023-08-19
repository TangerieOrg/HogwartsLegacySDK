#include "ABP_BroomRace_ActivityPad_C.hpp"
#include "ABP_Broom_Race_Marker_C.hpp"
#include "ABeaconLocation.hpp"
#include "ARacePlatform.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
void ABP_BroomRace_ActivityPad_C::ExecuteUbergraph_BP_BroomRace_ActivityPad(int32_t EntryPoint, ABP_Broom_Race_Marker_C* K2Node_DynamicCast_AsBP_Broom_Race_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/BroomFlight/Blueprints/BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C.ExecuteUbergraph_BP_BroomRace_ActivityPad"));
    struct Params_ExecuteUbergraph_BP_BroomRace_ActivityPad {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        ABP_Broom_Race_Marker_C* K2Node_DynamicCast_AsBP_Broom_Race_Marker; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x7];
        ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location; // 0x18
        bool K2Node_DynamicCast_bSuccess_1; // 0x20
        char pad_21[0x3];
        int32_t CallFunc_GetBeaconHandle_ReturnValue; // 0x24
    }; // Size: 0x28
    Params_ExecuteUbergraph_BP_BroomRace_ActivityPad params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_DynamicCast_AsBP_Broom_Race_Marker = (ABP_Broom_Race_Marker_C*)K2Node_DynamicCast_AsBP_Broom_Race_Marker;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsBeacon_Location = (ABeaconLocation*)K2Node_DynamicCast_AsBeacon_Location;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetBeaconHandle_ReturnValue = (int32_t)CallFunc_GetBeaconHandle_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_BroomRace_ActivityPad_C::OnPlatformUnlocked0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/BroomFlight/Blueprints/BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C.OnPlatformUnlocked"));
    struct Params_OnPlatformUnlocked {
    }; // Size: 0x0
    Params_OnPlatformUnlocked params{};
    ProcessEvent(func, &params);
}
ABP_BroomRace_ActivityPad_C* ABP_BroomRace_ActivityPad_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/BroomFlight/Blueprints/BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C");
    return (ABP_BroomRace_ActivityPad_C*)res;
}
FName ABP_BroomRace_ActivityPad_C::GetUniqueBeaconId(ABP_Broom_Race_Marker_C* K2Node_DynamicCast_AsBP_Broom_Race_Marker, bool K2Node_DynamicCast_bSuccess, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/BroomFlight/Blueprints/BP_BroomRace_ActivityPad.BP_BroomRace_ActivityPad_C.GetUniqueBeaconId"));
    struct Params_GetUniqueBeaconId {
        FName ReturnValue; // 0x0
        ABP_Broom_Race_Marker_C* K2Node_DynamicCast_AsBP_Broom_Race_Marker; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x14
    }; // Size: 0x1c
    Params_GetUniqueBeaconId params{};
    params.K2Node_DynamicCast_AsBP_Broom_Race_Marker = (ABP_Broom_Race_Marker_C*)K2Node_DynamicCast_AsBP_Broom_Race_Marker;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
