#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBTService_BlueprintBase.hpp"
class ACreatureFeedingStation;
class ACreature_Character;
class AAIController;
class APawn;
class AActor;
class UCreature_AIComponent;
#pragma pack(push, 1)
class UBTS_Creature_FeedingStationMoveTargetLocation_C : public UBTService_BlueprintBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x98
    FBlackboardKeySelector FeedingStationKey; // 0xa0
    FBlackboardKeySelector MoveTargetLocationKey; // 0xc8
    float ApproachRadiusMultiplier; // 0xf0
    char pad_f4[0x4];
    ACreatureFeedingStation* FeedingStation; // 0xf8
    static UBTS_Creature_FeedingStationMoveTargetLocation_C* StaticClass();
    void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);
    void ExecuteUbergraph_BTS_Creature_FeedingStationMoveTargetLocation(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station, bool K2Node_DynamicCast_bSuccess, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess_1, AAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1, bool K2Node_DynamicCast_bSuccess_2, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, float CallFunc_GetCurrentApproachRadius_ReturnValue, ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station_1, bool K2Node_DynamicCast_bSuccess_3, FTransform CallFunc_GetBestSlotTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_GetRightVector_ReturnValue, AAIController* K2Node_Event_OwnerController_2, APawn* K2Node_Event_ControlledPawn_2, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_2, bool K2Node_DynamicCast_bSuccess_4, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
}; // Size: 0x100
#pragma pack(pop)
