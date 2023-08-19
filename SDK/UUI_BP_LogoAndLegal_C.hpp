#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UImage;
class UVerticalBox;
class UObject;
class UOverlaySlot;
#pragma pack(push, 1)
class UUI_BP_LogoAndLegal_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UImage* Bink; // 0x270
    UVerticalBox* Content; // 0x278
    UImage* InstaLod; // 0x280
    UImage* Mercuna; // 0x288
    UImage* Oodle; // 0x290
    UImage* SpeedTree; // 0x298
    UImage* UnrealEngine; // 0x2a0
    UImage* Wwise; // 0x2a8
    static UUI_BP_LogoAndLegal_C* StaticClass();
    void AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, float K2Node_MathExpression_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_1, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue_1);
    void OnInitialized0();
    void Construct0();
    void ResolutionSettingsApplied(UObject* Caller);
    void ExecuteUbergraph_UI_BP_LogoAndLegal(int32_t EntryPoint);
}; // Size: 0x2b0
#pragma pack(pop)
