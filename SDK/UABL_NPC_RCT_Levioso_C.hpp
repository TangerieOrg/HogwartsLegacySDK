#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class ACharacter;
class UAblAbilityContext;
class UAblAbility;
class UAblReactionData;
class AActor;
class UBP_LeviosoReactionComp_C;
#pragma pack(push, 1)
class UABL_NPC_RCT_Levioso_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    ACharacter* TempCharRef; // 0xe8
    static UABL_NPC_RCT_Levioso_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void OnAbilityBranch(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_NPC_RCT_Levioso(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, UAblAbilityContext* K2Node_Event_Context_3, UAblAbilityContext* K2Node_Event_Context_2, UAblReactionData* CallFunc_GetReactionData_ReturnValue, AActor* CallFunc_GetSelfActor_ReturnValue, UAblAbilityContext* K2Node_Event_Context_1, UBP_LeviosoReactionComp_C* CallFunc_AddComponentByClass_ReturnValue);
}; // Size: 0xf0
#pragma pack(pop)
