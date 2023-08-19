#include "ABiped_Player.hpp"
#include "APlayerController.hpp"
#include "EInputDeviceUsed.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FBrewingRecipe.hpp"
#include "FGeometry.hpp"
#include "FInventoryResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHint.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_GadgetWheelItem_C.hpp"
#include "UUI_BP_GadgetWheel_C.hpp"
#include "UUI_BP_GadgetWheel_StandaloneItem_C.hpp"
#include "UUI_BP_IngredientRequirement_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_GadgetWheel_C* UUI_BP_GadgetWheel_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C");
    return (UUI_BP_GadgetWheel_C*)res;
}
void UUI_BP_GadgetWheel_C::CheckForItemChangeForMenuReader(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.CheckForItemChangeForMenuReader"));
    struct Params_CheckForItemChangeForMenuReader {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x1
    }; // Size: 0x2
    Params_CheckForItemChangeForMenuReader params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::Handle_Cursor_Wheel_Selection(bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Handle Cursor Wheel Selection"));
    struct Params_Handle_Cursor_Wheel_Selection {
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        char pad_14[0x4];
        UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        bool CallFunc_IsHovered_ReturnValue; // 0x24
        bool CallFunc_Less_IntInt_ReturnValue; // 0x25
        bool CallFunc_BooleanAND_ReturnValue; // 0x26
    }; // Size: 0x27
    Params_Handle_Cursor_Wheel_Selection params{};
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_GadgetWheelItem_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_IsHovered_ReturnValue = (bool)CallFunc_IsHovered_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::ShowPotionRecipePanel(FName ItemId, bool& ShowRecipe, bool shouldShowRecipe, FBrewingRecipe TempRecipe, TArray<FBrewingRecipe> TempRecipeArray, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1) {}
void UUI_BP_GadgetWheel_C::DelayedClearHighlight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.DelayedClearHighlight"));
    struct Params_DelayedClearHighlight {
    }; // Size: 0x0
    Params_DelayedClearHighlight params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::ForceCloseUI__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ForceCloseUI__DelegateSignature"));
    struct Params_ForceCloseUI__DelegateSignature {
    }; // Size: 0x0
    Params_ForceCloseUI__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::CanMountCreature(bool& Result, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EvaluateFilterOnActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.CanMountCreature"));
    struct Params_CanMountCreature {
        bool Result; // 0x0
        char pad_1[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        bool CallFunc_EvaluateFilterOnActor_ReturnValue; // 0x11
        bool CallFunc_BooleanAND_ReturnValue; // 0x12
    }; // Size: 0x13
    Params_CanMountCreature params{};
    params.Result = (bool)Result;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_EvaluateFilterOnActor_ReturnValue = (bool)CallFunc_EvaluateFilterOnActor_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    Result = params.Result;
}
void UUI_BP_GadgetWheel_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_GadgetWheel_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_GadgetWheel_C::Set_Active_Item_Text(UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_ShowPotionRecipePanel_ShowRecipe, bool CallFunc_EqualEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Set Active Item Text"));
    struct Params_Set_Active_Item_Text {
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_2; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x30
        bool CallFunc_ShowPotionRecipePanel_ShowRecipe; // 0x40
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x41
    }; // Size: 0x42
    Params_Set_Active_Item_Text params{};
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue_2 = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_ShowPotionRecipePanel_ShowRecipe = (bool)CallFunc_ShowPotionRecipePanel_ShowRecipe;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::HandleButtonReleased(EUMGInputAction InputAction, bool& Handled, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.HandleButtonReleased"));
    struct Params_HandleButtonReleased {
        EUMGInputAction InputAction; // 0x0
        bool Handled; // 0x1
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x2
        bool CallFunc_BooleanAND_ReturnValue; // 0x3
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x4
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1; // 0x5
        char pad_6[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
    }; // Size: 0xc
    Params_HandleButtonReleased params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.Handled = (bool)Handled;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
    Handled = params.Handled;
}
void UUI_BP_GadgetWheel_C::Update_Lock_Message() {}
void UUI_BP_GadgetWheel_C::SetItemsHoverable(bool EnableHover, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.SetItemsHoverable"));
    struct Params_SetItemsHoverable {
        bool EnableHover; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0xc
        int32_t Temp_int_Array_Index_Variable_1; // 0x10
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x14
        UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item; // 0x18
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x24
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        char pad_29[0x7];
        UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_1; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x38
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x3c
    }; // Size: 0x3d
    Params_SetItemsHoverable params{};
    params.EnableHover = (bool)EnableHover;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Array_Get_Item = (UUI_BP_GadgetWheel_StandaloneItem_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_GadgetWheelItem_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::FindSlottedBroomMountItem(FName HolderID, bool& FoundItem, FName& ItemName, TArray<FInventoryResult>& CallFunc_GetInventoryTextBP_InventoryResultArray, int32_t CallFunc_Array_Length_ReturnValue, FInventoryResult CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.FindSlottedBroomMountItem"));
    struct Params_FindSlottedBroomMountItem {
        FName HolderID; // 0x0
        bool FoundItem; // 0x8
        char pad_9[0x3];
        FName ItemName; // 0xc
        char pad_14[0x4];
        TArray<FInventoryResult> CallFunc_GetInventoryTextBP_InventoryResultArray; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        char pad_2c[0x4];
        FInventoryResult CallFunc_Array_Get_Item; // 0x30
        bool CallFunc_Greater_IntInt_ReturnValue; // 0xb8
    }; // Size: 0xb9
    Params_FindSlottedBroomMountItem params{};
    params.HolderID = (FName)HolderID;
    params.FoundItem = (bool)FoundItem;
    params.ItemName = (FName)ItemName;
    params.CallFunc_GetInventoryTextBP_InventoryResultArray = (TArray<FInventoryResult>)CallFunc_GetInventoryTextBP_InventoryResultArray;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FInventoryResult)CallFunc_Array_Get_Item;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    FoundItem = params.FoundItem;
    ItemName = params.ItemName;
    CallFunc_GetInventoryTextBP_InventoryResultArray = params.CallFunc_GetInventoryTextBP_InventoryResultArray;
}
void UUI_BP_GadgetWheel_C::Unbind_Cursor_Events(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Unbind Cursor Events"));
    struct Params_Unbind_Cursor_Events {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x10
        char pad_14[0x4];
        UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item; // 0x18
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x24
        bool CallFunc_Less_IntInt_ReturnValue; // 0x28
        char pad_29[0x7];
        UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_1; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x38
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x3c
    }; // Size: 0x3d
    Params_Unbind_Cursor_Events params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Array_Get_Item = (UUI_BP_GadgetWheel_StandaloneItem_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_GadgetWheelItem_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::MoveStickImage(FVector2D StickVal, float MaxStickRadius, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue, FVector2D CallFunc_ToDirectionAndLength2D_OutDir, float CallFunc_ToDirectionAndLength2D_OutLength, float CallFunc_FMin_ReturnValue, FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue_1, FVector2D CallFunc_Multiply_Vector2DVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.MoveStickImage"));
    struct Params_MoveStickImage {
        FVector2D StickVal; // 0x0
        float MaxStickRadius; // 0x8
        FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue; // 0xc
        FVector2D CallFunc_ToDirectionAndLength2D_OutDir; // 0x14
        float CallFunc_ToDirectionAndLength2D_OutLength; // 0x1c
        float CallFunc_FMin_ReturnValue; // 0x20
        FVector2D CallFunc_Multiply_Vector2DFloat_ReturnValue_1; // 0x24
        FVector2D CallFunc_Multiply_Vector2DVector2D_ReturnValue; // 0x2c
    }; // Size: 0x34
    Params_MoveStickImage params{};
    params.StickVal = (FVector2D)StickVal;
    params.MaxStickRadius = (float)MaxStickRadius;
    params.CallFunc_Multiply_Vector2DFloat_ReturnValue = (FVector2D)CallFunc_Multiply_Vector2DFloat_ReturnValue;
    params.CallFunc_ToDirectionAndLength2D_OutDir = (FVector2D)CallFunc_ToDirectionAndLength2D_OutDir;
    params.CallFunc_ToDirectionAndLength2D_OutLength = (float)CallFunc_ToDirectionAndLength2D_OutLength;
    params.CallFunc_FMin_ReturnValue = (float)CallFunc_FMin_ReturnValue;
    params.CallFunc_Multiply_Vector2DFloat_ReturnValue_1 = (FVector2D)CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
    params.CallFunc_Multiply_Vector2DVector2D_ReturnValue = (FVector2D)CallFunc_Multiply_Vector2DVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::Confirm_Item_Selection(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Confirm Item Selection"));
    struct Params_Confirm_Item_Selection {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue_1; // 0x1
        bool CallFunc_BooleanOR_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Confirm_Item_Selection params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::Bind_Cursor_Events(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1) {}
void UUI_BP_GadgetWheel_C::Handle_Cursor_Mount_Selection(bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Handle Cursor Mount Selection"));
    struct Params_Handle_Cursor_Mount_Selection {
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x14
        UUI_BP_GadgetWheel_StandaloneItem_C* CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x20
        bool CallFunc_BooleanAND_ReturnValue; // 0x21
        bool CallFunc_IsHovered_ReturnValue; // 0x22
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x23
    }; // Size: 0x24
    Params_Handle_Cursor_Mount_Selection params{};
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_GadgetWheel_StandaloneItem_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsHovered_ReturnValue = (bool)CallFunc_IsHovered_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::ExecuteUbergraph_UI_BP_GadgetWheel(int32_t EntryPoint, bool Temp_bool_Has_Been_Initd_Variable) {}
void UUI_BP_GadgetWheel_C::Populate_Item_Arrays(TArray<UUI_BP_GadgetWheel_StandaloneItem_C*>& K2Node_MakeArray_Array, TArray<UUI_BP_GadgetWheelItem_C*>& K2Node_MakeArray_Array_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Populate Item Arrays"));
    struct Params_Populate_Item_Arrays {
        TArray<UUI_BP_GadgetWheel_StandaloneItem_C*> K2Node_MakeArray_Array; // 0x0
        TArray<UUI_BP_GadgetWheelItem_C*> K2Node_MakeArray_Array_1; // 0x10
    }; // Size: 0x20
    Params_Populate_Item_Arrays params{};
    params.K2Node_MakeArray_Array = (TArray<UUI_BP_GadgetWheel_StandaloneItem_C*>)K2Node_MakeArray_Array;
    params.K2Node_MakeArray_Array_1 = (TArray<UUI_BP_GadgetWheelItem_C*>)K2Node_MakeArray_Array_1;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
}
void UUI_BP_GadgetWheel_C::Handle_Stick_Selection(FVector2D StickVal, float InputPin, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_DegAtan2_ReturnValue, float CallFunc_Abs_ReturnValue_1, UUI_BP_GadgetWheelItem_C* CallFunc_GetItemForAngle_Item, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Handle Stick Selection"));
    struct Params_Handle_Stick_Selection {
        FVector2D StickVal; // 0x0
        float InputPin; // 0x8
        float CallFunc_BreakVector2D_X; // 0xc
        float CallFunc_BreakVector2D_Y; // 0x10
        bool CallFunc_Less_FloatFloat_ReturnValue; // 0x14
        char pad_15[0x3];
        float CallFunc_Abs_ReturnValue; // 0x18
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x1c
        char pad_1d[0x3];
        float CallFunc_DegAtan2_ReturnValue; // 0x20
        float CallFunc_Abs_ReturnValue_1; // 0x24
        UUI_BP_GadgetWheelItem_C* CallFunc_GetItemForAngle_Item; // 0x28
        bool CallFunc_Greater_FloatFloat_ReturnValue_1; // 0x30
        bool CallFunc_BooleanOR_ReturnValue; // 0x31
        bool Temp_bool_Variable; // 0x32
        char pad_33[0x1];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x34
        ESlateVisibility Temp_byte_Variable; // 0x38
        bool CallFunc_IsValid_ReturnValue; // 0x39
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x3a
        ESlateVisibility Temp_byte_Variable_1; // 0x3b
        ESlateVisibility K2Node_Select_Default; // 0x3c
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x3d
        bool CallFunc_IsValid_ReturnValue_1; // 0x3e
    }; // Size: 0x3f
    Params_Handle_Stick_Selection params{};
    params.StickVal = (FVector2D)StickVal;
    params.InputPin = (float)InputPin;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Less_FloatFloat_ReturnValue = (bool)CallFunc_Less_FloatFloat_ReturnValue;
    params.CallFunc_Abs_ReturnValue = (float)CallFunc_Abs_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_DegAtan2_ReturnValue = (float)CallFunc_DegAtan2_ReturnValue;
    params.CallFunc_Abs_ReturnValue_1 = (float)CallFunc_Abs_ReturnValue_1;
    params.CallFunc_GetItemForAngle_Item = (UUI_BP_GadgetWheelItem_C*)CallFunc_GetItemForAngle_Item;
    params.CallFunc_Greater_FloatFloat_ReturnValue_1 = (bool)CallFunc_Greater_FloatFloat_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::Enable_Cursor_if_Required(APlayerController* CallFunc_GetPlayerController_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Enable Cursor if Required"));
    struct Params_Enable_Cursor_if_Required {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
        UUIManager* CallFunc_Get_ReturnValue; // 0x8
        EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
        bool CallFunc_Not_PreBool_ReturnValue; // 0x12
    }; // Size: 0x13
    Params_Enable_Cursor_if_Required params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetLastUsedInputDevice_ReturnValue = (EInputDeviceUsed)CallFunc_GetLastUsedInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::ResolveSelectedMountBroom(UUI_BP_GadgetWheel_StandaloneItem_C* SelectedItem, FName HolderID, bool& Success, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_CompleteTutorialStepByAlias_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UHint* CallFunc_GetHint_ReturnValue, bool CallFunc_IsValid_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, bool CallFunc_UseInventoryItemByName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ResolveSelectedMountBroom"));
    struct Params_ResolveSelectedMountBroom {
        UUI_BP_GadgetWheel_StandaloneItem_C* SelectedItem; // 0x0
        FName HolderID; // 0x8
        bool Success; // 0x10
        char pad_11[0x7];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x18
        bool CallFunc_CompleteTutorialStepByAlias_ReturnValue; // 0x20
        char pad_21[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x24
        bool CallFunc_Not_PreBool_ReturnValue; // 0x28
        char pad_29[0x7];
        UHint* CallFunc_GetHint_ReturnValue; // 0x30
        bool CallFunc_IsValid_ReturnValue; // 0x38
        char pad_39[0x7];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x40
        bool CallFunc_UseInventoryItemByName_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_ResolveSelectedMountBroom params{};
    params.SelectedItem = (UUI_BP_GadgetWheel_StandaloneItem_C*)SelectedItem;
    params.HolderID = (FName)HolderID;
    params.Success = (bool)Success;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_CompleteTutorialStepByAlias_ReturnValue = (bool)CallFunc_CompleteTutorialStepByAlias_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetHint_ReturnValue = (UHint*)CallFunc_GetHint_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_UseInventoryItemByName_ReturnValue = (bool)CallFunc_UseInventoryItemByName_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
}
bool UUI_BP_GadgetWheel_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_CanMountCreature_Result, bool CallFunc_CanMountCreature_Result_1, bool CallFunc_HandleButtonReleased_Handled, bool CallFunc_CanUseBroom_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanUseGraphorn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_CanUseHippogriff_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_ResolveSelectedMountBroom_Success, bool CallFunc_ResolveSelectedMountBroom_Success_1, bool CallFunc_ResolveSelectedMountBroom_Success_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x3
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x5
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x7
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x9
        bool CallFunc_CanMountCreature_Result; // 0xa
        bool CallFunc_CanMountCreature_Result_1; // 0xb
        bool CallFunc_HandleButtonReleased_Handled; // 0xc
        bool CallFunc_CanUseBroom_ReturnValue; // 0xd
        bool CallFunc_BooleanAND_ReturnValue; // 0xe
        bool CallFunc_CanUseGraphorn_ReturnValue; // 0xf
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x10
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x11
        bool CallFunc_CanUseHippogriff_ReturnValue; // 0x12
        bool CallFunc_BooleanAND_ReturnValue_3; // 0x13
        bool CallFunc_BooleanAND_ReturnValue_4; // 0x14
        bool CallFunc_ResolveSelectedMountBroom_Success; // 0x15
        bool CallFunc_ResolveSelectedMountBroom_Success_1; // 0x16
        bool CallFunc_ResolveSelectedMountBroom_Success_2; // 0x17
    }; // Size: 0x18
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_CanMountCreature_Result = (bool)CallFunc_CanMountCreature_Result;
    params.CallFunc_CanMountCreature_Result_1 = (bool)CallFunc_CanMountCreature_Result_1;
    params.CallFunc_HandleButtonReleased_Handled = (bool)CallFunc_HandleButtonReleased_Handled;
    params.CallFunc_CanUseBroom_ReturnValue = (bool)CallFunc_CanUseBroom_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_CanUseGraphorn_ReturnValue = (bool)CallFunc_CanUseGraphorn_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_CanUseHippogriff_ReturnValue = (bool)CallFunc_CanUseHippogriff_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_3 = (bool)CallFunc_BooleanAND_ReturnValue_3;
    params.CallFunc_BooleanAND_ReturnValue_4 = (bool)CallFunc_BooleanAND_ReturnValue_4;
    params.CallFunc_ResolveSelectedMountBroom_Success = (bool)CallFunc_ResolveSelectedMountBroom_Success;
    params.CallFunc_ResolveSelectedMountBroom_Success_1 = (bool)CallFunc_ResolveSelectedMountBroom_Success_1;
    params.CallFunc_ResolveSelectedMountBroom_Success_2 = (bool)CallFunc_ResolveSelectedMountBroom_Success_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_GadgetWheel_C::BlueprintConsolidatedUMGInputAxis(FUMGConsolidatedAxisInputData& AxisInputData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.BlueprintConsolidatedUMGInputAxis"));
    struct Params_BlueprintConsolidatedUMGInputAxis {
        FUMGConsolidatedAxisInputData AxisInputData; // 0x0
    }; // Size: 0x30
    Params_BlueprintConsolidatedUMGInputAxis params{};
    params.AxisInputData = (FUMGConsolidatedAxisInputData)AxisInputData;
    ProcessEvent(func, &params);
    AxisInputData = params.AxisInputData;
}
void UUI_BP_GadgetWheel_C::SetStandaloneButtonData(bool CallFunc_CanMountCreature_Result, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_FindSlottedBroomMountItem_FoundItem, FName CallFunc_FindSlottedBroomMountItem_ItemName, bool CallFunc_FindSlottedBroomMountItem_FoundItem_1, FName CallFunc_FindSlottedBroomMountItem_ItemName_1, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_FindSlottedBroomMountItem_FoundItem_2, FName CallFunc_FindSlottedBroomMountItem_ItemName_2, bool CallFunc_CanUseHippogriff_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CanUseBroom_ReturnValue, bool CallFunc_CanUseGraphorn_ReturnValue, bool CallFunc_CanMountCreature_Result_1, bool CallFunc_BooleanAND_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.SetStandaloneButtonData"));
    struct Params_SetStandaloneButtonData {
        bool CallFunc_CanMountCreature_Result; // 0x0
        char pad_1[0x3];
        FName CallFunc_MakeLiteralName_ReturnValue; // 0x4
        FName CallFunc_MakeLiteralName_ReturnValue_1; // 0xc
        bool CallFunc_FindSlottedBroomMountItem_FoundItem; // 0x14
        char pad_15[0x3];
        FName CallFunc_FindSlottedBroomMountItem_ItemName; // 0x18
        bool CallFunc_FindSlottedBroomMountItem_FoundItem_1; // 0x20
        char pad_21[0x3];
        FName CallFunc_FindSlottedBroomMountItem_ItemName_1; // 0x24
        FName CallFunc_MakeLiteralName_ReturnValue_2; // 0x2c
        bool CallFunc_FindSlottedBroomMountItem_FoundItem_2; // 0x34
        char pad_35[0x3];
        FName CallFunc_FindSlottedBroomMountItem_ItemName_2; // 0x38
        bool CallFunc_CanUseHippogriff_ReturnValue; // 0x40
        bool CallFunc_BooleanAND_ReturnValue; // 0x41
        bool CallFunc_CanUseBroom_ReturnValue; // 0x42
        bool CallFunc_CanUseGraphorn_ReturnValue; // 0x43
        bool CallFunc_CanMountCreature_Result_1; // 0x44
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x45
    }; // Size: 0x46
    Params_SetStandaloneButtonData params{};
    params.CallFunc_CanMountCreature_Result = (bool)CallFunc_CanMountCreature_Result;
    params.CallFunc_MakeLiteralName_ReturnValue = (FName)CallFunc_MakeLiteralName_ReturnValue;
    params.CallFunc_MakeLiteralName_ReturnValue_1 = (FName)CallFunc_MakeLiteralName_ReturnValue_1;
    params.CallFunc_FindSlottedBroomMountItem_FoundItem = (bool)CallFunc_FindSlottedBroomMountItem_FoundItem;
    params.CallFunc_FindSlottedBroomMountItem_ItemName = (FName)CallFunc_FindSlottedBroomMountItem_ItemName;
    params.CallFunc_FindSlottedBroomMountItem_FoundItem_1 = (bool)CallFunc_FindSlottedBroomMountItem_FoundItem_1;
    params.CallFunc_FindSlottedBroomMountItem_ItemName_1 = (FName)CallFunc_FindSlottedBroomMountItem_ItemName_1;
    params.CallFunc_MakeLiteralName_ReturnValue_2 = (FName)CallFunc_MakeLiteralName_ReturnValue_2;
    params.CallFunc_FindSlottedBroomMountItem_FoundItem_2 = (bool)CallFunc_FindSlottedBroomMountItem_FoundItem_2;
    params.CallFunc_FindSlottedBroomMountItem_ItemName_2 = (FName)CallFunc_FindSlottedBroomMountItem_ItemName_2;
    params.CallFunc_CanUseHippogriff_ReturnValue = (bool)CallFunc_CanUseHippogriff_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_CanUseBroom_ReturnValue = (bool)CallFunc_CanUseBroom_ReturnValue;
    params.CallFunc_CanUseGraphorn_ReturnValue = (bool)CallFunc_CanUseGraphorn_ReturnValue;
    params.CallFunc_CanMountCreature_Result_1 = (bool)CallFunc_CanMountCreature_Result_1;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::Resolve_Selected_Wheel_Item(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UseInventoryItemByName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Resolve Selected Wheel Item"));
    struct Params_Resolve_Selected_Wheel_Item {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0xc
        bool CallFunc_UseInventoryItemByName_ReturnValue; // 0xd
        bool CallFunc_IsValid_ReturnValue_1; // 0xe
        bool CallFunc_Not_PreBool_ReturnValue; // 0xf
    }; // Size: 0x10
    Params_Resolve_Selected_Wheel_Item params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_UseInventoryItemByName_ReturnValue = (bool)CallFunc_UseInventoryItemByName_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::SetWheelData(TArray<UUI_BP_GadgetWheelItem_C*> WheelItems, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetCount_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, bool CallFunc_IsUnlocked_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_2, TArray<UUI_BP_GadgetWheelItem_C*>& K2Node_MakeArray_Array, FName CallFunc_Array_Get_Item_3, int32_t CallFunc_GetCount_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.SetWheelData"));
    struct Params_SetWheelData {
        TArray<UUI_BP_GadgetWheelItem_C*> WheelItems; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        int32_t CallFunc_GetCount_ReturnValue; // 0x1c
        bool CallFunc_IsUnlocked_ReturnValue; // 0x20
        char pad_21[0x3];
        FName CallFunc_Array_Get_Item; // 0x24
        FName CallFunc_Array_Get_Item_1; // 0x2c
        bool CallFunc_IsUnlocked_ReturnValue_1; // 0x34
        bool CallFunc_IsUnlocked_ReturnValue_2; // 0x35
        bool CallFunc_BooleanOR_ReturnValue; // 0x36
        char pad_37[0x1];
        UUI_BP_GadgetWheelItem_C* CallFunc_Array_Get_Item_2; // 0x38
        TArray<UUI_BP_GadgetWheelItem_C*> K2Node_MakeArray_Array; // 0x40
        FName CallFunc_Array_Get_Item_3; // 0x50
        int32_t CallFunc_GetCount_ReturnValue_1; // 0x58
        int32_t CallFunc_Array_Length_ReturnValue; // 0x5c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_SetWheelData params{};
    params.WheelItems = (TArray<UUI_BP_GadgetWheelItem_C*>)WheelItems;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetCount_ReturnValue = (int32_t)CallFunc_GetCount_ReturnValue;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_IsUnlocked_ReturnValue_1 = (bool)CallFunc_IsUnlocked_ReturnValue_1;
    params.CallFunc_IsUnlocked_ReturnValue_2 = (bool)CallFunc_IsUnlocked_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Array_Get_Item_2 = (UUI_BP_GadgetWheelItem_C*)CallFunc_Array_Get_Item_2;
    params.K2Node_MakeArray_Array = (TArray<UUI_BP_GadgetWheelItem_C*>)K2Node_MakeArray_Array;
    params.CallFunc_Array_Get_Item_3 = (FName)CallFunc_Array_Get_Item_3;
    params.CallFunc_GetCount_ReturnValue_1 = (int32_t)CallFunc_GetCount_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
void UUI_BP_GadgetWheel_C::GetItemForAngle(float StickAngle, UUI_BP_GadgetWheelItem_C*& Item, UUI_BP_GadgetWheelItem_C* SelectedItem, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, bool CallFunc_InRange_FloatFloat_ReturnValue_2, bool CallFunc_InRange_FloatFloat_ReturnValue_3, bool CallFunc_InRange_FloatFloat_ReturnValue_4, bool CallFunc_InRange_FloatFloat_ReturnValue_5, bool CallFunc_InRange_FloatFloat_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.GetItemForAngle"));
    struct Params_GetItemForAngle {
        float StickAngle; // 0x0
        char pad_4[0x4];
        UUI_BP_GadgetWheelItem_C* Item; // 0x8
        UUI_BP_GadgetWheelItem_C* SelectedItem; // 0x10
        bool CallFunc_InRange_FloatFloat_ReturnValue; // 0x18
        bool CallFunc_InRange_FloatFloat_ReturnValue_1; // 0x19
        bool CallFunc_InRange_FloatFloat_ReturnValue_2; // 0x1a
        bool CallFunc_InRange_FloatFloat_ReturnValue_3; // 0x1b
        bool CallFunc_InRange_FloatFloat_ReturnValue_4; // 0x1c
        bool CallFunc_InRange_FloatFloat_ReturnValue_5; // 0x1d
        bool CallFunc_InRange_FloatFloat_ReturnValue_6; // 0x1e
    }; // Size: 0x1f
    Params_GetItemForAngle params{};
    params.StickAngle = (float)StickAngle;
    params.Item = (UUI_BP_GadgetWheelItem_C*)Item;
    params.SelectedItem = (UUI_BP_GadgetWheelItem_C*)SelectedItem;
    params.CallFunc_InRange_FloatFloat_ReturnValue = (bool)CallFunc_InRange_FloatFloat_ReturnValue;
    params.CallFunc_InRange_FloatFloat_ReturnValue_1 = (bool)CallFunc_InRange_FloatFloat_ReturnValue_1;
    params.CallFunc_InRange_FloatFloat_ReturnValue_2 = (bool)CallFunc_InRange_FloatFloat_ReturnValue_2;
    params.CallFunc_InRange_FloatFloat_ReturnValue_3 = (bool)CallFunc_InRange_FloatFloat_ReturnValue_3;
    params.CallFunc_InRange_FloatFloat_ReturnValue_4 = (bool)CallFunc_InRange_FloatFloat_ReturnValue_4;
    params.CallFunc_InRange_FloatFloat_ReturnValue_5 = (bool)CallFunc_InRange_FloatFloat_ReturnValue_5;
    params.CallFunc_InRange_FloatFloat_ReturnValue_6 = (bool)CallFunc_InRange_FloatFloat_ReturnValue_6;
    ProcessEvent(func, &params);
    Item = params.Item;
}
void UUI_BP_GadgetWheel_C::HideDetailsComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.HideDetailsComplete"));
    struct Params_HideDetailsComplete {
    }; // Size: 0x0
    Params_HideDetailsComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::OnResetFFButtonHold() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.OnResetFFButtonHold"));
    struct Params_OnResetFFButtonHold {
    }; // Size: 0x0
    Params_OnResetFFButtonHold params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheel_C::ResetFFTimer__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheel.UI_BP_GadgetWheel_C.ResetFFTimer__DelegateSignature"));
    struct Params_ResetFFTimer__DelegateSignature {
    }; // Size: 0x0
    Params_ResetFFTimer__DelegateSignature params{};
    ProcessEvent(func, &params);
}
