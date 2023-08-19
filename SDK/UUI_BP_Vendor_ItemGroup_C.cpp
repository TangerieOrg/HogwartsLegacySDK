#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
#include "UUI_BP_Vendor_ItemGroup_C.hpp"
#include "UUniformGridPanel.hpp"
#include "UUniformGridSlot.hpp"
void UUI_BP_Vendor_ItemGroup_C::ExecuteUbergraph_UI_BP_Vendor_ItemGroup(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.ExecuteUbergraph_UI_BP_Vendor_ItemGroup"));
    struct Params_ExecuteUbergraph_UI_BP_Vendor_ItemGroup {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_Vendor_ItemGroup params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_ItemGroup_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
UUI_BP_Vendor_ItemGroup_C* UUI_BP_Vendor_ItemGroup_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Vendor/UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C");
    return (UUI_BP_Vendor_ItemGroup_C*)res;
}
TArray<FString> UUI_BP_Vendor_ItemGroup_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_Vendor_ItemGroup_C::AddItemButton(UUI_BP_InventoryIconButton_C* ItemButton, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Divide_IntInt_ReturnValue, int32_t CallFunc_Percent_IntInt_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.AddItemButton"));
    struct Params_AddItemButton {
        UUI_BP_InventoryIconButton_C* ItemButton; // 0x0
        int32_t CallFunc_GetChildrenCount_ReturnValue; // 0x8
        int32_t CallFunc_Divide_IntInt_ReturnValue; // 0xc
        int32_t CallFunc_Percent_IntInt_ReturnValue; // 0x10
        char pad_14[0x4];
        UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddItemButton params{};
    params.ItemButton = (UUI_BP_InventoryIconButton_C*)ItemButton;
    params.CallFunc_GetChildrenCount_ReturnValue = (int32_t)CallFunc_GetChildrenCount_ReturnValue;
    params.CallFunc_Divide_IntInt_ReturnValue = (int32_t)CallFunc_Divide_IntInt_ReturnValue;
    params.CallFunc_Percent_IntInt_ReturnValue = (int32_t)CallFunc_Percent_IntInt_ReturnValue;
    params.CallFunc_AddChildToUniformGrid_ReturnValue = (UUniformGridSlot*)CallFunc_AddChildToUniformGrid_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Vendor_ItemGroup_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_Vendor_ItemGroup.UI_BP_Vendor_ItemGroup_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
