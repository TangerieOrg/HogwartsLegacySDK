#pragma once
#include <cstdint>
#include "EEnemy_AttackThreatState.hpp"
#include "ENPC_TargetAwareState.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "FWidgetTransform.hpp"
#include "UHUDElementGroup.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UWidgetSwitcher;
class UImage;
class UOverlay;
class AActor;
class UBP_EnemyAI_C;
class UObjectStateInfo;
class UCallOutComponent;
class ABiped_Player;
class UWidget;
class UUMGSequencePlayer;
class UUIManager;
class UObject;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_TargetBlip_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* FadeFinisherOut; // 0x2f0
    UWidgetAnimation* FadeFinisherIn; // 0x2f8
    UWidgetAnimation* ShowFinisher; // 0x300
    UWidgetAnimation* ShowAlertMeter; // 0x308
    UWidgetAnimation* ShowDiscoveredIcon; // 0x310
    UImage* AlertBG; // 0x318
    UImage* Burst; // 0x320
    UImage* DiscoveredIcon; // 0x328
    UImage* FadeDiamond; // 0x330
    UCanvasPanel* FinisherOverlay; // 0x338
    UOverlay* Left_FinisherBumper; // 0x340
    UWidgetSwitcher* LeftSideSwitcher; // 0x348
    UImage* NPC_Alert; // 0x350
    UImage* NPC_Alert_Fill; // 0x358
    UCanvasPanel* NPC_AlertMeterGroup; // 0x360
    UCanvasPanel* NPC_DiscoveredIconGroup; // 0x368
    UOverlay* Overlay_KBM; // 0x370
    UCanvasPanel* ResizeCanvas; // 0x378
    UOverlay* Right_FinisherBumper; // 0x380
    UWidgetSwitcher* RightSideSwitcher; // 0x388
    UImage* TargetBlip; // 0x390
    UOverlay* UsingKBM_Overlay; // 0x398
    AActor* ParentActor; // 0x3a0
    UBP_EnemyAI_C* EnemyAIComponent; // 0x3a8
    ENPC_TargetAwareState AwareState; // 0x3b0
    char pad_3b1[0x7];
    UObjectStateInfo* ObjectStateInfo; // 0x3b8
    UCallOutComponent* CallOutComponent; // 0x3c0
    bool WidgetSetupComplete; // 0x3c8
    bool IsOffscreenWidget; // 0x3c9
    bool FinisherState; // 0x3ca
    char pad_3cb[0x5];
    ABiped_Player* Biped_Player; // 0x3d0
    bool HasOffscreenProxy; // 0x3d8
    bool IsLastTarget; // 0x3d9
    bool IsAnimating; // 0x3da
    char pad_3db[0x5];
    static UUI_BP_TargetBlip_C* StaticClass();
    UWidget* GetOffscreenIndicator();
    float GetOutroDuration(int32_t OutroType);
    void SequenceEvent__ENTRYPOINTUI_BP_TargetBlip_0();
    void UpdateFinisherCallout(bool VisibilityCheck, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void UpdateFinisherText(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, FVector2D K2Node_Select_Default_2, FWidgetTransform K2Node_MakeStruct_WidgetTransform);
    void SetupBipedPlayer(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void SetupCharacterBlip(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility K2Node_Select_Default);
    void SetupCreatureBlip(FName CallFunc_GetDbId_ReturnValue, FName CallFunc_GetActorTeam_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchName_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3);
    void AlertAnimationFinished(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void Callout_TargetSighted(UObject* Object, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void Callout_TargetLost(UObject* Object, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void SetMeterVisibility(bool Visible, bool FromUpdate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void AwareStateChangeHandler(ENPC_TargetAwareState AwareType);
    void AttackStateUpdate(bool Unblockable, bool Revealio, EEnemy_AttackThreatState AttackThreatState, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void InitiateAlert(TArray<FAkExternalSourceInfo>& Temp_struct_Variable);
    void AlertUpdate(FLinearColor Tint_Color_Specified_Color, ESlateVisibility Visibility, bool Temp_bool_Variable, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable, ESlateVisibility K2Node_Select_Default);
    void SenseFloatUpdate(float Sense, bool SenseIsZero, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void AwareStateChange(ENPC_TargetAwareState AlertType, bool FromUpdate, bool DifferentState, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void GameLogicElementEvt_CriticalHealthFinisherTargeting_K2Node_GameLogicBoolResultEvent_0(bool CachedResult);
    void AttackThreatDataChange(bool Revealio);
    void Construct();
    void SetIsOffscreenCallout(bool IsOffscreen);
    void AwareStateInfoChanged(bool bFromUpdate);
    void RefreshButtonCallouts(UObject* Caller);
    void UpdateFinisherState(bool NewState);
    void ShowWidget(bool Revealio);
    void SetHasOffscreenProxyActive(bool HasOffscreenProxy);
    void ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int);
    void SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent);
    void RetargetSameEnemy();
    void UpdateCallOutUI(FName CharacterID, float BarPercent);
    void ExecuteUbergraph_UI_BP_TargetBlip(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5);
}; // Size: 0x3e0
#pragma pack(pop)
