#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "NPC_GameChangerState.hpp"
#include "UBTTask_BlueprintBase.hpp"
class UEnemyAIComponent;
class AEnemy_Character;
class AActor;
class ANPC_Character;
#pragma pack(push, 1)
class UBTT_GameChangerWait_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    UEnemyAIComponent* EnemyAIComponent; // 0xb0
    static UBTT_GameChangerWait_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveAbort(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_GameChangerWait(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, ANPC_Character* CallFunc_GetGameChangerForm_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, NPC_GameChangerState CallFunc_GetGameChangerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
}; // Size: 0xb8
#pragma pack(pop)
