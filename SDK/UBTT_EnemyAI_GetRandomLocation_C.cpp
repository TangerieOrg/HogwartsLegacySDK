#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "ENPC_Tether.hpp"
#include "FEnemy_CharacterParams.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTT_EnemyAI_GetRandomLocation_C.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
#include "UNPC_Component.hpp"
UBTT_EnemyAI_GetRandomLocation_C* UBTT_EnemyAI_GetRandomLocation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C");
    return (UBTT_EnemyAI_GetRandomLocation_C*)res;
}
void UBTT_EnemyAI_GetRandomLocation_C::ReceiveExecute0(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTT_EnemyAI_GetRandomLocation_C::ReceiveTick0(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTT_EnemyAI_GetRandomLocation_C::ExecuteUbergraph_BTT_EnemyAI_GetRandomLocation(int32_t EntryPoint, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OwnerActor_1, ANPC_Character* K2Node_DynamicCast_AsNPC_Character_1, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_UpdateTetheredLoc_OutLoc, bool CallFunc_UpdateTetheredLoc_OutDone, bool CallFunc_UpdateTetheredLoc_ReturnValue, FEnemy_CharacterParams CallFunc_GetCharacterParams_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/BehaviorTree/Tasks/BTT_EnemyAI_GetRandomLocation.BTT_EnemyAI_GetRandomLocation_C.ExecuteUbergraph_BTT_EnemyAI_GetRandomLocation"));
    struct Params_ExecuteUbergraph_BTT_EnemyAI_GetRandomLocation {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        AActor* K2Node_Event_OwnerActor; // 0x8
        float K2Node_Event_DeltaSeconds; // 0x10
        char pad_14[0x4];
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        char pad_21[0x7];
        AActor* K2Node_Event_OwnerActor_1; // 0x28
        ANPC_Character* K2Node_DynamicCast_AsNPC_Character_1; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        char pad_39[0x3];
        FVector CallFunc_UpdateTetheredLoc_OutLoc; // 0x3c
        bool CallFunc_UpdateTetheredLoc_OutDone; // 0x48
        bool CallFunc_UpdateTetheredLoc_ReturnValue; // 0x49
        char pad_4a[0x6];
        FEnemy_CharacterParams CallFunc_GetCharacterParams_ReturnValue; // 0x50
    }; // Size: 0x4e0
    Params_ExecuteUbergraph_BTT_EnemyAI_GetRandomLocation params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_OwnerActor = (AActor*)K2Node_Event_OwnerActor;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsNPC_Character = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_OwnerActor_1 = (AActor*)K2Node_Event_OwnerActor_1;
    params.K2Node_DynamicCast_AsNPC_Character_1 = (ANPC_Character*)K2Node_DynamicCast_AsNPC_Character_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_UpdateTetheredLoc_OutLoc = (FVector)CallFunc_UpdateTetheredLoc_OutLoc;
    params.CallFunc_UpdateTetheredLoc_OutDone = (bool)CallFunc_UpdateTetheredLoc_OutDone;
    params.CallFunc_UpdateTetheredLoc_ReturnValue = (bool)CallFunc_UpdateTetheredLoc_ReturnValue;
    params.CallFunc_GetCharacterParams_ReturnValue = (FEnemy_CharacterParams)CallFunc_GetCharacterParams_ReturnValue;
    ProcessEvent(func, &params);
}
