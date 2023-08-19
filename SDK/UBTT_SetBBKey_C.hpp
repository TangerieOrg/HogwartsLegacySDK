#pragma once
#include <cstdint>
#include "EEnemy_BBKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AActor;
class AEnemy_Character;
#pragma pack(push, 1)
class UBTT_SetBBKey_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    EEnemy_BBKey Key; // 0xb0
    bool KeyValue; // 0xb1
    char pad_b2[0x6];
    static UBTT_SetBBKey_C* StaticClass();
    void ReceiveExecute(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_SetBBKey(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0xb8
#pragma pack(pop)
