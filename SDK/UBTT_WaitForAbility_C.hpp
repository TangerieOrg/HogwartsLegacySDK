#pragma once
#include <cstdint>
#include "EEnemy_Ability.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTT_WaitForAbility_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    float Timeout; // 0xb0
    EEnemy_Ability Ability; // 0xb4
    char pad_b5[0x3];
    static UBTT_WaitForAbility_C* StaticClass();
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute0(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_WaitForAbility(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor_1, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor, bool CallFunc_WaitForAbility_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1);
}; // Size: 0xb8
#pragma pack(pop)
