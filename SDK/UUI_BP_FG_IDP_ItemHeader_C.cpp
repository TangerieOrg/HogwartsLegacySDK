#include "ESlateVisibility.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_FG_IDP_ItemHeader_C.hpp"
UUI_BP_FG_IDP_ItemHeader_C* UUI_BP_FG_IDP_ItemHeader_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_ItemHeader.UI_BP_FG_IDP_ItemHeader_C");
    return (UUI_BP_FG_IDP_ItemHeader_C*)res;
}
TArray<FString> UUI_BP_FG_IDP_ItemHeader_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings) {}
void UUI_BP_FG_IDP_ItemHeader_C::SetHeaderData(FString headerTitle, bool TranslateTitle) {}
void UUI_BP_FG_IDP_ItemHeader_C::SetCreatureIcons(bool IsAlbino, bool useGenderIcon, bool IsMale, bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, UTexture2D* K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Inventory/UI_BP_FG_IDP_ItemHeader.UI_BP_FG_IDP_ItemHeader_C.SetCreatureIcons"));
    struct Params_SetCreatureIcons {
        bool IsAlbino; // 0x0
        bool useGenderIcon; // 0x1
        bool IsMale; // 0x2
        bool Temp_bool_Variable; // 0x3
        char pad_4[0x4];
        UTexture2D* Temp_object_Variable; // 0x8
        UTexture2D* Temp_object_Variable_1; // 0x10
        bool Temp_bool_Variable_1; // 0x18
        ESlateVisibility Temp_byte_Variable; // 0x19
        ESlateVisibility Temp_byte_Variable_1; // 0x1a
        bool Temp_bool_Variable_2; // 0x1b
        ESlateVisibility Temp_byte_Variable_2; // 0x1c
        ESlateVisibility Temp_byte_Variable_3; // 0x1d
        char pad_1e[0x2];
        UTexture2D* K2Node_Select_Default; // 0x20
        ESlateVisibility K2Node_Select_Default_1; // 0x28
        ESlateVisibility K2Node_Select_Default_2; // 0x29
    }; // Size: 0x2a
    Params_SetCreatureIcons params{};
    params.IsAlbino = (bool)IsAlbino;
    params.useGenderIcon = (bool)useGenderIcon;
    params.IsMale = (bool)IsMale;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_object_Variable = (UTexture2D*)Temp_object_Variable;
    params.Temp_object_Variable_1 = (UTexture2D*)Temp_object_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.K2Node_Select_Default = (UTexture2D*)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (ESlateVisibility)K2Node_Select_Default_2;
    ProcessEvent(func, &params);
}
