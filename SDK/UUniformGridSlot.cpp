#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "UFunction.hpp"
#include "UPanelSlot.hpp"
#include "UUniformGridSlot.hpp"
UUniformGridSlot* UUniformGridSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.UniformGridSlot");
    return (UUniformGridSlot*)res;
}
void UUniformGridSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridSlot.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
void UUniformGridSlot::SetRow(int32_t InRow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridSlot.SetRow"));
    struct Params_SetRow {
        int32_t InRow; // 0x0
    }; // Size: 0x4
    Params_SetRow params{};
    params.InRow = (int32_t)InRow;
    ProcessEvent(func, &params);
}
void UUniformGridSlot::SetColumn(int32_t InColumn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridSlot.SetColumn"));
    struct Params_SetColumn {
        int32_t InColumn; // 0x0
    }; // Size: 0x4
    Params_SetColumn params{};
    params.InColumn = (int32_t)InColumn;
    ProcessEvent(func, &params);
}
void UUniformGridSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
