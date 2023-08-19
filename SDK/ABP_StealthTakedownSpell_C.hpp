#pragma once
#include <cstdint>
#include "AStupefySpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class AActor;
class UDisillusionmentComponent;
class UAchievementManager;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_StealthTakedownSpell_C : public AStupefySpellTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x8b8
    USceneComponent* DefaultSceneRoot; // 0x8c0
    static ABP_StealthTakedownSpell_C* StaticClass();
    void OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected);
    void OnStart();
    void ExecuteUbergraph_BP_StealthTakedownSpell(int32_t EntryPoint, AActor* CallFunc_GetCharacterActor_ReturnValue, int32_t CallFunc_PostDialogueEventByReference_ReturnValue, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, UAchievementManager* CallFunc_Get_ReturnValue, AActor* CallFunc_GetCharacterActor_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UDisillusionmentComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0x8c8
#pragma pack(pop)
