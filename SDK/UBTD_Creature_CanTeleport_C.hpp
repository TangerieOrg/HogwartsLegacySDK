#pragma once
#include <cstdint>
#include "UBTDecorator_BlueprintBase.hpp"
class AAIController;
class APawn;
class ACreature_Character;
class UCreature_PathTeleportComponent;
class AActor;
#pragma pack(push, 1)
class UBTD_Creature_CanTeleport_C : public UBTDecorator_BlueprintBase {
public:
    static UBTD_Creature_CanTeleport_C* StaticClass();
    bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, UCreature_PathTeleportComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    bool PerformConditionCheck(AActor* OwnerActor, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, UCreature_PathTeleportComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}; // Size: 0xa0
#pragma pack(pop)
