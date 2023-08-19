#include "UBP_EnemyAI_C.hpp"
#include "UEnemyAIComponent.hpp"
#include "UFunction.hpp"
UBP_EnemyAI_C* UBP_EnemyAI_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BP_EnemyAI.BP_EnemyAI_C");
    return (UBP_EnemyAI_C*)res;
}
void UBP_EnemyAI_C::HitGround_Imp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_EnemyAI.BP_EnemyAI_C.HitGround_Imp"));
    struct Params_HitGround_Imp {
    }; // Size: 0x0
    Params_HitGround_Imp params{};
    ProcessEvent(func, &params);
}
void UBP_EnemyAI_C::LeaveGround_Imp() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BP_EnemyAI.BP_EnemyAI_C.LeaveGround_Imp"));
    struct Params_LeaveGround_Imp {
    }; // Size: 0x0
    Params_LeaveGround_Imp params{};
    ProcessEvent(func, &params);
}
