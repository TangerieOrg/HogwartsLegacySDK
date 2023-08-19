#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class UNPC_Component;
class AActor;
class ANPC_Character;
#pragma pack(push, 1)
class UBTT_EnemyAI_OnFireMoveInit_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    UNPC_Component* NPCComponent; // 0xb0
    static UBTT_EnemyAI_OnFireMoveInit_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_EnemyAI_OnFireMoveInit(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InitMoveToOnFire_ReturnValue);
}; // Size: 0xb8
#pragma pack(pop)
