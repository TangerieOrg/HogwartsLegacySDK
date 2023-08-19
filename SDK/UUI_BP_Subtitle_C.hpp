#pragma once
#include <cstdint>
#include "FAudioDialogueLineData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FVariantMapHandle.hpp"
#include "USubtitles.hpp"
class UClass;
class USubtitleElement;
class UUI_BP_Subtitle_Element_C;
class UWidget;
class UUserWidget;
#pragma pack(push, 1)
class UUI_BP_Subtitle_C : public USubtitles {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x320
    FString Subtitle_Name; // 0x328
    TArray<FString> Subtitle_LineID; // 0x338
    char pad_348[0x18];
    UClass* SubtitleElementClass; // 0x360
    TArray<FString> Effort_LineID; // 0x368
    FString DebugKey; // 0x378
    USubtitleElement* SubtitleElementInstance; // 0x388
    UUI_BP_Subtitle_Element_C* BPSubtitleElementInstance; // 0x390
    UUserWidget* UserWidgetInstance; // 0x398
    FSlateColor SubtitleGray; // 0x3a0
    bool bStandaloneSubtitle; // 0x3c8
    char pad_3c9[0xa7];
    USubtitleElement* RemoveSubtitleElement; // 0x470
    static UUI_BP_Subtitle_C* StaticClass();
    void AddStandaloneSubtitle(FString InputResolvedSubtitle);
    void UpdateStandaloneSubtitle(FString InputResolvedSubtitle, UWidget* CallFunc_GetChildAt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Length_ReturnValue);
    void RemoveAllFromSubtitleBox(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, UWidget* CallFunc_Array_Get_Item, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void Add_Resolved_Subtitle_to_Panel(FAudioDialogueLineData InSubtitleData, FString ResolvedSubtitle, FString TranslatedString);
    void RemovefromSubtitleBox(FAudioDialogueLineData Subtitle, UUI_BP_Subtitle_Element_C* K2Node_DynamicCast_AsUI_BP_Subtitle_Element, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_HasChild_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_HasChild_ReturnValue_1, USubtitleElement* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void OnLoaded_1643F56B420F3870192A8DBF8E43830F(UClass* Loaded);
    void InpActEvt_UMGSkipCinematicOrConversation_K2Node_CustomInputActionEvent_0(FVariantMapHandle VariantMapHandle);
    void Construct();
    void BPAddSubtitleEvent(FAudioDialogueLineData SubtitleData, FString ResolvedSubtitle);
    void BPRemoveSubtitleEvent(FAudioDialogueLineData SubtitleData);
    void BPAddStandaloneSubtitle(FString ResolvedSubtitle);
    void BPRemoveStandaloneSubtitle();
    void BPUpdateStandaloneSubtitle(FString ResolvedSubtitle);
    void ExecuteUbergraph_UI_BP_Subtitle(int32_t EntryPoint, FString K2Node_Event_ResolvedSubtitle, UClass* K2Node_CustomEvent_Loaded, UClass* Temp_class_Variable, FVariantMapHandle K2Node_CustomInputActionEvent_VariantMapHandle);
}; // Size: 0x478
#pragma pack(pop)
