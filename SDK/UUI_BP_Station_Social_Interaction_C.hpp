#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FEventReply.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UScreen.hpp"
class UStationComponent;
class UVerticalBox;
class APlayerController;
class UUI_BP_BasicToolTipPopout_C;
class AStation;
class UBTTask_AvaAITree;
class UUI_BP_StationInteractButton_C;
struct FPointerEvent;
class UUIManager;
class APawn;
class UObject;
#pragma pack(push, 1)
class UUI_BP_Station_Social_Interaction_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UVerticalBox* OptionBox; // 0x378
    UStationComponent* StationComponent; // 0x380
    TArray<FStationQueryData> Actions; // 0x388
    AStation* Current_Station; // 0x398
    bool EnteredStation; // 0x3a0
    char pad_3a1[0x7];
    UUI_BP_BasicToolTipPopout_C* Popout; // 0x3a8
    char pad_3b0[0x50];
    UBTTask_AvaAITree* AITree; // 0x400
    TArray<UUI_BP_StationInteractButton_C*> OptionArray; // 0x408
    int32_t currentOptionIndex; // 0x418
    char pad_41c[0x4];
    UUI_BP_StationInteractButton_C* currentOptionButton; // 0x420
    int32_t maxOptions; // 0x428
    bool ButtonPressedHere; // 0x42c
    char pad_42d[0x3];
    static UUI_BP_Station_Social_Interaction_C* StaticClass();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent, FEventReply CallFunc_Handled_ReturnValue);
    void PreviousOption(int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t Temp_int_Variable, UUI_BP_StationInteractButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void NextOption(int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t Temp_int_Variable, UUI_BP_StationInteractButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void OnButtonHovered(UUI_BP_StationInteractButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue);
    void Camera(bool Enabled);
    void CleanupandLeaveStation();
    void SelectedButton(UUI_BP_StationInteractButton_C* Button, UUIManager* CallFunc_Get_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue);
    void GetStationOptions(TArray<FStationQueryData>& Actions, FString IconName, FString ButtonText, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable);
    void Construct();
    void Destruct();
    void ClassLoaded0();
    void StationStoryEnded(UObject* Caller);
    void CloseStationInteraction(UObject* Caller);
    void ExecuteUbergraph_UI_BP_Station_Social_Interaction(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller, UUIManager* CallFunc_Get_ReturnValue);
}; // Size: 0x430
#pragma pack(pop)
