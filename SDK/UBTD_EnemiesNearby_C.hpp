#pragma once
#include <cstdint>
#include "UBTDecorator_BlueprintBase.hpp"
class AActor;
class ACameraStackActor;
class UCameraStackTarget;
class ABiped_Player;
#pragma pack(push, 1)
class UBTD_EnemiesNearby_C : public UBTDecorator_BlueprintBase {
public:
    static UBTD_EnemiesNearby_C* StaticClass();
    bool PerformConditionCheck0(AActor* OwnerActor, ACameraStackActor* K2Node_DynamicCast_AsCamera_Stack_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AnyNPCAwareOfPlayer_ReturnValue, UCameraStackTarget* CallFunc_GetTarget_ReturnValue, AActor* CallFunc_GetTargetActor_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_InCombatMode_ReturnValue);
}; // Size: 0xa0
#pragma pack(pop)
