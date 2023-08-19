#pragma once
#include <cstdint>
#include "EInputDeviceUsed.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FCharacterSaveGameInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UScreen.hpp"
class ASceneRigActor;
class UWidgetAnimation;
class UBTTask_AvaAITree;
class UUI_BP_FastTravelInteraction_Item_C;
class UStationComponent;
class UButton;
class UUI_BP_LegendItem_C;
class UUI_BP_BasicToolTipPopout_C;
class UUIManager;
class UTutorialSystem;
class APlayerController;
class UFastTravelManager;
class UCompanionManager;
class UScheduler;
class USceneRigPlayer;
class UPathNavigationManager;
class UUI_BP_HUD_CompanionSelection_C;
class UObject;
class ABiped_Player;
#pragma pack(push, 1)
class UUI_BP_FastTravelSave_Interaction_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* showFastTravelMenu; // 0x378
    UUI_BP_FastTravelInteraction_Item_C* backItem; // 0x380
    UButton* ClickableBackButton; // 0x388
    UUI_BP_FastTravelInteraction_Item_C* companionItem; // 0x390
    UUI_BP_LegendItem_C* Legend; // 0x398
    UUI_BP_FastTravelInteraction_Item_C* waitItem; // 0x3a0
    UStationComponent* StationComponent; // 0x3a8
    TArray<FStationQueryData> Actions; // 0x3b0
    bool EnteredStation; // 0x3c0
    char pad_3c1[0x7];
    UUI_BP_BasicToolTipPopout_C* Popout; // 0x3c8
    char pad_3d0[0x50];
    bool OnlyLeave; // 0x420
    char pad_421[0x7];
    UBTTask_AvaAITree* AITree; // 0x428
    TArray<UUI_BP_FastTravelInteraction_Item_C*> OptionArray; // 0x430
    int32_t currentOptionIndex; // 0x440
    char pad_444[0x4];
    UUI_BP_FastTravelInteraction_Item_C* currentOptionButton; // 0x448
    int32_t maxOptions; // 0x450
    bool ButtonPressedHere; // 0x454
    bool WaitingTutorialActive; // 0x455
    char pad_456[0x2];
    ASceneRigActor* WaitSceneRigActor; // 0x458
    static UUI_BP_FastTravelSave_Interaction_C* StaticClass();
    void RefreshShouldShowCursor(UUIManager* CallFunc_Get_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void UpdateEnabledOptions(bool CallFunc_AnyOptionsEnabled_OptionsAvailable, int32_t CallFunc_Get_First_Enabled_Option_NumberAvailable, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item);
    void SetWaitEnable(bool WaitEnabled, bool CallFunc_GetMissionComplete_ReturnValue, bool CallFunc_GetMissionComplete_ReturnValue_1, UFastTravelManager* CallFunc_Get_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsWaitEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void AnyOptionsEnabled(bool& OptionsAvailable, int32_t CallFunc_GetNumberOfEnabledButtons_NumberAvailable, bool CallFunc_Greater_IntInt_ReturnValue);
    void Get_First_Enabled_Option(int32_t& NumberAvailable, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsEnabled_Enabled);
    void GetNumberOfEnabledButtons(int32_t& NumberAvailable, int32_t numAvailable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsEnabled_Enabled, bool CallFunc_Less_IntInt_ReturnValue);
    void MoveToPreviousAvailableOption(int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsEnabled_Enabled);
    void MoveToNextAvailableOption(int32_t Temp_int_Variable, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, bool CallFunc_IsEnabled_Enabled, int32_t CallFunc_Add_IntInt_ReturnValue);
    void SelectedOption(UUI_BP_FastTravelInteraction_Item_C* FastTravelButton, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, UCompanionManager* CallFunc_GetCompanionManager_ReturnValue, bool CallFunc_AreSystemicCompanionsDisabled_ReturnValue, FString CallFunc_GetForcedCompanionName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, TArray<FName>& CallFunc_GetUnlockedSystemicCompanions_ReturnValue, FCharacterSaveGameInfo CallFunc_GetCurrentPlayableCharacter_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UScheduler* CallFunc_Get_ReturnValue_1, UPathNavigationManager* CallFunc_Get_ReturnValue_2, bool CallFunc_IsClockStopped_ReturnValue, bool CallFunc_ExecuteSave_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, UUI_BP_HUD_CompanionSelection_C* CallFunc_Create_ReturnValue, USceneRigPlayer* CallFunc_Play_ReturnValue, UUIManager* CallFunc_Get_ReturnValue_3);
    void SetButtonBindings(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_AnyOptionsEnabled_OptionsAvailable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8);
    void PreviousOption(bool CallFunc_AnyOptionsEnabled_OptionsAvailable, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item);
    void NextOption(bool CallFunc_AnyOptionsEnabled_OptionsAvailable, int32_t CallFunc_PostEventAtLocation_ReturnValue, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item);
    void OnButtonHovered(UUI_BP_FastTravelInteraction_Item_C* Button, UUI_BP_FastTravelInteraction_Item_C* CallFunc_Array_Get_Item, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue);
    void Camera(bool Enabled);
    void CleanupandLeaveStation();
    void Construct();
    void Destruct();
    void ClassLoaded0();
    void StationStoryEnded(UObject* Caller);
    void CloseStationInteraction(UObject* Caller);
    void TriggerHint(FString HintKey);
    void ClearHint();
    void RefreshButtonCallouts(UObject* Caller);
    void On_Button_Hovered(UUI_BP_FastTravelInteraction_Item_C* Button);
    void On_Button_Clicked(UUI_BP_FastTravelInteraction_Item_C* Button);
    void BndEvt__UI_BP_FastTravelSave_Interaction_ClickableBackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_FastTravelSave_Interaction(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue);
}; // Size: 0x460
#pragma pack(pop)
