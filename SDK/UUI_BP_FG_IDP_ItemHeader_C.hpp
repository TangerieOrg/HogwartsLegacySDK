#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UPhoenixUserWidget.hpp"
class UImage;
class UPhoenixTextBlock;
class UTexture2D;
#pragma pack(push, 1)
class UUI_BP_FG_IDP_ItemHeader_C : public UPhoenixUserWidget {
public:
    UImage* AlbinoIcon; // 0x328
    UImage* GenderIcon; // 0x330
    UPhoenixTextBlock* itemTitle; // 0x338
    bool CachedIsMale; // 0x340
    char pad_341[0x7];
    static UUI_BP_FG_IDP_ItemHeader_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings);
    void SetCreatureIcons(bool IsAlbino, bool useGenderIcon, bool IsMale, bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, UTexture2D* K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2);
    void SetHeaderData(FString headerTitle, bool TranslateTitle);
}; // Size: 0x348
#pragma pack(pop)
