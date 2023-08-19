#include "FOnlineOfferStruct.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2DDynamic.hpp"
#include "UUI_BP_StoreItem_C.hpp"
void UUI_BP_StoreItem_C::OnSuccess_8FD97C734E427BBCD70210B3E71268DF(UTexture2DDynamic* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreItem.UI_BP_StoreItem_C.OnSuccess_8FD97C734E427BBCD70210B3E71268DF"));
    struct Params_OnSuccess_8FD97C734E427BBCD70210B3E71268DF {
        UTexture2DDynamic* Texture; // 0x0
    }; // Size: 0x8
    Params_OnSuccess_8FD97C734E427BBCD70210B3E71268DF params{};
    params.Texture = (UTexture2DDynamic*)Texture;
    ProcessEvent(func, &params);
}
UUI_BP_StoreItem_C* UUI_BP_StoreItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Store/UI_BP_StoreItem.UI_BP_StoreItem_C");
    return (UUI_BP_StoreItem_C*)res;
}
TArray<FString> UUI_BP_StoreItem_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_StoreItem_C::GetImage(FString ImageURL, int32_t SizeX, int32_t SizeY) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreItem.UI_BP_StoreItem_C.GetImage"));
    struct Params_GetImage {
        FString ImageURL; // 0x0
        int32_t SizeX; // 0x10
        int32_t SizeY; // 0x14
    }; // Size: 0x18
    Params_GetImage params{};
    params.ImageURL = (FString)ImageURL;
    params.SizeX = (int32_t)SizeX;
    params.SizeY = (int32_t)SizeY;
    ProcessEvent(func, &params);
}
void UUI_BP_StoreItem_C::OnFail_8FD97C734E427BBCD70210B3E71268DF(UTexture2DDynamic* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreItem.UI_BP_StoreItem_C.OnFail_8FD97C734E427BBCD70210B3E71268DF"));
    struct Params_OnFail_8FD97C734E427BBCD70210B3E71268DF {
        UTexture2DDynamic* Texture; // 0x0
    }; // Size: 0x8
    Params_OnFail_8FD97C734E427BBCD70210B3E71268DF params{};
    params.Texture = (UTexture2DDynamic*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_StoreItem_C::GetOfferId(FString& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreItem.UI_BP_StoreItem_C.GetOfferId"));
    struct Params_GetOfferId {
        FString NewParam; // 0x0
    }; // Size: 0x10
    Params_GetOfferId params{};
    params.NewParam = (FString)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
void UUI_BP_StoreItem_C::SetItemData(FOnlineOfferStruct OnlineOffer, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreItem.UI_BP_StoreItem_C.SetItemData"));
    struct Params_SetItemData {
        FOnlineOfferStruct OnlineOffer; // 0x0
        FString CallFunc_Conv_TextToString_ReturnValue; // 0xc0
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0xd0
    }; // Size: 0xd1
    Params_SetItemData params{};
    params.OnlineOffer = (FOnlineOfferStruct)OnlineOffer;
    params.CallFunc_Conv_TextToString_ReturnValue = (FString)CallFunc_Conv_TextToString_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_StoreItem_C::UpdateImage(FSlateBrush ImageData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreItem.UI_BP_StoreItem_C.UpdateImage"));
    struct Params_UpdateImage {
        FSlateBrush ImageData; // 0x0
    }; // Size: 0x88
    Params_UpdateImage params{};
    params.ImageData = (FSlateBrush)ImageData;
    ProcessEvent(func, &params);
}
void UUI_BP_StoreItem_C::ExecuteUbergraph_UI_BP_StoreItem(int32_t EntryPoint, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {}
