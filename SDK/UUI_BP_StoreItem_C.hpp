#pragma once
#include <cstdint>
#include "FOnlineOfferStruct.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixImage;
class UPhoenixTextBlock;
class UImage;
class UHorizontalBox;
class UTexture2DDynamic;
#pragma pack(push, 1)
class UUI_BP_StoreItem_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixImage* detailsDivider; // 0x330
    UPhoenixTextBlock* ItemCost; // 0x338
    UPhoenixTextBlock* itemTitle; // 0x340
    UHorizontalBox* lockedPanel_1; // 0x348
    UPhoenixTextBlock* lockedText; // 0x350
    UPhoenixTextBlock* ownedText; // 0x358
    UImage* storeItemImage; // 0x360
    FOnlineOfferStruct OfferInfo; // 0x368
    bool canPurchase; // 0x428
    char pad_429[0x7];
    static UUI_BP_StoreItem_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void GetOfferId(FString& NewParam);
    void SetItemData(FOnlineOfferStruct OnlineOffer, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
    void OnFail_8FD97C734E427BBCD70210B3E71268DF(UTexture2DDynamic* Texture);
    void OnSuccess_8FD97C734E427BBCD70210B3E71268DF(UTexture2DDynamic* Texture);
    void GetImage(FString ImageURL, int32_t SizeX, int32_t SizeY);
    void UpdateImage(FSlateBrush ImageData);
    void ExecuteUbergraph_UI_BP_StoreItem(int32_t EntryPoint, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
}; // Size: 0x430
#pragma pack(pop)
