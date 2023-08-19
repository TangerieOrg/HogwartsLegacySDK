#include "AActor.hpp"
#include "ABP_StupefySpecialSendSpell_C.hpp"
#include "AStupefySpellTool.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAchievementManager.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ABP_StupefySpecialSendSpell_C* ABP_StupefySpecialSendSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C");
    return (ABP_StupefySpecialSendSpell_C*)res;
}
void ABP_StupefySpecialSendSpell_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_StupefySpecialSendSpell_C::OnAffectTarget(AActor* Target, USceneComponent* Component, bool bInTargetAffected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C.OnAffectTarget"));
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
void ABP_StupefySpecialSendSpell_C::ExecuteUbergraph_BP_StupefySpecialSendSpell(int32_t EntryPoint, UAchievementManager* CallFunc_Get_ReturnValue, AActor* K2Node_Event_Target, USceneComponent* K2Node_Event_Component, bool K2Node_Event_bInTargetAffected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefySpecialSendSpell.BP_StupefySpecialSendSpell_C.ExecuteUbergraph_BP_StupefySpecialSendSpell"));
    struct Params_ExecuteUbergraph_BP_StupefySpecialSendSpell {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UAchievementManager* CallFunc_Get_ReturnValue; // 0x8
        AActor* K2Node_Event_Target; // 0x10
        USceneComponent* K2Node_Event_Component; // 0x18
        bool K2Node_Event_bInTargetAffected; // 0x20
    }; // Size: 0x21
    Params_ExecuteUbergraph_BP_StupefySpecialSendSpell params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_Get_ReturnValue = (UAchievementManager*)CallFunc_Get_ReturnValue;
    params.K2Node_Event_Target = (AActor*)K2Node_Event_Target;
    params.K2Node_Event_Component = (USceneComponent*)K2Node_Event_Component;
    params.K2Node_Event_bInTargetAffected = (bool)K2Node_Event_bInTargetAffected;
    ProcessEvent(func, &params);
}
