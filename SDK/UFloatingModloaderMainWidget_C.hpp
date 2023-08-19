#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FSlateColor.hpp"
#include "FSoftObjectPath.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UUserWidget.hpp"
class UVerticalBox;
class UScrollBox;
class UButton;
class UTextBlock;
class UImage;
class UCanvasPanel;
class UEditableText;
class UModLoaderSave_C;
class UModloaderChildWidget_C;
class UPDA_ApparateModManifest_C;
class ULevelStreamingDynamic;
class UCanvasPanelSlot;
class USaveGame;
class UWidget;
#pragma pack(push, 1)
class UFloatingModloaderMainWidget_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UButton* CloseButton; // 0x270
    UTextBlock* CloseText; // 0x278
    UImage* Color; // 0x280
    UCanvasPanel* MainCanvas; // 0x288
    UScrollBox* MainScrollBox; // 0x290
    UButton* MinimizeButton; // 0x298
    UTextBlock* MinimizeText; // 0x2a0
    UButton* ScalingButton; // 0x2a8
    UVerticalBox* ScrollBoxVerticalBox; // 0x2b0
    UEditableText* textBox; // 0x2b8
    UButton* TopWindowButton; // 0x2c0
    FVector2D MousePosition; // 0x2c8
    FVector2D DeltaPosition; // 0x2d0
    bool Minimized_; // 0x2d8
    char pad_2d9[0x3];
    FVector2D MaximizedScale; // 0x2dc
    char pad_2e4[0x4];
    UModLoaderSave_C* ModLoaderSave; // 0x2e8
    int32_t ChildCount; // 0x2f0
    FVector Location; // 0x2f4
    FRotator Rotation; // 0x300
    char pad_30c[0x4];
    UModloaderChildWidget_C* ChildWidget; // 0x310
    float MinimumX; // 0x318
    float MinimumY; // 0x31c
    FKey MenuKey; // 0x320
    bool LoadSuccess; // 0x338
    char pad_339[0x57];
    static UFloatingModloaderMainWidget_C* StaticClass();
    void DoesSetContainArray(TArray<FString>& Array);
    void LoadModsByNames(TArray<void*>& Mods, TArray<FString> ModsStrings, TArray<FString> DisabledMods);
    void LoadManifestForMod(FString ModName, UPDA_ApparateModManifest_C*& Manifest, UPDA_ApparateModManifest_C* CallFunc_SpawnObject_ReturnValue, UPDA_ApparateModManifest_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue);
    void AddChildFunc();
    void PrintToDebug(FString TextToPrint, bool NewWindow_);
    void PrintToModLoader(FString Message);
    void StopPositionTimer();
    void StartPositionTimer();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature();
    void StopScalingTimer();
    void StartScalingTimer();
    void BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void Tick0(FGeometry MyGeometry, float InDeltaTime);
    void Construct0();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ChildrenCountTimer();
    void LoadEvent();
    void CountChildrenEvent();
    void SaveEvent();
    void ShowEvent();
    void KeyboardFocusEvent();
    void BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature();
    void Destruct0();
    void VisibilityToggleEvent();
    void ChildRemovedEvent(ULevelStreamingDynamic* LevelInstance, UModloaderChildWidget_C* CallingWidget);
    void ExecuteUbergraph_FloatingModloaderMainWidget(int32_t EntryPoint, bool Temp_bool_Variable, int32_t CallFunc_RandomInteger_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue_1, FRandomStream CallFunc_MakeRandomStream_ReturnValue, FRandomStream CallFunc_MakeRandomStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, FString K2Node_CustomEvent_Message, FVector2D CallFunc_MakeVector2D_ReturnValue, FString K2Node_CustomEvent_TextToPrint, bool K2Node_CustomEvent_NewWindow_, int32_t Temp_int_Variable, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue, FVector2D CallFunc_GetPosition_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, FVector2D CallFunc_GetSize_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, FVector2D CallFunc_GetSize_ReturnValue_2, FVector2D CallFunc_GetPosition_ReturnValue_1, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_1, FVector2D CallFunc_GetSize_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_GetPosition_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_2, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_3, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, ESlateVisibility Temp_byte_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FSlateColor K2Node_MakeStruct_SlateColor_4, ESlateVisibility Temp_byte_Variable_5, int32_t CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_DoesSaveGameExist_ReturnValue, USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, UModLoaderSave_C* K2Node_DynamicCast_AsMod_Loader_Save, bool K2Node_DynamicCast_bSuccess, UModLoaderSave_C* CallFunc_CreateSaveGameObject_ReturnValue, UFloatingModloaderMainWidget_C* CallFunc_Create_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue_2, UWidget* CallFunc_GetChildAt_ReturnValue, UModloaderChildWidget_C* K2Node_DynamicCast_AsModloader_Child_Widget, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetChildrenCount_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_SaveGameToSlot_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue);
}; // Size: 0x390
#pragma pack(pop)
