#pragma once
#include <cstdint>
#include "ERespawnReason.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVariantMapHandle.hpp"
#include "FVector.hpp"
#include "UBTTask_AvaAITree_Input.hpp"
class UBlackboardComponent;
class ABiped_Player;
class AAmbulatory_Character;
class UClass;
class UUIManager;
class AActor;
class AController;
class ABiped_PlayerController;
class UCurveFloat;
class UAnimInstance;
#pragma pack(push, 1)
class UBTT_Biped_Idle_C : public UBTTask_AvaAITree_Input {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x150
    bool StickPressed; // 0x158
    char pad_159[0x3];
    float DesiredWorldSpeed; // 0x15c
    FVector DesiredWorldDirection; // 0x160
    float StickPressMinTime; // 0x16c
    float StickReleaseMinTime; // 0x170
    float StickReleasedTime; // 0x174
    bool StickPressedLoop; // 0x178
    bool StickReleasedLoop; // 0x179
    char pad_17a[0x6];
    static UBTT_Biped_Idle_C* StaticClass();
    void Stop(AAmbulatory_Character* AmbulatoryCharacter);
    void ExecuteWorldStartAbility(ERespawnReason RespawnReason, UClass* AbilityClass, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_GetIsOnAMountOrInTransition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, FString CallFunc_GetPlayerHouse_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchString_CmpSuccess, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboardComponent_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue_1);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_2(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_1(FVariantMapHandle VariantMapHandle);
    void InpActEvt_Move_K2Node_CustomStickInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void ReceiveExecute(AActor* OwnerActor);
    void ExitTask(AActor* OwnerActor);
    void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);
    void LeafNodeSwitchRequested();
    void ExecuteUbergraph_BTT_Biped_Idle(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, AActor* CallFunc_GetActorOwner_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, AActor* CallFunc_GetActorOwner_ReturnValue_1, ABiped_Player* K2Node_DynamicCast_AsBiped_Player_1, bool K2Node_DynamicCast_bSuccess_1, AController* CallFunc_GetController_ReturnValue, ABiped_PlayerController* K2Node_DynamicCast_AsBiped_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetMoveStickValues_X, float CallFunc_GetMoveStickValues_Y, bool CallFunc_GetSpeedCurve_bIgnoreGovernor, UCurveFloat* CallFunc_GetSpeedCurve_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_AllowMove_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
}; // Size: 0x180
#pragma pack(pop)
