#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "USceneAction_Blueprint.hpp"
class UObject;
class AActor;
class ULightComponent;
#pragma pack(push, 1)
class UBP_SceneAction_LightSwitch_C : public USceneAction_Blueprint {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    bool bLightsOn; // 0xb0
    char pad_b1[0x57];
    static UBP_SceneAction_LightSwitch_C* StaticClass();
    void GetDisplayName0();
    void OnEnterInterval0(float Time, bool IsScrubbing);
    void OnExitInterval0(float Time, bool Cancelled, bool IsScrubbing);
    void ExecuteUbergraph_BP_SceneAction_LightSwitch(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, UObject* CallFunc_GetActionObjectBP_ReturnValue, float K2Node_Event_Time_1, bool K2Node_Event_IsScrubbing_1, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Time, bool K2Node_Event_Cancelled, bool K2Node_Event_IsScrubbing, TArray<ULightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<bool>& CallFunc_Map_Values_Values, TArray<ULightComponent*>& CallFunc_Map_Keys_Keys, bool CallFunc_Array_Get_Item, ULightComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, ULightComponent* CallFunc_Array_Get_Item_2);
}; // Size: 0x108
#pragma pack(pop)
