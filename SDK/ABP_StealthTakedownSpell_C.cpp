#include "AActor.hpp"
#include "ABP_StealthTakedownSpell_C.hpp"
#include "ABiped_Player.hpp"
#include "AStupefySpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAchievementManager.hpp"
#include "UDisillusionmentComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_StealthTakedownSpell_C* ABP_StealthTakedownSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/StealthTakedown/BP_StealthTakedownSpell.BP_StealthTakedownSpell_C");
    return (ABP_StealthTakedownSpell_C*)res;
}
void ABP_StealthTakedownSpell_C::OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/StealthTakedown/BP_StealthTakedownSpell.BP_StealthTakedownSpell_C.OnAffectTarget"));
    struct Params_OnAffectTarget {
        AActor* Target; // 0x0
        USceneComponent* Component; // 0x8
        bool bInTargetAffected; // 0x10
    }; // Size: 0x11
    Params_OnAffectTarget params{};
    params.Target = (AActor*)Target;
    params.Component = (USceneComponent*)Component;
    params.bInTargetAffected = (bool)bInTargetAffected;
    ProcessEvent(func, &params);
}
void ABP_StealthTakedownSpell_C::OnStart() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/StealthTakedown/BP_StealthTakedownSpell.BP_StealthTakedownSpell_C.OnStart"));
    struct Params_OnStart {
    }; // Size: 0x0
    Params_OnStart params{};
    ProcessEvent(func, &params);
}
void ABP_StealthTakedownSpell_C::ExecuteUbergraph_BP_StealthTakedownSpell(int32_t EntryPoint, AActor* CallFunc_GetCharacterActor_ReturnValue, int32_t CallFunc_PostDialogueEventByReference_ReturnValue, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, UAchievementManager* CallFunc_Get_ReturnValue, AActor* CallFunc_GetCharacterActor_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, UDisillusionmentComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/StealthTakedown/BP_StealthTakedownSpell.BP_StealthTakedownSpell_C.ExecuteUbergraph_BP_StealthTakedownSpell"));
    struct Params_ExecuteUbergraph_BP_StealthTakedownSpell {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* CallFunc_GetCharacterActor_ReturnValue; // 0x8
        int32_t CallFunc_PostDialogueEventByReference_ReturnValue; // 0x10
        char pad_14[0x4];
        AActor* K2Node_Event_Target; // 0x18
        USceneComponent* K2Node_Event_Component; // 0x20
        bool K2Node_Event_bInTargetAffected; // 0x28
        char pad_29[0x7];
        UAchievementManager* CallFunc_Get_ReturnValue; // 0x30
        AActor* CallFunc_GetCharacterActor_ReturnValue_1; // 0x38
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x40
        bool K2Node_DynamicCast_bSuccess; // 0x48
        char pad_49[0x7];
        UDisillusionmentComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x50
        bool CallFunc_IsValid_ReturnValue; // 0x58
    }; // Size: 0x59
    Params_ExecuteUbergraph_BP_StealthTakedownSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetCharacterActor_ReturnValue = (AActor*)CallFunc_GetCharacterActor_ReturnValue;
    params.CallFunc_PostDialogueEventByReference_ReturnValue = (int32_t)CallFunc_PostDialogueEventByReference_ReturnValue;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_Component = (USceneComponent*)K2Node_Event_Component;
    params.K2Node_Event_bInTargetAffected = (bool)K2Node_Event_bInTargetAffected;
    params.CallFunc_Get_ReturnValue = (UAchievementManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetCharacterActor_ReturnValue_1 = (AActor*)CallFunc_GetCharacterActor_ReturnValue_1;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetComponentByClass_ReturnValue = (UDisillusionmentComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
