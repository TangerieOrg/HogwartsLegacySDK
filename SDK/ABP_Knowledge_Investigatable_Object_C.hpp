#pragma once
#include <cstdint>
#include "ABP_FieldGuideHotSpot_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UChildActorComponent;
class UBeaconInfo;
class UInvestigatableKnowledge;
class ABP_Knowledge_Investigatable_Object_Marker_C;
class UBeaconManager;
class ABeaconLocation;
#pragma pack(push, 1)
class ABP_Knowledge_Investigatable_Object_C : public ABP_FieldGuideHotSpot_C {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x350
    UChildActorComponent* BP_Knowledge_Investigatable_Object_Marker; // 0x358
    UInvestigatableKnowledge* InvestigatableKnowledge; // 0x360
    FString Investigatable_Name; // 0x368
    static ABP_Knowledge_Investigatable_Object_C* StaticClass();
    void TurnOffMinimap(ABP_Knowledge_Investigatable_Object_Marker_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Test_Cast();
    void ExecuteUbergraph_BP_Knowledge_Investigatable_Object(int32_t EntryPoint, UBeaconManager* CallFunc_Get_ReturnValue, ABP_Knowledge_Investigatable_Object_Marker_C* K2Node_DynamicCast_AsBP_Knowledge_Investigatable_Object_Marker, bool K2Node_DynamicCast_bSuccess, ABeaconLocation* K2Node_DynamicCast_AsBeacon_Location, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetBeaconHandle_ReturnValue, UBeaconInfo* CallFunc_GetBeaconByHandleBP_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
}; // Size: 0x378
#pragma pack(pop)
