#pragma once
#include <cstdint>
#include "ECreatureCageAnimation.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
class AAIController;
class APawn;
class ACreature_Character;
#pragma pack(push, 1)
class UBTD_Creature_CageAnimationType_C : public UBTDecorator_BlueprintBase {
public:
    ECreatureCageAnimation Animation; // 0xa0
    char pad_a1[0x7];
    static UBTD_Creature_CageAnimationType_C* StaticClass();
    bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
}; // Size: 0xa8
#pragma pack(pop)
