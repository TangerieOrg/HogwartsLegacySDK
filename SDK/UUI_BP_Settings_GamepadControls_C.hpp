#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UTabPageWidget.hpp"
class UUIManager;
class UPhoenixRichTextBlock;
class UOverlaySlot;
class UVerticalBox;
class UWidgetSwitcher;
class UImage;
class UPhoenixTextBlock;
class UHorizontalBox;
class UObject;
#pragma pack(push, 1)
class UUI_BP_Settings_GamepadControls_C : public UTabPageWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
    UPhoenixRichTextBlock* AccessMapGraphic; // 0x3d0
    UPhoenixRichTextBlock* AccessMapGraphic_1; // 0x3d8
    UPhoenixRichTextBlock* AccessMapGraphic_2; // 0x3e0
    UPhoenixRichTextBlock* AccessMapGraphic_3; // 0x3e8
    UPhoenixRichTextBlock* AccessMapText; // 0x3f0
    UPhoenixRichTextBlock* AccessMapText_1; // 0x3f8
    UPhoenixRichTextBlock* AccessMapText_2; // 0x400
    UPhoenixRichTextBlock* AccessMapText_3; // 0x408
    UPhoenixRichTextBlock* aim; // 0x410
    UVerticalBox* broom_LeftColumn; // 0x418
    UVerticalBox* broom_RightColumn; // 0x420
    UImage* controllerImage; // 0x428
    UWidgetSwitcher* controlSwitcher; // 0x430
    UHorizontalBox* controlTabMenu; // 0x438
    UPhoenixRichTextBlock* DisableLockOnGraphic; // 0x440
    UPhoenixRichTextBlock* DisableLockOnText; // 0x448
    UPhoenixRichTextBlock* DPadDownGraphic_2; // 0x450
    UPhoenixRichTextBlock* DPadDownText; // 0x458
    UPhoenixRichTextBlock* DPadLeftGraphic; // 0x460
    UPhoenixRichTextBlock* DPadLeftGraphic_1; // 0x468
    UPhoenixRichTextBlock* DPadLeftGraphic_2; // 0x470
    UPhoenixRichTextBlock* DPadLeftGraphic_7; // 0x478
    UPhoenixRichTextBlock* DPadLeftText; // 0x480
    UPhoenixRichTextBlock* DPadLeftText_1; // 0x488
    UPhoenixRichTextBlock* DPadLeftText_2; // 0x490
    UPhoenixRichTextBlock* DPadLeftText_7; // 0x498
    UPhoenixRichTextBlock* DPadRightGraphic; // 0x4a0
    UPhoenixRichTextBlock* DPadRightGraphic_1; // 0x4a8
    UPhoenixRichTextBlock* DPadRightGraphic_2; // 0x4b0
    UPhoenixRichTextBlock* DPadRightGraphic_7; // 0x4b8
    UPhoenixRichTextBlock* DPadRightText; // 0x4c0
    UPhoenixRichTextBlock* DPadRightText_1; // 0x4c8
    UPhoenixRichTextBlock* DPadRightText_2; // 0x4d0
    UPhoenixRichTextBlock* DPadRightText_7; // 0x4d8
    UPhoenixRichTextBlock* DPadUpGraphic; // 0x4e0
    UPhoenixRichTextBlock* DPadUpGraphic_2; // 0x4e8
    UPhoenixRichTextBlock* DPadUpText_2; // 0x4f0
    UPhoenixRichTextBlock* FaceButtonBottomGraphic; // 0x4f8
    UPhoenixRichTextBlock* FaceButtonBottomGraphic_2; // 0x500
    UPhoenixRichTextBlock* FaceButtonBottomText; // 0x508
    UPhoenixRichTextBlock* FaceButtonBottomText_2; // 0x510
    UPhoenixRichTextBlock* FaceButtonLeftGraphic; // 0x518
    UPhoenixRichTextBlock* FaceButtonLeftText; // 0x520
    UPhoenixRichTextBlock* FaceButtonRightGraphic; // 0x528
    UPhoenixRichTextBlock* FaceButtonRightGraphic_2; // 0x530
    UPhoenixRichTextBlock* FaceButtonRightGraphic_3; // 0x538
    UPhoenixRichTextBlock* FaceButtonRightText; // 0x540
    UPhoenixRichTextBlock* FaceButtonRightText_2; // 0x548
    UPhoenixRichTextBlock* FaceButtonRightText_3; // 0x550
    UPhoenixRichTextBlock* FaceButtonTopGraphic; // 0x558
    UPhoenixRichTextBlock* FaceButtonTopText1; // 0x560
    UPhoenixRichTextBlock* FaceButtonTopText2; // 0x568
    UPhoenixRichTextBlock* finisherLB; // 0x570
    UPhoenixTextBlock* FinisherPlus; // 0x578
    UPhoenixRichTextBlock* finisherRB; // 0x580
    UPhoenixRichTextBlock* FinisherText; // 0x588
    UVerticalBox* gameplay_LeftColumn; // 0x590
    UVerticalBox* gameplay_RightColumn; // 0x598
    UPhoenixRichTextBlock* LeftBumper; // 0x5a0
    UPhoenixRichTextBlock* LeftBumperText1; // 0x5a8
    UPhoenixRichTextBlock* LeftBumperText2; // 0x5b0
    UPhoenixRichTextBlock* LeftStickClickGraphic_1; // 0x5b8
    UPhoenixRichTextBlock* LeftStickClickText_1; // 0x5c0
    UPhoenixRichTextBlock* LeftTrigger; // 0x5c8
    UPhoenixRichTextBlock* LeftTriggerGraphic_2; // 0x5d0
    UPhoenixRichTextBlock* LeftTriggerGraphic_5; // 0x5d8
    UPhoenixRichTextBlock* LeftTriggerText_2; // 0x5e0
    UPhoenixRichTextBlock* LeftTriggerText_5; // 0x5e8
    UVerticalBox* mountFlying_Left; // 0x5f0
    UVerticalBox* mountFlying_Right; // 0x5f8
    UVerticalBox* mountGroiund_Right; // 0x600
    UVerticalBox* mountGround_Left; // 0x608
    UPhoenixRichTextBlock* MoveCameraGraphic; // 0x610
    UPhoenixRichTextBlock* MoveCameraGraphic_1; // 0x618
    UPhoenixRichTextBlock* MoveCameraGraphic_2; // 0x620
    UPhoenixRichTextBlock* MoveCameraText; // 0x628
    UPhoenixRichTextBlock* MoveCameraText_1; // 0x630
    UPhoenixRichTextBlock* MoveCameraText_2; // 0x638
    UPhoenixRichTextBlock* MoveGraphic; // 0x640
    UPhoenixRichTextBlock* MoveGraphic_1; // 0x648
    UPhoenixRichTextBlock* MoveGraphic_2; // 0x650
    UPhoenixRichTextBlock* MoveGraphic_3; // 0x658
    UPhoenixRichTextBlock* MoveText; // 0x660
    UPhoenixRichTextBlock* MoveText_1; // 0x668
    UPhoenixRichTextBlock* MoveText_2; // 0x670
    UPhoenixRichTextBlock* MoveText_3; // 0x678
    UPhoenixRichTextBlock* OptionsGraphic; // 0x680
    UPhoenixRichTextBlock* OptionsGraphic_1; // 0x688
    UPhoenixRichTextBlock* OptionsGraphic_2; // 0x690
    UPhoenixRichTextBlock* OptionsGraphic_3; // 0x698
    UPhoenixRichTextBlock* OptionsText; // 0x6a0
    UPhoenixRichTextBlock* OptionsText_1; // 0x6a8
    UPhoenixRichTextBlock* OptionsText_2; // 0x6b0
    UPhoenixRichTextBlock* OptionsText_3; // 0x6b8
    UPhoenixRichTextBlock* quickPathSelection; // 0x6c0
    UPhoenixRichTextBlock* quickPathSelection_1; // 0x6c8
    UPhoenixRichTextBlock* RightBumperGraphic; // 0x6d0
    UPhoenixRichTextBlock* RightBumperText; // 0x6d8
    UPhoenixRichTextBlock* RightStickGraphic; // 0x6e0
    UPhoenixRichTextBlock* RightStickText1; // 0x6e8
    UPhoenixRichTextBlock* RightStickText2; // 0x6f0
    UPhoenixRichTextBlock* RightTriggerGraphic; // 0x6f8
    UPhoenixRichTextBlock* RightTriggerGraphic_1; // 0x700
    UPhoenixRichTextBlock* RightTriggerGraphic_2; // 0x708
    UPhoenixRichTextBlock* RightTriggerGraphic_3; // 0x710
    UPhoenixRichTextBlock* RightTriggerGraphic_4; // 0x718
    UPhoenixRichTextBlock* RightTriggerGraphic_5; // 0x720
    UPhoenixRichTextBlock* RightTriggerGraphic_6; // 0x728
    UPhoenixRichTextBlock* RightTriggerGraphic_7; // 0x730
    UPhoenixRichTextBlock* RightTriggerGraphic_8; // 0x738
    UPhoenixRichTextBlock* RightTriggerGraphic_9; // 0x740
    UPhoenixRichTextBlock* RightTriggerGraphic_10; // 0x748
    UPhoenixTextBlock* RightTriggerPlus; // 0x750
    UPhoenixTextBlock* RightTriggerPlus2; // 0x758
    UPhoenixRichTextBlock* RightTriggerText; // 0x760
    UPhoenixRichTextBlock* RightTriggerText_1; // 0x768
    UPhoenixRichTextBlock* RightTriggerText_2; // 0x770
    UPhoenixRichTextBlock* RightTriggerText_10; // 0x778
    UPhoenixRichTextBlock* RightTriggerText1; // 0x780
    UPhoenixRichTextBlock* RightTriggerText2; // 0x788
    UPhoenixRichTextBlock* RightTriggerText3; // 0x790
    UPhoenixTextBlock* schemeTitle; // 0x798
    UPhoenixRichTextBlock* SprintGraphic; // 0x7a0
    UPhoenixRichTextBlock* SprintText; // 0x7a8
    int32_t ControlIndex; // 0x7b0
    char pad_7b4[0x4];
    TArray<FString> ControlSchemeTitles; // 0x7b8
    static UUI_BP_Settings_GamepadControls_C* StaticClass();
    void SetMountFlyingLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
    void SetMountGroundLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
    void SetBroomLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
    void SetGameplayLayout(bool IsSouthpaw, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, FMargin K2Node_MakeStruct_Margin_3, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1);
    void RefreshLayout(bool CallFunc_GetGamepadSouthpaw_ReturnValue);
    void UpdateGamepadImage(bool CallFunc_IsGamepadTypeConnected_ReturnValue, bool CallFunc_IsGamepadTypeConnected_ReturnValue_1, bool CallFunc_IsGamepadTypeConnected_ReturnValue_2, FString CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsGamepadTypeConnected_ReturnValue_3, bool CallFunc_IsSteamRunningOnSteamDeck_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_2, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_3, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_4, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_5, bool CallFunc_AsyncFindIconTexture2D_ReturnValue_6);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SwitchCategories(int32_t Direction, int32_t Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue);
    void InitControlCategories(FString CallFunc_Array_Get_Item);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnInitialized();
    void RefreshButtonCallouts(UObject* Caller);
    void ExecuteUbergraph_UI_BP_Settings_GamepadControls(int32_t EntryPoint);
}; // Size: 0x7c8
#pragma pack(pop)
