#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UBTService_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTS_Attack_C : public UBTService_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x98
    static UBTS_Attack_C* StaticClass();
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTS_Attack(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xa0
#pragma pack(pop)
