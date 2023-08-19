#pragma once
#include <cstdint>
#include "ECombatParryType.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FGeometry.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCombatParryButtonCallout.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UPhoenixRichTextBlock;
class UPhoenixImage;
class UImage;
class UBorder;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UUI_BP_CombatParry_ButtonCallout_C : public UCombatParryButtonCallout {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x330
    UWidgetAnimation* ResetWidget; // 0x338
    UWidgetAnimation* OutroNeutral; // 0x340
    UWidgetAnimation* OutroSuccess; // 0x348
    UWidgetAnimation* OutroFail; // 0x350
    UWidgetAnimation* NormalTiming; // 0x358
    UWidgetAnimation* PerfectTiming; // 0x360
    UPhoenixRichTextBlock* Button; // 0x368
    UPhoenixImage* ButtonFlame; // 0x370
    UImage* ButtonFrame; // 0x378
    UPhoenixImage* ButtonPulse; // 0x380
    UCanvasPanel* Canvas; // 0x388
    UImage* InitialButtonRing; // 0x390
    UImage* InitialButtonRing_1; // 0x398
    UImage* Ring; // 0x3a0
    UBorder* RingBorder; // 0x3a8
    UImage* ShatterButton; // 0x3b0
    UImage* ShatterButtonFrame; // 0x3b8
    UCanvasPanel* ShatteredPanel; // 0x3c0
    FLinearColor ButtonColor_B; // 0x3c8
    FLinearColor ButtonColor_Circle; // 0x3d8
    FLinearColor ButtonColor_Y; // 0x3e8
    FLinearColor ButtonColor_Triangle; // 0x3f8
    FLinearColor ButtonColor_Keyboard; // 0x408
    ECombatParryType CurrentCombatParryType; // 0x418
    EUIPlatformInputDevice CurrentUIPlatformInputDevice; // 0x419
    bool CanTweakFrame; // 0x41a
    char pad_41b[0x1];
    float ParryTimeProgress; // 0x41c
    bool CanPlayPerfectTiming; // 0x420
    char pad_421[0x3];
    FLinearColor Protego_Edge; // 0x424
    FLinearColor Protego_Center; // 0x434
    FLinearColor Dodge_Edge; // 0x444
    FLinearColor Dodge_Center; // 0x454
    char pad_464[0x4];
    static UUI_BP_CombatParry_ButtonCallout_C* StaticClass();
    void Refresh_Platform_Specific_Button(UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
    void BlueprintSetPerfectTimingState0(bool bPerfectTiming);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnInputDeviceChanged0();
    void OnIntroEnded(int32_t IntroType);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BlueprintSetParryType0(ECombatParryType ParryType);
    void Construct();
    void ExecuteUbergraph_UI_BP_CombatParry_ButtonCallout(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32_t K2Node_Event_OutroType, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, int32_t K2Node_Event_IntroType, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float K2Node_MathExpression_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, ECombatParryType K2Node_Event_ParryType, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_bPerfectTiming, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_6);
}; // Size: 0x468
#pragma pack(pop)
