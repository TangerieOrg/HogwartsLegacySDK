#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTT_AttackChooseBTInject_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    static UBTT_AttackChooseBTInject_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_AttackChooseBTInject(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xb0
#pragma pack(pop)
