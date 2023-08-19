#pragma once
#include <cstdint>
#include "EMountMovementState.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UHUDElementGroup.hpp"
class UExpandableArea;
class UCanvasPanel;
class UWidgetAnimation;
class UUI_BP_LegendItem_C;
class UProgressBar;
class UBorder;
class UMultiLineEditableText;
class UVerticalBox;
class UCreature_MountComponent;
class UUMGSequencePlayer;
class UPhoenixGameSettings;
class ABiped_Player;
class UCharacterStateInfo;
class UUIManager;
class UObjectStateInfo;
class AActor;
class UObject;
#pragma pack(push, 1)
class UUI_BP_MountHUD_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UWidgetAnimation* HideMountHUD; // 0x2f0
    UWidgetAnimation* ShowMountHUD; // 0x2f8
    UWidgetAnimation* ShowMountControls; // 0x300
    UUI_BP_LegendItem_C* AscendDescendCallout; // 0x308
    UBorder* calloutBorder; // 0x310
    UVerticalBox* CalloutsBox; // 0x318
    UProgressBar* ChargeBar; // 0x320
    UUI_BP_LegendItem_C* ChargeCallout; // 0x328
    UCanvasPanel* chargePanel; // 0x330
    UBorder* collapsedCallout; // 0x338
    UMultiLineEditableText* DebugText; // 0x340
    UUI_BP_LegendItem_C* DismountCallout; // 0x348
    UProgressBar* EnabledBar; // 0x350
    UExpandableArea* expandableCallouts; // 0x358
    UProgressBar* healthProgressBar; // 0x360
    UUI_BP_LegendItem_C* HoldGallopCallout; // 0x368
    UUI_BP_LegendItem_C* KeyboardGallopCallout; // 0x370
    UUI_BP_LegendItem_C* KeyboardWalkCallout; // 0x378
    UVerticalBox* MountCallouts; // 0x380
    UUI_BP_LegendItem_C* ToggleGallopCallout; // 0x388
    UCreature_MountComponent* MountComponent; // 0x390
    FString RequestStr; // 0x398
    FString RefillDelayStr; // 0x3a8
    FString AmountStr; // 0x3b8
    bool bShowCharge; // 0x3c8
    char pad_3c9[0x7];
    FHermesBPDelegateHandle ShowControlsHandle; // 0x3d0
    FHermesBPDelegateHandle InputDeviceChangedHandle; // 0x3e0
    bool IsWalking; // 0x3f0
    bool IsUsingKeyboard; // 0x3f1
    char pad_3f2[0x6];
    static UUI_BP_MountHUD_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_MountHUD_1();
    void SequenceEvent__ENTRYPOINTUI_BP_MountHUD_0();
    void MakeHidden();
    void MakeVisible(bool FromSettingsChange, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool CallFunc_GetShowBeastControls_ReturnValue);
    void UpdateVisibilitySetting(bool Show, UCreature_MountComponent* TempMountComp, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, UCharacterStateInfo* CallFunc_GetCharacterStateInfo_ReturnValue, bool CallFunc_IsMounted_ReturnValue);
    void ToggleExpandableCallouts(bool Expand);
    void ConditionallyShowKeyboardCallouts(ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);
    void ShowControls(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
    void SetMountCallouts(bool ShowCharge, EMountMovementState MovementState, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GetEnableKeyboardSprintWalkToggle_ReturnValue, FString CallFunc_SelectString_ReturnValue, FString CallFunc_SelectString_ReturnValue_1, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, FString CallFunc_SelectString_ReturnValue_2, FString CallFunc_SelectString_ReturnValue_3, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, FLegendItemData K2Node_MakeStruct_LegendItemData_5, FLegendItemData K2Node_MakeStruct_LegendItemData_6, FLegendItemData K2Node_MakeStruct_LegendItemData_7, FLegendItemData K2Node_MakeStruct_LegendItemData_8, FLegendItemData K2Node_MakeStruct_LegendItemData_9);
    void SetPlayerHealth(UObjectStateInfo* MountObject, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
    void ChargeAmountUpdate(float ChargeAmountNormalized, bool bChargeAvailable);
    void Hide();
    void Show(UCreature_MountComponent* InMountComponent, bool bShowCharge);
    void UpdateDebugString();
    void ChargeRefillDelayUpdate(float ChargeRefillDelayNormalized);
    void ChangeRequestUpdate(float ChargeRequestNormalized);
    void HealthAmountUpdate(AActor* Target, float InHealthChange, bool bIndicateHUD);
    void ChargeEnabledUpdate(bool bChargeEnabled);
    void MovementStateChanged(UCreature_MountComponent* MountComponent, EMountMovementState PrevMovementState);
    void BroomSaysShowControls(UObject* Caller);
    void RefreshButtonCallouts(UObject* Caller);
    void ExpandCallouts();
    void CollapseCallouts();
    void ExecuteUbergraph_UI_BP_MountHUD(int32_t EntryPoint, float K2Node_CustomEvent_ChargeAmountNormalized, bool K2Node_CustomEvent_bChargeAvailable);
}; // Size: 0x3f8
#pragma pack(pop)
