#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACameraStackActor.hpp"
#include "UBTD_EnemiesNearby_C.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UCameraStackTarget.hpp"
#include "UFunction.hpp"
UBTD_EnemiesNearby_C* UBTD_EnemiesNearby_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/BehaviorTree/Decorators/BTD_EnemiesNearby.BTD_EnemiesNearby_C");
    return (UBTD_EnemiesNearby_C*)res;
}
bool UBTD_EnemiesNearby_C::PerformConditionCheck0(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AnyNPCAwareOfPlayer_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_InCombatMode_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/Camera/BehaviorTree/Decorators/BTD_EnemiesNearby.BTD_EnemiesNearby_C.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
        char pad_9[0x7];
        ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        bool CallFunc_AnyNPCAwareOfPlayer_ReturnValue; // 0x19
        char pad_1a[0x6];
        UCameraStackTarget* CallFunc_GetTarget_ReturnValue; // 0x20
        AActor* CallFunc_GetTargetActor_ReturnValue; // 0x28
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        bool CallFunc_InCombatMode_ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.K2Node_DynamicCast_AsCamera_Stack_Actor = (ACameraStackActor*)K2Node_DynamicCast_AsCamera_Stack_Actor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_AnyNPCAwareOfPlayer_ReturnValue = (bool)CallFunc_AnyNPCAwareOfPlayer_ReturnValue;
    params.CallFunc_GetTarget_ReturnValue = (UCameraStackTarget*)CallFunc_GetTarget_ReturnValue;
    params.CallFunc_GetTargetActor_ReturnValue = (AActor*)CallFunc_GetTargetActor_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_InCombatMode_ReturnValue = (bool)CallFunc_InCombatMode_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
