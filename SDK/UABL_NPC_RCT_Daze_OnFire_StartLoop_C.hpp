#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class UAblAbilityContext;
class AActor;
class UDamageOverTime;
class UObjectStateInfo;
#pragma pack(push, 1)
class UABL_NPC_RCT_Daze_OnFire_StartLoop_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    static UABL_NPC_RCT_Daze_OnFire_StartLoop_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_NPC_RCT_Daze_OnFire_StartLoop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t Temp_int_Array_Index_Variable, TArray<UDamageOverTime*>& CallFunc_K2_GetComponentsByClass_ReturnValue, UDamageOverTime* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_SetHealth_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
}; // Size: 0xe8
#pragma pack(pop)
