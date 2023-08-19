#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
class UEnemyAIAttackData;
#pragma pack(push, 1)
class UBTT_ChooseAttack_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_ChooseAttack_C* StaticClass();
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_ChooseAttack(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ChooseAttackUpdate_ReturnValue, bool CallFunc_IsValid_ReturnValue, UEnemyAIAttackData* CallFunc_ChooseAttack_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}; // Size: 0xb0
#pragma pack(pop)
