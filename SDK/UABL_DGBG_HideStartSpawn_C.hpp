#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UAblAbility.hpp"
class UAblAbilityContext;
class UEnemyAIComponent;
class AActor;
class ANPC_Character;
#pragma pack(push, 1)
class UABL_DGBG_HideStartSpawn_C : public UAblAbility {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xc8
    static UABL_DGBG_HideStartSpawn_C* StaticClass();
    void OnAbilityStart0(UAblAbilityContext* Context);
    void OnAbilityBranch0(UAblAbilityContext* Context, UAblAbility* NextAbility);
    void ExecuteUbergraph_ABL_DGBG_HideStartSpawn(int32_t EntryPoint, UAblAbilityContext* K2Node_Event_Context_1, UAblAbilityContext* K2Node_Event_Context, UAblAbility* K2Node_Event_NextAbility, AActor* CallFunc_GetOwner_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, UEnemyAIComponent* CallFunc_GetComponentByClass_ReturnValue);
}; // Size: 0xd0
#pragma pack(pop)
