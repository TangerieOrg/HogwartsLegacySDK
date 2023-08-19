#pragma once
#include <cstdint>
#include "EUIPlatformInputDevice.hpp"
#include "FGeometry.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UHUDElementGroup.hpp"
class UCanvasPanel;
class UWidgetAnimation;
class UPhoenixRichTextBlock;
class UUIManager;
class UPhoenixTextBlock;
class UScaleBox;
class UImage;
class AActor;
class UBP_EnemyAI_C;
class UObjectStateInfo;
class UCallOutComponent;
class ABiped_Player;
class UWidget;
class UTexture2D;
class UObject;
class UCognitionStimuliSourceComponent;
class UMaterialInstanceDynamic;
class UUMGSequencePlayer;
#pragma pack(push, 1)
class UUI_BP_InteractBlip_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* FadeintoInteract; // 0x2f0
    UPhoenixRichTextBlock* ActionText; // 0x2f8
    UCanvasPanel* Blip; // 0x300
    UPhoenixRichTextBlock* ButtonCallout; // 0x308
    UCanvasPanel* ButtonPrompt; // 0x310
    UPhoenixTextBlock* descriptionText; // 0x318
    UImage* LockBG; // 0x320
    UCanvasPanel* Meter; // 0x328
    UImage* meterBar; // 0x330
    UImage* MissionImage; // 0x338
    UCanvasPanel* NoMeterButton; // 0x340
    UScaleBox* seperator; // 0x348
    UCanvasPanel* SquareMeter; // 0x350
    UImage* squareMeterBar_1; // 0x358
    UImage* TargetBlip; // 0x360
    UImage* TrackBorder; // 0x368
    AActor* ParentActor; // 0x370
    UBP_EnemyAI_C* EnemyAIComponent; // 0x378
    UObjectStateInfo* ObjectStateInfo; // 0x380
    bool Finisher; // 0x388
    char pad_389[0x7];
    UCallOutComponent* CallOutComponent; // 0x390
    ABiped_Player* PlayerPawn; // 0x398
    bool InteractHeld; // 0x3a0
    char pad_3a1[0x3];
    float ChargeTime; // 0x3a4
    float HeldTime; // 0x3a8
    float FadeSpeed; // 0x3ac
    FHermesBPDelegateHandle InteractButtonPressedHandle; // 0x3b0
    FHermesBPDelegateHandle InteractCancelledHandle; // 0x3c0
    FHermesBPDelegateHandle RefreshCalloutsHandle; // 0x3d0
    FHermesBPDelegateHandle ShowButtonsFlagChangedHandle; // 0x3e0
    static UUI_BP_InteractBlip_C* StaticClass();
    UWidget* GetOffscreenIndicator();
    float GetOutroDuration(int32_t OutroType);
    void SetTrackBorderIcon(UTexture2D* LoadedTex, UObject* CallbackObj, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void MeterVisibility(UCognitionStimuliSourceComponent* CogStimSource, bool CallFunc_ShowingKeyboard_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void ShowingKeyboard(bool& Result, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void ShowButtonInfo(bool Condition, bool CallFunc_IsValid_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    FSlateColor GetTextColor(UCognitionStimuliSourceComponent* CognitionStimuliSourceComponent, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue);
    void MissionIcon();
    void ResetMeterBar(FName CallFunc_MakeLiteralName_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
    void ActionSetup(UCognitionStimuliSourceComponent* CallFunc_GetComponentByClass_ReturnValue, FSlateColor CallFunc_GetTextColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FSlateColor CallFunc_GetTextColor_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GameLogicElementEvt_InteractButtonWatcher_Prompt_K2Node_GameLogicBoolResultEvent_0(bool CachedResult);
    void UpdateCallOutUI(FName CharacterID, float BarPercent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent);
    void Construct();
    void Destruct();
    void ShowWidget(bool Revealio);
    void InteractionButtonPressed(UObject* Caller);
    void InteractionCancelled(UObject* Caller);
    void SetIsOffscreenCallout(bool IsOffscreen);
    void SetHasOffscreenProxyActive(bool HasOffscreenProxy);
    void AwareStateInfoChanged(bool bFromUpdate);
    void AttackThreatDataChange(bool Revealio);
    void RefreshButtonCallouts(UObject* Caller);
    void BeaconChanged();
    void ShowButtonGraphicsFlagChanged(UObject* Caller, int32_t int);
    void ExecuteUbergraph_UI_BP_InteractBlip(int32_t EntryPoint);
}; // Size: 0x3f0
#pragma pack(pop)
