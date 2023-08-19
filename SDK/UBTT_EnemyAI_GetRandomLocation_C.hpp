#pragma once
#include <cstdint>
#include "ENPC_Tether.hpp"
#include "FEnemy_CharacterParams.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class UNPC_Component;
class AActor;
class ANPC_Character;
#pragma pack(push, 1)
class UBTT_EnemyAI_GetRandomLocation_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    bool ApplyTether; // 0xb0
    bool OverrideCharacterTetherTypeAnd_Dist; // 0xb1
    char pad_b2[0x2];
    float TetherDistOverride; // 0xb4
    ENPC_Tether TetherTypeOveride; // 0xb8
    char pad_b9[0x7];
    UNPC_Component* NPCComponent; // 0xc0
    FVector StartVec; // 0xc8
    char pad_d4[0x4];
    static UBTT_EnemyAI_GetRandomLocation_C* StaticClass();
    void ReceiveExecute0(AActor* OwnerActor);
    void ReceiveTick0(AActor* OwnerActor, float DeltaSeconds);
    void ExecuteUbergraph_BTT_EnemyAI_GetRandomLocation(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor_1, ANPC_Character* K2Node_DynamicCast_AsNPC_Character_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_UpdateTetheredLoc_OutLoc, bool CallFunc_UpdateTetheredLoc_OutDone, bool CallFunc_UpdateTetheredLoc_ReturnValue, FEnemy_CharacterParams CallFunc_GetCharacterParams_ReturnValue);
}; // Size: 0xd8
#pragma pack(pop)
