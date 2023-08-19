#pragma once
#include <cstdint>
#include "EEnemy_AttackUpdateState.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTService_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTS_AttackUpdateState_C : public UBTService_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x98
    EEnemy_AttackUpdateState AttackUpdateState; // 0xa0
    char pad_a1[0x7];
    static UBTS_AttackUpdateState_C* StaticClass();
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTS_AttackUpdateState(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AttackUpdateStateUpdate_ReturnValue);
}; // Size: 0xa8
#pragma pack(pop)
