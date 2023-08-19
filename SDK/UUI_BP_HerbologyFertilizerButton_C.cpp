#include "FFertilizerEffect.hpp"
#include "FInventoryResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_HerbologyFertilizerButton_C.hpp"
#include "UUI_BP_InventoryIconButton_C.hpp"
UUI_BP_HerbologyFertilizerButton_C* UUI_BP_HerbologyFertilizerButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C");
    return (UUI_BP_HerbologyFertilizerButton_C*)res;
}
void UUI_BP_HerbologyFertilizerButton_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_HerbologyFertilizerButton_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {}
void UUI_BP_HerbologyFertilizerButton_C::InitFertilizer(FInventoryResult FertilizerItem, FFertilizerEffect CallFunc_GetFertilizerEffectStatic_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {}
void UUI_BP_HerbologyFertilizerButton_C::BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_3_ButtonClickDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyFertilizerButton_C::OnClicked__DelegateSignature(FName FertilizerID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.OnClicked__DelegateSignature"));
    struct Params_OnClicked__DelegateSignature {
        FName FertilizerID; // 0x0
    }; // Size: 0x8
    Params_OnClicked__DelegateSignature params{};
    params.FertilizerID = (FName)FertilizerID;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyFertilizerButton_C::BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_4_ButtonHoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_4_ButtonHoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_4_ButtonHoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_4_ButtonHoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyFertilizerButton_C::BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_5_ButtonUnhoverDelegate__DelegateSignature(UIconButtonWidget* IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_5_ButtonUnhoverDelegate__DelegateSignature"));
    struct Params_BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_5_ButtonUnhoverDelegate__DelegateSignature {
        UIconButtonWidget* IconButton; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_HerbologyFertilizerButton_Icon_K2Node_ComponentBoundEvent_5_ButtonUnhoverDelegate__DelegateSignature params{};
    params.IconButton = (UIconButtonWidget*)IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyFertilizerButton_C::ExecuteUbergraph_UI_BP_HerbologyFertilizerButton(int32_t EntryPoint, FInventoryResult K2Node_MakeStruct_InventoryResult, bool K2Node_Event_IsDesignTime, UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton_2, UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton_1, UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.ExecuteUbergraph_UI_BP_HerbologyFertilizerButton"));
    struct Params_ExecuteUbergraph_UI_BP_HerbologyFertilizerButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        FInventoryResult K2Node_MakeStruct_InventoryResult; // 0x8
        bool K2Node_Event_IsDesignTime; // 0x90
        char pad_91[0x7];
        UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton_2; // 0x98
        UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton_1; // 0xa0
        UIconButtonWidget* K2Node_ComponentBoundEvent_IconButton; // 0xa8
    }; // Size: 0xb0
    Params_ExecuteUbergraph_UI_BP_HerbologyFertilizerButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_MakeStruct_InventoryResult = (FInventoryResult)K2Node_MakeStruct_InventoryResult;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_ComponentBoundEvent_IconButton_2 = (UIconButtonWidget*)K2Node_ComponentBoundEvent_IconButton_2;
    params.K2Node_ComponentBoundEvent_IconButton_1 = (UIconButtonWidget*)K2Node_ComponentBoundEvent_IconButton_1;
    params.K2Node_ComponentBoundEvent_IconButton = (UIconButtonWidget*)K2Node_ComponentBoundEvent_IconButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyFertilizerButton_C::OnHovered__DelegateSignature(FName FertilizerID, UUI_BP_HerbologyFertilizerButton_C* FertilizerButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.OnHovered__DelegateSignature"));
    struct Params_OnHovered__DelegateSignature {
        FName FertilizerID; // 0x0
        UUI_BP_HerbologyFertilizerButton_C* FertilizerButton; // 0x8
    }; // Size: 0x10
    Params_OnHovered__DelegateSignature params{};
    params.FertilizerID = (FName)FertilizerID;
    params.FertilizerButton = (UUI_BP_HerbologyFertilizerButton_C*)FertilizerButton;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologyFertilizerButton_C::OnUnhovered__DelegateSignature(FName FertilizerID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologyFertilizerButton.UI_BP_HerbologyFertilizerButton_C.OnUnhovered__DelegateSignature"));
    struct Params_OnUnhovered__DelegateSignature {
        FName FertilizerID; // 0x0
    }; // Size: 0x8
    Params_OnUnhovered__DelegateSignature params{};
    params.FertilizerID = (FName)FertilizerID;
    ProcessEvent(func, &params);
}
