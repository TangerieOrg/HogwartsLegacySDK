#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblReactionAbility.hpp"
class ACharacter;
class UAblAbility;
class UAblAbilityBlueprint;
class UAblAbilityContext;
#pragma pack(push, 1)
class UABL_NPC_RCT_Levioso_Loop_C : public UAblReactionAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xe0
    ACharacter* TempCharRef; // 0xe8
    UAblAbility* NewVar_0; // 0xf0
    UAblAbilityBlueprint* NewVar_1; // 0xf8
    static UABL_NPC_RCT_Levioso_Loop_C* StaticClass();
    void OnAbilityStart(UAblAbilityContext* Context);
    void OnAbilityEnd(UAblAbilityContext* Context);
    void OnAbilityInterrupt(UAblAbilityContext* Context);
    void ExecuteUbergraph_ABL_NPC_RCT_Levioso_Loop(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context, UAblAbilityContext* K2Node_Event_Context_2, UAblAbilityContext* K2Node_Event_Context_1);
}; // Size: 0x100
#pragma pack(pop)
