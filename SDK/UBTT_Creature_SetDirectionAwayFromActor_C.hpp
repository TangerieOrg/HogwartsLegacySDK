#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UBTTask_BlueprintBase.hpp"
class AAIController;
class APawn;
class UCreature_AIComponent;
class UObject;
class AActor;
#pragma pack(push, 1)
class UBTT_Creature_SetDirectionAwayFromActor_C : public UBTTask_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0xa8
    FBlackboardKeySelector TargetActor; // 0xb0
    FBlackboardKeySelector DirectionAwayFromActorOutput; // 0xd8
    static UBTT_Creature_SetDirectionAwayFromActor_C* StaticClass();
    void ReceiveExecuteAI0(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Creature_SetDirectionAwayFromActor(int32_t EntryPoint, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, FVector CallFunc_K2_GetActorLocation_ReturnValue, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Vector_Normal2D_ReturnValue);
}; // Size: 0x100
#pragma pack(pop)
