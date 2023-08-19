#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class AActor;
#pragma pack(push, 1)
class UABL_Climb3M_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_Climb3M_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_Climb3M(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, AActor* CallFunc_GetSelfActor_ReturnValue, int32_t CallFunc_PostDialogueEvent_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)
