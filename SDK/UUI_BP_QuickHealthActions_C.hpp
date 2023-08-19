#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FTimerHandle.hpp"
#include "FVector2D.hpp"
#include "UQuickHealthActions.hpp"
class UCurveFloat;
class UCanvasPanel;
class UWidgetAnimation;
class USizeBox;
class UImage;
class UUI_BP_HealthIncrease_C;
class UProgressBar;
class UPhoenixTextBlock;
class ABiped_Player;
class UObjectStateInfo;
class UExperienceManager;
class UCanvasPanelSlot;
class UObject;
#pragma pack(push, 1)
class UUI_BP_QuickHealthActions_C : public UQuickHealthActions {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x300
    UWidgetAnimation* LowHealthIntro; // 0x308
    UWidgetAnimation* PotionAlert; // 0x310
    UWidgetAnimation* LowHealthEnd; // 0x318
    UWidgetAnimation* LowHealth; // 0x320
    UWidgetAnimation* FullHealth; // 0x328
    UWidgetAnimation* HighlightMeter; // 0x330
    UWidgetAnimation* LevelUpArrows; // 0x338
    UWidgetAnimation* HealthItemFullyRecharged; // 0x340
    UImage* Glow; // 0x348
    UImage* HealthAlertGlow; // 0x350
    UProgressBar* HealthAlertPulse; // 0x358
    UUI_BP_HealthIncrease_C* HealthIncreaseTag; // 0x360
    USizeBox* healthMeterBack; // 0x368
    UImage* Image_98; // 0x370
    UCanvasPanel* LowHealthAlert; // 0x378
    UProgressBar* newHealthBar; // 0x380
    UImage* PotionFresnal; // 0x388
    UCanvasPanel* PotionHighlight; // 0x390
    UPhoenixTextBlock* quickActionCount; // 0x398
    FSlateColor Color_None; // 0x3a0
    FSlateColor Color_Positive; // 0x3c8
    FTimerHandle HealthCooldownTimer; // 0x3f0
    UCurveFloat* CriticalHealth; // 0x3f8
    float HealthMax; // 0x400
    float HealthPercent; // 0x404
    bool IsLowHealth; // 0x408
    char pad_409[0x3];
    int32_t PotionCount; // 0x40c
    bool WasCritical; // 0x410
    char pad_411[0x3];
    FLinearColor HealthBarColor; // 0x414
    bool HasPotion; // 0x424
    char pad_425[0x3];
    float LowHealthPlayAnimationThreshold; // 0x428
    char pad_42c[0x4];
    static UUI_BP_QuickHealthActions_C* StaticClass();
    void CheckCriticalHealth(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHealthCritical_ReturnValue);
    void SetLowHealthWarning(float HealthMax, float HealthPercent, float CallFunc_Multiply_FloatFloat_ReturnValue, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, FVector2D CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void ShowLevelUpAnimation(int32_t NewHealthDelta);
    void OnSetMaxHealth(float NewHealthSize);
    void UpdateHealthBar(float NewPct);
    void TutorialSaysStopHealthHighlight(UObject* Caller);
    void TutorialSaysStartHealthHighlight(UObject* Caller);
    void OnInitialized();
    void LowHealthLoop();
    void Construct();
    void OnLowHealth();
    void DisplayItemCount(int32_t Count);
    void ExecuteUbergraph_UI_BP_QuickHealthActions(int32_t EntryPoint, UExperienceManager* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_GetExperienceLevel_ReturnValue, int32_t CallFunc_GetMaxHealthForLevel_ReturnValue);
}; // Size: 0x430
#pragma pack(pop)
