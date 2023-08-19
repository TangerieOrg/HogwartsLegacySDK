#pragma once
#include <cstdint>
#include "EInputDeviceUsed.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FBrewingRecipe.hpp"
#include "FGeometry.hpp"
#include "FInventoryResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UCanvasPanel;
class UPhoenixTextBlock;
class UHorizontalBox;
class UUI_BP_GadgetWheel_StandaloneItem_C;
class UPhoenixRichTextBlock;
class UUIManager;
class UTutorialSystem;
class UUI_BP_GadgetWheelItem_C;
class UBorder;
class UVerticalBox;
class APlayerController;
class UUI_BP_IngredientRequirement_C;
class ABiped_Player;
class UUMGSequencePlayer;
class UHint;
struct FUMGConsolidatedAxisInputData;
#pragma pack(push, 1)
class UUI_BP_GadgetWheel_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* ShowRecipe; // 0x330
    UWidgetAnimation* showDetails; // 0x338
    UWidgetAnimation* OutroAnimation; // 0x340
    UWidgetAnimation* IntroAnimation; // 0x348
    UHorizontalBox* brewDetails; // 0x350
    UPhoenixTextBlock* brewLabel; // 0x358
    UUI_BP_GadgetWheel_StandaloneItem_C* BroomButton; // 0x360
    UPhoenixRichTextBlock* ButtonPrompt; // 0x368
    UBorder* detailsBorder; // 0x370
    UVerticalBox* DurationDetailBox_1; // 0x378
    UPhoenixTextBlock* durationLabel; // 0x380
    UUI_BP_GadgetWheelItem_C* FelixFelicisButton; // 0x388
    UCanvasPanel* FelixFelicisPanel; // 0x390
    UUI_BP_GadgetWheel_StandaloneItem_C* FlyingMountButton; // 0x398
    UUI_BP_GadgetWheel_StandaloneItem_C* GroundMountButton; // 0x3a0
    UUI_BP_IngredientRequirement_C* ingredient1; // 0x3a8
    UUI_BP_IngredientRequirement_C* ingredient2; // 0x3b0
    UUI_BP_IngredientRequirement_C* ingredient3; // 0x3b8
    UVerticalBox* ingredientsList; // 0x3c0
    UUI_BP_GadgetWheelItem_C* ItemBL; // 0x3c8
    UUI_BP_GadgetWheelItem_C* ItemBottom; // 0x3d0
    UUI_BP_GadgetWheelItem_C* ItemBR; // 0x3d8
    UUI_BP_GadgetWheelItem_C* ItemLeft; // 0x3e0
    UPhoenixTextBlock* ItemNameText; // 0x3e8
    UUI_BP_GadgetWheelItem_C* ItemRight; // 0x3f0
    UUI_BP_GadgetWheelItem_C* ItemTL; // 0x3f8
    UUI_BP_GadgetWheelItem_C* ItemTop; // 0x400
    UUI_BP_GadgetWheelItem_C* ItemTR; // 0x408
    UPhoenixTextBlock* potionDuration; // 0x410
    UVerticalBox* potionsInfo; // 0x418
    UBorder* potionsRecipe; // 0x420
    UPhoenixTextBlock* recipeTitle; // 0x428
    UPhoenixRichTextBlock* ReleaseText; // 0x430
    UPhoenixRichTextBlock* StickImage; // 0x438
    UPhoenixTextBlock* Time; // 0x440
    UPhoenixTextBlock* UnlockHintText; // 0x448
    UBorder* WheelBorder; // 0x450
    UCanvasPanel* WheelCanvasPanel; // 0x458
    UPhoenixTextBlock* Yield; // 0x460
    UPhoenixTextBlock* yieldLabel; // 0x468
    float StickDeadZone; // 0x470
    char pad_474[0x4];
    UUI_BP_GadgetWheelItem_C* SelectedWheelItem; // 0x478
    UUI_BP_GadgetWheelItem_C* LastSelectedWheelItem; // 0x480
    TArray<FName> GadgetItems; // 0x488
    TArray<FName> ItemRecipeLocks; // 0x498
    char pad_4a8[0x10];
    TArray<FName> ItemPickupLocks; // 0x4b8
    TArray<UUI_BP_GadgetWheelItem_C*> WheelItemArray; // 0x4c8
    TArray<UUI_BP_GadgetWheel_StandaloneItem_C*> MountItemArray; // 0x4d8
    UUI_BP_GadgetWheel_StandaloneItem_C* SelectedMountItem; // 0x4e8
    bool PlayerOnGround; // 0x4f0
    char pad_4f1[0x57];
    bool DetailsShowing; // 0x548
    char pad_549[0x7];
    TArray<UUI_BP_IngredientRequirement_C*> PotionIngredientArray; // 0x550
    bool RecipeShowing; // 0x560
    char pad_561[0x3];
    float UnselectedTime; // 0x564
    float FFButtonHoldTime; // 0x568
    char pad_56c[0x14];
    bool FelixFelicisAvailable; // 0x580
    char pad_581[0x7];
    static UUI_BP_GadgetWheel_C* StaticClass();
    void CanMountCreature(bool& Result, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EvaluateFilterOnActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void CheckForItemChangeForMenuReader(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void HandleButtonReleased(EUMGInputAction InputAction, bool& Handled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue);
    void DelayedClearHighlight();
    void ShowPotionRecipePanel(FName ItemId, bool& ShowRecipe, bool shouldShowRecipe, FBrewingRecipe TempRecipe, TArray<FBrewingRecipe> TempRecipeArray, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void Update_Lock_Message();
    void SetItemsHoverable(bool EnableHover, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void Unbind_Cursor_Events(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void Confirm_Item_Selection(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
    void Bind_Cursor_Events(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1);
    void Handle_Cursor_Mount_Selection(bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    void Populate_Item_Arrays(TArray<UUI_BP_GadgetWheel_StandaloneItem_C*>& K2Node_MakeArray_Array, TArray<UUI_BP_GadgetWheelItem_C*>& K2Node_MakeArray_Array_1);
    void Set_Active_Item_Text(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_ShowPotionRecipePanel_ShowRecipe, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void Handle_Cursor_Wheel_Selection(bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Handle_Stick_Selection(FVector2D StickVal, float InputPin, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_DegAtan2_ReturnValue, float CallFunc_Abs_ReturnValue_1, UUI_BP_GadgetWheelItem_C* CallFunc_GetItemForAngle_Item, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void Enable_Cursor_if_Required(APlayerController* CallFunc_GetPlayerController_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void ResolveSelectedMountBroom(UUI_BP_GadgetWheel_StandaloneItem_C* SelectedItem, FName HolderID, bool& Success, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_CompleteTutorialStepByAlias_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UHint* CallFunc_GetHint_ReturnValue, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_UseInventoryItemByName_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_CanMountCreature_Result, bool CallFunc_CanMountCreature_Result_1, bool CallFunc_HandleButtonReleased_Handled, bool CallFunc_CanUseBroom_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanUseGraphorn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_CanUseHippogriff_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_ResolveSelectedMountBroom_Success, bool CallFunc_ResolveSelectedMountBroom_Success_1, bool CallFunc_ResolveSelectedMountBroom_Success_2);
    void FindSlottedBroomMountItem(FName HolderID, bool& FoundItem, FName& ItemName, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, int32_t CallFunc_Array_Length_ReturnValue, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
    void SetStandaloneButtonData(bool CallFunc_CanMountCreature_Result, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_FindSlottedBroomMountItem_FoundItem, FName CallFunc_FindSlottedBroomMountItem_ItemName, bool CallFunc_FindSlottedBroomMountItem_FoundItem_1, FName CallFunc_FindSlottedBroomMountItem_ItemName_1, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_FindSlottedBroomMountItem_FoundItem_2, FName CallFunc_FindSlottedBroomMountItem_ItemName_2, bool CallFunc_CanUseHippogriff_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanUseBroom_ReturnValue, bool CallFunc_CanUseGraphorn_ReturnValue, bool CallFunc_CanMountCreature_Result_1, bool CallFunc_BooleanAND_ReturnValue_1);
    void MoveStickImage(FVector2D StickVal, float MaxStickRadius, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, FVector2D CallFunc_ToDirectionAndLength2D_OutDir, float CallFunc_ToDirectionAndLength2D_OutLength, float CallFunc_FMin_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue_1, FVector2D CallFunc_Multiply_Vector2DVector2D_ReturnValue);
    void Resolve_Selected_Wheel_Item(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UseInventoryItemByName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
    void SetWheelData(TArray<UUI_BP_GadgetWheelItem_C*> WheelItems, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetCount_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, bool CallFunc_IsUnlocked_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_2, TArray<UUI_BP_GadgetWheelItem_C*>& K2Node_MakeArray_Array, FName CallFunc_Array_Get_Item_3, int32_t CallFunc_GetCount_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetItemForAngle(float StickAngle, UUI_BP_GadgetWheelItem_C*& Item, UUI_BP_GadgetWheelItem_C* SelectedItem, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_2, bool CallFunc_InRange_FloatFloat_ReturnValue_3, bool CallFunc_InRange_FloatFloat_ReturnValue_4, bool CallFunc_InRange_FloatFloat_ReturnValue_5, bool CallFunc_InRange_FloatFloat_ReturnValue_6);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BlueprintConsolidatedUMGInputAxis(FUMGConsolidatedAxisInputData& AxisInputData);
    void Destruct();
    void HideDetailsComplete();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnResetFFButtonHold();
    void ExecuteUbergraph_UI_BP_GadgetWheel(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable);
    void ResetFFTimer__DelegateSignature();
    void ForceCloseUI__DelegateSignature();
}; // Size: 0x588
#pragma pack(pop)
