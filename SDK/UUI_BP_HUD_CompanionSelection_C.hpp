#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UScreen.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UUI_BP_Legend_Horizontal_Screen_C;
class UUI_BP_LegendBar_C;
class UObject;
class UUI_BP_CompanionSelectionButton_C;
class UMenuCursorWidget;
#pragma pack(push, 1)
class UUI_BP_HUD_CompanionSelection_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* HideCompanionSelection; // 0x378
    UWidgetAnimation* ShowCompanionSelection; // 0x380
    UPhoenixTextBlock* CompanionDisabledText; // 0x388
    UUI_BP_LegendBar_C* Legend; // 0x390
    UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x398
    bool isCompanionLevelShown; // 0x3a0
    char pad_3a1[0x57];
    FName InitialCompanion; // 0x3f8
    FName CurrentCompanion; // 0x400
    TArray<FName> DisabledCompanions; // 0x408
    FName HoveredCompanion; // 0x418
    static UUI_BP_HUD_CompanionSelection_C* StaticClass();
    void UpdateLegend(bool CharacterHovered, bool HoveredCharacterSelected, bool CallFunc_Array_Contains_ReturnValue, FLegendItemData K2Node_MakeStruct_LegendItemData, FLegendItemData K2Node_MakeStruct_LegendItemData_1, TArray<FLegendItemData>& K2Node_MakeArray_Array, TArray<FLegendItemData>& K2Node_MakeArray_Array_1, FLegendItemData K2Node_MakeStruct_LegendItemData_2, FLegendItemData K2Node_MakeStruct_LegendItemData_3, FLegendItemData K2Node_MakeStruct_LegendItemData_4, TArray<FLegendItemData>& K2Node_MakeArray_Array_2, FLegendItemData K2Node_MakeStruct_LegendItemData_5, TArray<FLegendItemData>& K2Node_MakeArray_Array_3);
    void SetCompanionSelectionButton(FName CompanionName, UUI_BP_CompanionSelectionButton_C* CompanionSelectionButton);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void CompanionSelected(UUI_BP_CompanionSelectionButton_C* compButton, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
    void companionUnhovered(UUI_BP_CompanionSelectionButton_C* compButton);
    void CompanionHovered(UUI_BP_CompanionSelectionButton_C* compButton, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
    void Construct();
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroEnded(int32_t IntroType);
    void CompanionLevelShown(UObject* Caller);
    void Destruct();
    void ExecuteUbergraph_UI_BP_HUD_CompanionSelection(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t K2Node_Event_IntroType_1, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType, UMenuCursorWidget* CallFunc_GetCursorWidget_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
}; // Size: 0x420
#pragma pack(pop)
