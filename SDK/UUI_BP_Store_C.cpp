#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FOnlineOfferStruct.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPopupScreen.hpp"
#include "UScreen.hpp"
#include "UTween.hpp"
#include "UUIOnlineManager.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_StoreItem_C.hpp"
#include "UUI_BP_StorePopup_C.hpp"
#include "UUI_BP_StoreScrollButton_C.hpp"
#include "UUI_BP_Store_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_Store_C::ScrollAnimationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.ScrollAnimationComplete"));
    struct Params_ScrollAnimationComplete {
    }; // Size: 0x0
    Params_ScrollAnimationComplete params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_Store_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_Store_C::SequenceEvent__ENTRYPOINTUI_BP_Store_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Store_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Store_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::Tween_Finished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.Tween Finished"));
    struct Params_Tween_Finished {
    }; // Size: 0x0
    Params_Tween_Finished params{};
    ProcessEvent(func, &params);
}
UUI_BP_Store_C* UUI_BP_Store_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C");
    return (UUI_BP_Store_C*)res;
}
void UUI_BP_Store_C::BndEvt__UI_BP_Store_previousButton_K2Node_ComponentBoundEvent_5_OnScrollButtonClicked__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.BndEvt__UI_BP_Store_previousButton_K2Node_ComponentBoundEvent_5_OnScrollButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Store_previousButton_K2Node_ComponentBoundEvent_5_OnScrollButtonClicked__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Store_previousButton_K2Node_ComponentBoundEvent_5_OnScrollButtonClicked__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::SequenceEvent__ENTRYPOINTUI_BP_Store_3() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_3"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Store_3 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Store_3 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::SequenceEvent__ENTRYPOINTUI_BP_Store_2() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_2"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Store_2 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Store_2 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::Init_Store_Items(TArray<bool> TempOwned, TArray<FString> TempCosts, TArray<FString> TempIDs, TArray<bool>& K2Node_MakeArray_Array, TArray<FString>& K2Node_MakeArray_Array_1, TArray<FString>& K2Node_MakeArray_Array_2, UUIOnlineManager* CallFunc_Get_ReturnValue, FString CallFunc_GetStoreState_StoreState, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.Init Store Items"));
    struct Params_Init_Store_Items {
        TArray<bool> TempOwned; // 0x0
        TArray<FString> TempCosts; // 0x10
        TArray<FString> TempIDs; // 0x20
        TArray<bool> K2Node_MakeArray_Array; // 0x30
        TArray<FString> K2Node_MakeArray_Array_1; // 0x40
        TArray<FString> K2Node_MakeArray_Array_2; // 0x50
        UUIOnlineManager* CallFunc_Get_ReturnValue; // 0x60
        FString CallFunc_GetStoreState_StoreState; // 0x68
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x78
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x79
        bool CallFunc_BooleanOR_ReturnValue; // 0x7a
        bool CallFunc_Not_PreBool_ReturnValue; // 0x7b
    }; // Size: 0x7c
    Params_Init_Store_Items params{};
    params.TempOwned = (TArray<bool>)TempOwned;
    params.TempCosts = (TArray<FString>)TempCosts;
    params.TempIDs = (TArray<FString>)TempIDs;
    params.K2Node_MakeArray_Array = (TArray<bool>)K2Node_MakeArray_Array;
    params.K2Node_MakeArray_Array_1 = (TArray<FString>)K2Node_MakeArray_Array_1;
    params.K2Node_MakeArray_Array_2 = (TArray<FString>)K2Node_MakeArray_Array_2;
    params.CallFunc_Get_ReturnValue = (UUIOnlineManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetStoreState_StoreState = (FString)CallFunc_GetStoreState_StoreState;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    K2Node_MakeArray_Array_1 = params.K2Node_MakeArray_Array_1;
    K2Node_MakeArray_Array_2 = params.K2Node_MakeArray_Array_2;
}
void UUI_BP_Store_C::SequenceEvent__ENTRYPOINTUI_BP_Store_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.SequenceEvent__ENTRYPOINTUI_BP_Store_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Store_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Store_1 params{};
    ProcessEvent(func, &params);
}
bool UUI_BP_Store_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x1c
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x1d
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x1e
        char pad_1f[0x1];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x20
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x28
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x29
    }; // Size: 0x2a
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_Store_C::Set_Item_From_Array(int32_t ItemIndex, UUI_BP_StoreItem_C* Item, UOverlay* itemOverlay, FOnlineOfferStruct CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.Set Item From Array"));
    struct Params_Set_Item_From_Array {
        int32_t ItemIndex; // 0x0
        char pad_4[0x4];
        UUI_BP_StoreItem_C* Item; // 0x8
        UOverlay* itemOverlay; // 0x10
        FOnlineOfferStruct CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0xd8
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0xd9
        bool CallFunc_BooleanAND_ReturnValue; // 0xda
    }; // Size: 0xdb
    Params_Set_Item_From_Array params{};
    params.ItemIndex = (int32_t)ItemIndex;
    params.Item = (UUI_BP_StoreItem_C*)Item;
    params.itemOverlay = (UOverlay*)itemOverlay;
    params.CallFunc_Array_Get_Item = (FOnlineOfferStruct)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::UpdateCarousel(int32_t NewSpellIndex, int32_t TempStartIndex, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, bool Temp_bool_Variable, int32_t Temp_int_Variable_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_RunningWithEpicGamesStore_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, int32_t Temp_int_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility K2Node_Select_Default_2, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.UpdateCarousel"));
    struct Params_UpdateCarousel {
        int32_t NewSpellIndex; // 0x0
        int32_t TempStartIndex; // 0x4
        int32_t Temp_int_Variable; // 0x8
        int32_t Temp_int_Variable_1; // 0xc
        bool Temp_bool_Variable; // 0x10
        char pad_11[0x3];
        int32_t Temp_int_Variable_2; // 0x14
        ESlateVisibility Temp_byte_Variable; // 0x18
        ESlateVisibility Temp_byte_Variable_1; // 0x19
        ESlateVisibility Temp_byte_Variable_2; // 0x1a
        ESlateVisibility Temp_byte_Variable_3; // 0x1b
        bool CallFunc_RunningWithEpicGamesStore_ReturnValue; // 0x1c
        bool CallFunc_BooleanAND_ReturnValue; // 0x1d
        bool Temp_bool_Variable_1; // 0x1e
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x1f
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x20
        ESlateVisibility K2Node_Select_Default; // 0x24
        bool CallFunc_Less_IntInt_ReturnValue; // 0x25
        char pad_26[0x2];
        int32_t CallFunc_Subtract_IntInt_ReturnValue_1; // 0x28
        int32_t CallFunc_Subtract_IntInt_ReturnValue_2; // 0x2c
        int32_t Temp_int_Variable_3; // 0x30
        bool Temp_bool_Variable_2; // 0x34
        ESlateVisibility K2Node_Select_Default_1; // 0x35
        ESlateVisibility Temp_byte_Variable_4; // 0x36
        ESlateVisibility Temp_byte_Variable_5; // 0x37
        ESlateVisibility K2Node_Select_Default_2; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x3c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x40
    }; // Size: 0x44
    Params_UpdateCarousel params{};
    params.NewSpellIndex = (int32_t)NewSpellIndex;
    params.TempStartIndex = (int32_t)TempStartIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.CallFunc_RunningWithEpicGamesStore_ReturnValue = (bool)CallFunc_RunningWithEpicGamesStore_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue_1 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_1;
    params.CallFunc_Subtract_IntInt_ReturnValue_2 = (int32_t)CallFunc_Subtract_IntInt_ReturnValue_2;
    params.Temp_int_Variable_3 = (int32_t)Temp_int_Variable_3;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.Temp_byte_Variable_4 = (ESlateVisibility)Temp_byte_Variable_4;
    params.Temp_byte_Variable_5 = (ESlateVisibility)Temp_byte_Variable_5;
    params.K2Node_Select_Default_2 = (ESlateVisibility)K2Node_Select_Default_2;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::ResetItemsToStandardPosition(UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.ResetItemsToStandardPosition"));
    struct Params_ResetItemsToStandardPosition {
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x0
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1; // 0x8
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2; // 0x10
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3; // 0x18
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4; // 0x20
    }; // Size: 0x28
    Params_ResetItemsToStandardPosition params{};
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_1;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_2;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_3 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_3;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_4 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_4;
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::DLCLoaded(UObject* Caller, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, UUIOnlineManager* CallFunc_Get_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<FOnlineOfferStruct>& CallFunc_GetStoreOffers_Offers, ESlateVisibility K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.DLCLoaded"));
    struct Params_DLCLoaded {
        UObject* Caller; // 0x0
        bool Temp_bool_Variable; // 0x8
        ESlateVisibility Temp_byte_Variable; // 0x9
        ESlateVisibility Temp_byte_Variable_1; // 0xa
        bool Temp_bool_Variable_1; // 0xb
        ESlateVisibility Temp_byte_Variable_2; // 0xc
        ESlateVisibility Temp_byte_Variable_3; // 0xd
        char pad_e[0x2];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        int32_t CallFunc_SelectInt_ReturnValue; // 0x14
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x7];
        FString CallFunc_GetPlatformName_ReturnValue; // 0x20
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_StrStr_ReturnValue_1; // 0x39
        bool CallFunc_BooleanOR_ReturnValue; // 0x3a
        char pad_3b[0x5];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1; // 0x40
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x48
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x50
        char pad_54[0x4];
        UUIOnlineManager* CallFunc_Get_ReturnValue; // 0x58
        bool CallFunc_Less_IntInt_ReturnValue; // 0x60
        char pad_61[0x7];
        TArray<FOnlineOfferStruct> CallFunc_GetStoreOffers_Offers; // 0x68
        ESlateVisibility K2Node_Select_Default; // 0x78
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x79
        ESlateVisibility K2Node_Select_Default_1; // 0x7a
    }; // Size: 0x7b
    Params_DLCLoaded params{};
    params.Caller = (UObject*)Caller;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_SelectInt_ReturnValue = (int32_t)CallFunc_SelectInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_GetPlatformName_ReturnValue = (FString)CallFunc_GetPlatformName_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue_1 = (bool)CallFunc_EqualEqual_StrStr_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIOnlineManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetStoreOffers_Offers = (TArray<FOnlineOfferStruct>)CallFunc_GetStoreOffers_Offers;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
    CallFunc_GetStoreOffers_Offers = params.CallFunc_GetStoreOffers_Offers;
}
void UUI_BP_Store_C::BeginNextScroll() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.BeginNextScroll"));
    struct Params_BeginNextScroll {
    }; // Size: 0x0
    Params_BeginNextScroll params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::BeginPreviousScroll() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.BeginPreviousScroll"));
    struct Params_BeginPreviousScroll {
    }; // Size: 0x0
    Params_BeginPreviousScroll params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::ExecuteUbergraph_UI_BP_Store(int32_t EntryPoint, int32_t Temp_int_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable) {}
void UUI_BP_Store_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::NetworkChange(UObject* Caller, int32_t Connected) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.NetworkChange"));
    struct Params_NetworkChange {
        UObject* Caller; // 0x0
        int32_t Connected; // 0x8
    }; // Size: 0xc
    Params_NetworkChange params{};
    params.Caller = (UObject*)Caller;
    params.Connected = (int32_t)Connected;
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::PopupDismissed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.PopupDismissed"));
    struct Params_PopupDismissed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_PopupDismissed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::BndEvt__UI_BP_Store_nextButton_K2Node_ComponentBoundEvent_6_OnScrollButtonClicked__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.BndEvt__UI_BP_Store_nextButton_K2Node_ComponentBoundEvent_6_OnScrollButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Store_nextButton_K2Node_ComponentBoundEvent_6_OnScrollButtonClicked__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Store_nextButton_K2Node_ComponentBoundEvent_6_OnScrollButtonClicked__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Store_C::BndEvt__UI_BP_Store_purchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_Store.UI_BP_Store_C.BndEvt__UI_BP_Store_purchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Store_purchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_Store_purchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
