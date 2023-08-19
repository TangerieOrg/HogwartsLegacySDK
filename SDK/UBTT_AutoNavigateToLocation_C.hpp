#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FTimerHandle.hpp"
#include "FTransform.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AController;
class ASocialTravelerController;
class ABiped_Character;
class UBlackboardComponent;
class UObject;
class UStationComponent;
class AActor;
#pragma pack(push, 1)
class UBTT_AutoNavigateToLocation_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    AController* PlayerController; // 0x158
    ASocialTravelerController* SpawnedTravellerController; // 0x160
    float PlayerCapsuleRadius; // 0x168
    FVector NavLocation; // 0x16c
    FVector NavDirection; // 0x178
    int32_t NavState; // 0x184
    float PathDistance; // 0x188
    char pad_18c[0x4];
    FTimerHandle PathDistanceTimerHandle; // 0x190
    FTimerHandle TimeExpiredHandle; // 0x198
    float JogDistance; // 0x1a0
    float WalkDistance; // 0x1a4
    FGameplayTag LastLeaf; // 0x1a8
    bool Transit; // 0x1b0
    char pad_1b1[0xf];
    FTransform ConnectionTransform; // 0x1c0
    static UBTT_AutoNavigateToLocation_C* StaticClass();
    void StationConnectionTransform(UBlackboardComponent* ActorBlackboard, bool& IsStation, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, int32_t CallFunc_GetValueAsInt_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_GetConnectionStartTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Conv_RotatorToVector_ReturnValue);
    void NavStage_Sprint2Jog(ABiped_Character* BipedCharacter, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    void NavStage_SprintOrJog(ABiped_Character* BipedCharacter);
    void NavStage_Jog2Walk(ABiped_Character* BipedCharacter, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    void NavStage_Final(ABiped_Character* BipedCharacter, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_VSizeXY_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Acos_ReturnValue, float CallFunc_RadiansToDegrees_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void NavStage_Walk(ABiped_Character* BipedCharacter, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_RequestFinished_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecute(AActor* OwnerActor);
    void GetPathDistance();
    void TimeExpired();
    void ExitTask(AActor* OwnerActor);
    void ExecuteUbergraph_BTT_AutoNavigateToLocation(int32_t EntryPoint, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_1, bool CallFunc_StationConnectionTransform_IsStation, AActor* K2Node_Event_OwnerActor_2, float K2Node_Event_DeltaSeconds, ABiped_Character* K2Node_DynamicCast_AsBiped_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, AActor* K2Node_Event_OwnerActor_1, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
}; // Size: 0x1f0
#pragma pack(pop)
