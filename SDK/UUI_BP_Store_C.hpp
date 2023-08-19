#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FOnlineOfferStruct.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UScreen.hpp"
class UOverlay;
class UWidgetAnimation;
class UPhoenixImage;
class UButton;
class UUIOnlineManager;
class UUI_BP_StoreItem_C;
class UUI_BP_StoreScrollButton_C;
class UUI_BP_Legend_Horizontal_Screen_C;
class UTween;
class UUI_BP_StorePopup_C;
class UPhoenixTextBlock;
class ULegendItem;
class UPopupScreen;
class UUMGSequencePlayer;
class UCanvasPanelSlot;
class UObject;
#pragma pack(push, 1)
class UUI_BP_Store_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UWidgetAnimation* ShowPopup; // 0x378
    UWidgetAnimation* OnItemSelected; // 0x380
    UWidgetAnimation* OutroAnimation; // 0x388
    UWidgetAnimation* IntroAnimation; // 0x390
    UWidgetAnimation* ScrollToPreviousItem; // 0x398
    UWidgetAnimation* ScrollToNextItem; // 0x3a0
    UPhoenixImage* activeFrame; // 0x3a8
    UPhoenixImage* ActiveHighlight; // 0x3b0
    UUI_BP_StoreItem_C* activeItem; // 0x3b8
    UPhoenixImage* frame_L1; // 0x3c0
    UPhoenixImage* frame_R1; // 0x3c8
    UPhoenixImage* highlight_L1; // 0x3d0
    UPhoenixImage* highlight_R1; // 0x3d8
    UUI_BP_StoreItem_C* item_L1; // 0x3e0
    UUI_BP_StoreItem_C* item_L2; // 0x3e8
    UUI_BP_StoreItem_C* item_R1; // 0x3f0
    UUI_BP_StoreItem_C* item_R2; // 0x3f8
    UUI_BP_Legend_Horizontal_Screen_C* LegendBar; // 0x400
    UUI_BP_StoreScrollButton_C* nextButton; // 0x408
    UOverlay* Overlay_Active; // 0x410
    UOverlay* Overlay_L1; // 0x418
    UOverlay* Overlay_L2; // 0x420
    UOverlay* Overlay_R1; // 0x428
    UOverlay* Overlay_R2; // 0x430
    UUI_BP_StoreScrollButton_C* previousButton; // 0x438
    UButton* purchaseButton; // 0x440
    UUI_BP_StorePopup_C* storePopup; // 0x448
    UPhoenixTextBlock* StoreTitle; // 0x450
    int32_t carouselIndex; // 0x458
    char pad_45c[0x4];
    UUI_BP_StoreItem_C* currentStoreItem; // 0x460
    int32_t MaxIndex; // 0x468
    char pad_46c[0x4];
    UTween* menuTween; // 0x470
    bool canTween; // 0x478
    char pad_479[0x3];
    int32_t CurrentDirection; // 0x47c
    ULegendItem* ViewDetailsLegendItem; // 0x480
    int32_t TotalOfferCount; // 0x488
    char pad_48c[0x4];
    TArray<FOnlineOfferStruct> OnlineOfferArray; // 0x490
    UPopupScreen* NetworkDisconnectedPopup; // 0x4a0
    FHermesBPDelegateHandle NetworkChangeHandle; // 0x4a8
    bool isHovering; // 0x4b8
    char pad_4b9[0x7];
    ULegendItem* PreviousLegendItem; // 0x4c0
    ULegendItem* NextLegendItem; // 0x4c8
    bool canPurchaseItem; // 0x4d0
    bool isPopupShowing; // 0x4d1
    bool IsFirstRead; // 0x4d2
    char pad_4d3[0x5];
    ULegendItem* PurchaseLegendItem; // 0x4d8
    static UUI_BP_Store_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_Store_3();
    void SequenceEvent__ENTRYPOINTUI_BP_Store_2();
    void SequenceEvent__ENTRYPOINTUI_BP_Store_1();
    void SequenceEvent__ENTRYPOINTUI_BP_Store_0();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_3, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2);
    void Set_Item_From_Array(int32_t ItemIndex, UUI_BP_StoreItem_C* Item, UOverlay* itemOverlay, FOnlineOfferStruct CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UpdateCarousel(int32_t NewSpellIndex, int32_t TempStartIndex, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, bool Temp_bool_Variable, int32_t Temp_int_Variable_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_RunningWithEpicGamesStore_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_2, int32_t Temp_int_Variable_3, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility K2Node_Select_Default_2, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1);
    void ResetItemsToStandardPosition(UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4);
    void DLCLoaded(UObject* Caller, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_SelectInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_GetPlatformName_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, UUIOnlineManager* CallFunc_Get_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<FOnlineOfferStruct>& CallFunc_GetStoreOffers_Offers, ESlateVisibility K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1);
    void Tween_Finished();
    void Init_Store_Items(TArray<bool> TempOwned, TArray<FString> TempCosts, TArray<FString> TempIDs, TArray<bool>& K2Node_MakeArray_Array, TArray<FString>& K2Node_MakeArray_Array_1, TArray<FString>& K2Node_MakeArray_Array_2, UUIOnlineManager* CallFunc_Get_ReturnValue, FString CallFunc_GetStoreState_StoreState, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void BeginNextScroll();
    void BeginPreviousScroll();
    void ScrollAnimationComplete();
    void Construct();
    void Destruct();
    void NetworkChange(UObject* Caller, int32_t Connected);
    void PopupDismissed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex);
    void BndEvt__UI_BP_Store_previousButton_K2Node_ComponentBoundEvent_5_OnScrollButtonClicked__DelegateSignature();
    void BndEvt__UI_BP_Store_nextButton_K2Node_ComponentBoundEvent_6_OnScrollButtonClicked__DelegateSignature();
    void BndEvt__UI_BP_Store_purchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_BP_Store(int32_t EntryPoint, int32_t Temp_int_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable);
}; // Size: 0x4e0
#pragma pack(pop)
