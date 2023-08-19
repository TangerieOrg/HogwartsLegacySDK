#include "AActor.hpp"
#include "ABP_ConfringoSpell_C.hpp"
#include "ACharacter.hpp"
#include "AConfringoSpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UIncendioComponent.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "UMultiFX2Asset.hpp"
#include "USceneComponent.hpp"
ABP_ConfringoSpell_C* ABP_ConfringoSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Confringo/BP_ConfringoSpell.BP_ConfringoSpell_C");
    return (ABP_ConfringoSpell_C*)res;
}
void ABP_ConfringoSpell_C::OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Confringo/BP_ConfringoSpell.BP_ConfringoSpell_C.OnAffectTarget"));
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
void ABP_ConfringoSpell_C::AddOnFireDoT(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Confringo/BP_ConfringoSpell.BP_ConfringoSpell_C.AddOnFireDoT"));
    struct Params_AddOnFireDoT {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_AddOnFireDoT params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void ABP_ConfringoSpell_C::ExecuteUbergraph_BP_ConfringoSpell(int32_t EntryPoint, AActor* K2Node_Event_Target_1, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected, AActor* K2Node_Event_Target, ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetCharacterActor_ReturnValue, UIncendioComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoDamageOverTime_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Confringo/BP_ConfringoSpell.BP_ConfringoSpell_C.ExecuteUbergraph_BP_ConfringoSpell"));
    struct Params_ExecuteUbergraph_BP_ConfringoSpell {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_Target_1; // 0x8
        USceneComponent* K2Node_Event_Component; // 0x10
        bool K2Node_Event_bInTargetAffected; // 0x18
        char pad_19[0x7];
        AActor* K2Node_Event_Target; // 0x20
        ACharacter* K2Node_DynamicCast_AsCharacter; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        char pad_31[0x7];
        AActor* CallFunc_GetCharacterActor_ReturnValue; // 0x38
        UIncendioComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x40
        bool CallFunc_IsValid_ReturnValue; // 0x48
        bool CallFunc_DoDamageOverTime_ReturnValue; // 0x49
    }; // Size: 0x4a
    Params_ExecuteUbergraph_BP_ConfringoSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Target_1 = (AActor*)K2Node_Event_Target_1;
    params.K2Node_Event_Component = (USceneComponent*)K2Node_Event_Component;
    params.K2Node_Event_bInTargetAffected = (bool)K2Node_Event_bInTargetAffected;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_DynamicCast_AsCharacter = (ACharacter*)K2Node_DynamicCast_AsCharacter;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetCharacterActor_ReturnValue = (AActor*)CallFunc_GetCharacterActor_ReturnValue;
    params.CallFunc_GetComponentByClass_ReturnValue = (UIncendioComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_DoDamageOverTime_ReturnValue = (bool)CallFunc_DoDamageOverTime_ReturnValue;
    ProcessEvent(func, &params);
}
