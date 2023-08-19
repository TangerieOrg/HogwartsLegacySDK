#include "AAIController.hpp"
#include "AActor.hpp"
#include "ACreatureFeedingStation.hpp"
#include "ACreature_Character.hpp"
#include "APawn.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBTS_Creature_FeedingStationMoveTargetLocation_C.hpp"
#include "UBTService_BlueprintBase.hpp"
#include "UCreature_AIComponent.hpp"
#include "UFunction.hpp"
void UBTS_Creature_FeedingStationMoveTargetLocation_C::ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ReceiveDeactivationAI"));
    struct Params_ReceiveDeactivationAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveDeactivationAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
UBTS_Creature_FeedingStationMoveTargetLocation_C* UBTS_Creature_FeedingStationMoveTargetLocation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C");
    return (UBTS_Creature_FeedingStationMoveTargetLocation_C*)res;
}
void UBTS_Creature_FeedingStationMoveTargetLocation_C::ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ReceiveActivationAI"));
    struct Params_ReceiveActivationAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveActivationAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTS_Creature_FeedingStationMoveTargetLocation_C::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ReceiveTickAI"));
    struct Params_ReceiveTickAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        float DeltaSeconds; // 0x10
    }; // Size: 0x14
    Params_ReceiveTickAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTS_Creature_FeedingStationMoveTargetLocation_C::ExecuteUbergraph_BTS_Creature_FeedingStationMoveTargetLocation(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station, bool K2Node_DynamicCast_bSuccess, AAIController* K2Node_Event_OwnerController, APawn* K2Node_Event_ControlledPawn, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess_1, AAIController* K2Node_Event_OwnerController_1, APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1, bool K2Node_DynamicCast_bSuccess_2, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue, AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, float CallFunc_GetCurrentApproachRadius_ReturnValue, ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station_1, bool K2Node_DynamicCast_bSuccess_3, FTransform CallFunc_GetBestSlotTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_GetRightVector_ReturnValue, AAIController* K2Node_Event_OwnerController_2, APawn* K2Node_Event_ControlledPawn_2, ACreature_Character* K2Node_DynamicCast_AsCreature_Character_2, bool K2Node_DynamicCast_bSuccess_4, UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Creature/BehaviorTree/Services/BTS_Creature_FeedingStationMoveTargetLocation.BTS_Creature_FeedingStationMoveTargetLocation_C.ExecuteUbergraph_BTS_Creature_FeedingStationMoveTargetLocation"));
    struct Params_ExecuteUbergraph_BTS_Creature_FeedingStationMoveTargetLocation {
        int32_t EntryPoint; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x4
        char pad_5[0x3];
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue; // 0x8
        ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        AAIController* K2Node_Event_OwnerController; // 0x20
        APawn* K2Node_Event_ControlledPawn; // 0x28
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x30
        bool K2Node_DynamicCast_bSuccess_1; // 0x38
        char pad_39[0x7];
        AAIController* K2Node_Event_OwnerController_1; // 0x40
        APawn* K2Node_Event_ControlledPawn_1; // 0x48
        float K2Node_Event_DeltaSeconds; // 0x50
        char pad_54[0x4];
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character_1; // 0x58
        bool K2Node_DynamicCast_bSuccess_2; // 0x60
        char pad_61[0x7];
        UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x68
        AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1; // 0x70
        float CallFunc_GetCurrentApproachRadius_ReturnValue; // 0x78
        char pad_7c[0x4];
        ACreatureFeedingStation* K2Node_DynamicCast_AsCreature_Feeding_Station_1; // 0x80
        bool K2Node_DynamicCast_bSuccess_3; // 0x88
        char pad_89[0x7];
        FTransform CallFunc_GetBestSlotTransform_ReturnValue; // 0x90
        FVector CallFunc_BreakTransform_Location; // 0xc0
        FRotator CallFunc_BreakTransform_Rotation; // 0xcc
        FVector CallFunc_BreakTransform_Scale; // 0xd8
        FVector CallFunc_GetRightVector_ReturnValue; // 0xe4
        AAIController* K2Node_Event_OwnerController_2; // 0xf0
        APawn* K2Node_Event_ControlledPawn_2; // 0xf8
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character_2; // 0x100
        bool K2Node_DynamicCast_bSuccess_4; // 0x108
        char pad_109[0x7];
        UCreature_AIComponent* CallFunc_GetComponentByClass_ReturnValue_1; // 0x110
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x118
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x11c
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x128
    }; // Size: 0x134
    Params_ExecuteUbergraph_BTS_Creature_FeedingStationMoveTargetLocation params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_Feeding_Station = (ACreatureFeedingStation*)K2Node_DynamicCast_AsCreature_Feeding_Station;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_Event_OwnerController = (AAIController*)K2Node_Event_OwnerController;
    params.K2Node_Event_ControlledPawn = (APawn*)K2Node_Event_ControlledPawn;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_Event_OwnerController_1 = (AAIController*)K2Node_Event_OwnerController_1;
    params.K2Node_Event_ControlledPawn_1 = (APawn*)K2Node_Event_ControlledPawn_1;
    params.K2Node_Event_DeltaSeconds = (float)K2Node_Event_DeltaSeconds;
    params.K2Node_DynamicCast_AsCreature_Character_1 = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character_1;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_GetComponentByClass_ReturnValue = (UCreature_AIComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetBlackboardValueAsActor_ReturnValue_1 = (AActor*)CallFunc_GetBlackboardValueAsActor_ReturnValue_1;
    params.CallFunc_GetCurrentApproachRadius_ReturnValue = (float)CallFunc_GetCurrentApproachRadius_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_Feeding_Station_1 = (ACreatureFeedingStation*)K2Node_DynamicCast_AsCreature_Feeding_Station_1;
    params.K2Node_DynamicCast_bSuccess_3 = (bool)K2Node_DynamicCast_bSuccess_3;
    params.CallFunc_GetBestSlotTransform_ReturnValue = (FTransform)CallFunc_GetBestSlotTransform_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_GetRightVector_ReturnValue = (FVector)CallFunc_GetRightVector_ReturnValue;
    params.K2Node_Event_OwnerController_2 = (AAIController*)K2Node_Event_OwnerController_2;
    params.K2Node_Event_ControlledPawn_2 = (APawn*)K2Node_Event_ControlledPawn_2;
    params.K2Node_DynamicCast_AsCreature_Character_2 = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character_2;
    params.K2Node_DynamicCast_bSuccess_4 = (bool)K2Node_DynamicCast_bSuccess_4;
    params.CallFunc_GetComponentByClass_ReturnValue_1 = (UCreature_AIComponent*)CallFunc_GetComponentByClass_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    ProcessEvent(func, &params);
}
