#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "UHUDElementGroup.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UUMGSequencePlayer;
class UImage;
class UUI_BP_GoldLeafDivider_C;
class UBorder;
class APlayerController;
#pragma pack(push, 1)
class UUI_BP_Wanted_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* HideWanted; // 0x2f0
    UWidgetAnimation* ShowWanted; // 0x2f8
    UWidgetAnimation* RipplePulse; // 0x300
    UImage* ripple; // 0x308
    UCanvasPanel* ripplePanel; // 0x310
    UUI_BP_GoldLeafDivider_C* UI_BP_GoldLeafDivider; // 0x318
    UBorder* wantedBorder; // 0x320
    static UUI_BP_Wanted_C* StaticClass();
    void StopWanted(bool CallFunc_IsAnimationPlaying_ReturnValue);
    void StartRipple(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ToggleWantedState(bool isWanted);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void RippleRotation(float RotationAngle);
    void ExecuteUbergraph_UI_BP_Wanted(int32_t EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_rotationAngle, APlayerController* CallFunc_GetPlayerController_ReturnValue, FRotator CallFunc_GetCameraRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
}; // Size: 0x328
#pragma pack(pop)
