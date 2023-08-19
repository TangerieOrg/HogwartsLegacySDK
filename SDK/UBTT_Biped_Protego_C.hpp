#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class AActor;
class UCurveFloat;
class ABiped_Player;
class AWandTool;
class AController;
class ABiped_PlayerController;
class UGameLogicObject;
class AEnemy_Character;
class ASpellTool;
class UBlackboardComponent;
class UAnimInstance;
class UBiped_AnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_Protego_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool IsSwimming; // 0x158
    bool MovingStick; // 0x159
    bool IsMelee; // 0x15a
    bool RestoreIKState; // 0x15b
    bool SustainedBlast; // 0x15c
    bool inSustainedProtego; // 0x15d
    char pad_15e[0x2];
    FTimerHandle SustainedProtegoTimer; // 0x160
    bool Deflected; // 0x168
    bool Heavy; // 0x169
    bool Perfect; // 0x16a
    bool ReadyToRetaliate; // 0x16b
    bool CanRetaliate; // 0x16c
    char pad_16d[0x3];
    FTimerHandle CameraTimer; // 0x170
    AActor* RetaliateVictim; // 0x178
    FTimerHandle AlreadyDeflectedTimerHandle; // 0x180
    float GameTime; // 0x188
    char pad_18c[0x4];
    static UBTT_Biped_Protego_C* StaticClass();
    void StartParryTimeDilation(bool Temp_bool_Variable, UCurveFloat* Temp_object_Variable, UCurveFloat* Temp_object_Variable_1, UCurveFloat* K2Node_Select_Default);
    void AllowPickNewTarget(float MinTimeInto, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AController* CallFunc_GetController_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameTimeInSeconds_ReturnValue, AActor* CallFunc_GetBestAutoTargetActor_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, AEnemy_Character* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void CameraTimeout();
    void Retaliate(UGameLogicObject* CallFunc_GetHintManagerGameLogicObject_ReturnValue, UGameLogicObject* CallFunc_GetHintManagerGameLogicObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AWandTool* CallFunc_GetWand_ReturnValue, ASpellTool* CallFunc_ActivateSpellTool_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue);
    void SustainedProtegoTimeout(AActor* CallFunc_GetActorOwner_ReturnValue);
    void ResetParryState(UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UBiped_AnimInstance* K2Node_DynamicCast_AsBiped_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
    void SetContexts(bool Flag);
    void ProtegoAbilityAndState(AActor* Actor, FVariantMapHandle VariantMapHandle, bool DestroyVarMap, FVector TargetLocation, bool FromAOE);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_AnimComplete_K2Node_BTCustomActionEvent_5(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_MakeInterruptible_Protego_K2Node_BTCustomActionEvent_4(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_Retaliate_K2Node_BTCustomActionEvent_3(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ProtegoDeflected_K2Node_BTCustomActionEvent_2(FVariantMapHandle VariantMapHandle);
    void CustActionEvt_ProtegoParry_K2Node_BTCustomActionEvent_1(FVariantMapHandle VariantMapHandle);
    void GameLogicElementEvt_TUT_display_StunningSpell_desc2_K2Node_GameLogicBoolResultEvent_0(bool CachedResult);
    void CustActionEvt_ProtegoImpact_K2Node_BTCustomActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void ExitTask(AActor* OwnerActor);
    void ReceiveExecute(AActor* OwnerActor);
    void AlreadyDeflectedTimerExpired();
    void ExecuteUbergraph_BTT_Biped_Protego(int32_t EntryPoint, FVariantMapHandle K2Node_BTCustomActionEvent_VariantMapHandle_3, AActor* CallFunc_GetActorOwner_ReturnValue);
}; // Size: 0x190
#pragma pack(pop)
