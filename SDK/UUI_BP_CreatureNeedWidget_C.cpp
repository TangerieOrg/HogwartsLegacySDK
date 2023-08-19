#include "ECreatureNeed.hpp"
#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UPhoenixImage.hpp"
#include "UUI_BP_CreatureNeedWidget_C.hpp"
#include "UUserWidget.hpp"
void UUI_BP_CreatureNeedWidget_C::OnNeedsChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.OnNeedsChanged"));
    struct Params_OnNeedsChanged {
    }; // Size: 0x0
    Params_OnNeedsChanged params{};
    ProcessEvent(func, &params);
}
UUI_BP_CreatureNeedWidget_C* UUI_BP_CreatureNeedWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C");
    return (UUI_BP_CreatureNeedWidget_C*)res;
}
void UUI_BP_CreatureNeedWidget_C::Update(bool IsNeedMet, bool Temp_bool_Variable, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.Update"));
    struct Params_Update {
        bool IsNeedMet; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x6];
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x8
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x18
        FDataTableRowHandle K2Node_Select_Default; // 0x28
    }; // Size: 0x38
    Params_Update params{};
    params.IsNeedMet = (bool)IsNeedMet;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.K2Node_Select_Default = (FDataTableRowHandle)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureNeedWidget_C::UpdateWithCreatureState(UCreatureState* CreatureState, bool CallFunc_IsValid_ReturnValue) {}
void UUI_BP_CreatureNeedWidget_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureNeedWidget_C::Destruct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureNeedWidget.UI_BP_CreatureNeedWidget_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureNeedWidget_C::ExecuteUbergraph_UI_BP_CreatureNeedWidget(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, FSlateBrush K2Node_MakeStruct_SlateBrush, FSlateBrush K2Node_MakeStruct_SlateBrush_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {}
