#pragma once
#include <cstdint>
#include "EMobilityActionState\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "SocialActionTypes.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UBlackboardComponent;
class UObject;
class UUI_BP_Station_Social_Interaction_C;
class UStationComponent;
class UUIManager;
class AActor;
class APawn;
class USocialReactor;
class ABiped_Player;
class UAnimInstance;
#pragma pack(push, 1)
class UBTT_InteractWithStation_JoinStation_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    EMobilityActionState::Type StartingMobilityActionState; // 0x158
    char pad_159[0x7];
    UObject* StationActor; // 0x160
    UStationComponent* StationComponent; // 0x168
    UUIManager* UIManager; // 0x170
    UUI_BP_Station_Social_Interaction_C* Station_UI; // 0x178
    bool StickPressed; // 0x180
    char pad_181[0x3];
    float DesiredWorldSpeed; // 0x184
    FVector DesiredWorldDirection; // 0x188
    float StickReleasedTime; // 0x194
    float StickMinTime; // 0x198
    char pad_19c[0x4];
    static UBTT_InteractWithStation_JoinStation_C* StaticClass();
    void LeaveStation(FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, AActor* CallFunc_GetActorOwner_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, int32_t CallFunc_GetValueAsInt_ReturnValue, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, FStationQueryData K2Node_MakeStruct_StationQueryData, int32_t CallFunc_InitializeStationInteraction_ReturnValue);
    void InpActEvt_InteractButton_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ResetGate();
    void ExitComplete(UObject* Caller);
    void ExecuteUbergraph_BTT_InteractWithStation_JoinStation(int32_t EntryPoint, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, AActor* K2Node_Event_OwnerActor_1, FName CallFunc_MakeLiteralName_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UStationComponent* K2Node_DynamicCast_AsStation_Component, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_GetValueAsInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, USocialReactor* CallFunc_GetTheSocialReactor_ReturnValue, AActor* K2Node_Event_OwnerActor_2, FName CallFunc_MakeLiteralName_ReturnValue_2, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess_1, FName CallFunc_GetValueAsName_ReturnValue, SocialActionTypes CallFunc_GetSocialActionTypeFromName_ReturnValue, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle, FName CallFunc_MakeLiteralName_ReturnValue_3, FName CallFunc_MakeLiteralName_ReturnValue_4, int32_t CallFunc_GetValueAsInt_ReturnValue_1, int32_t CallFunc_GetValueAsInt_ReturnValue_2, AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, FStationQueryData K2Node_MakeStruct_StationQueryData, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_2, int32_t CallFunc_InitializeStationInteraction_ReturnValue, float CallFunc_GetMoveStickValues_X, float CallFunc_GetMoveStickValues_Y, bool Temp_bool_IsClosed_Variable, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, UObject* K2Node_CustomEvent_Caller, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_5, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
}; // Size: 0x1a0
#pragma pack(pop)
