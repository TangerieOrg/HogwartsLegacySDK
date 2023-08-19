#include "FLegendItemData.hpp"
#include "FSlateColor.hpp"
#include "FSoftClassPath.hpp"
#include "UFunction.hpp"
#include "ULegend.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixUserWidget.hpp"
ULegend* ULegend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Legend");
    return (ULegend*)res;
}
void ULegend::RemoveAllLegendItems(int32_t StartFromIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Legend.RemoveAllLegendItems"));
    struct Params_RemoveAllLegendItems {
        int32_t StartFromIndex; // 0x0
    }; // Size: 0x4
    Params_RemoveAllLegendItems params{};
    params.StartFromIndex = (int32_t)StartFromIndex;
    ProcessEvent(func, &params);
}
void ULegend::InitLegendData(TArray<FLegendItemData> LegendData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Legend.InitLegendData"));
    struct Params_InitLegendData {
        TArray<FLegendItemData> LegendData; // 0x0
    }; // Size: 0x10
    Params_InitLegendData params{};
    params.LegendData = (TArray<FLegendItemData>)LegendData;
    ProcessEvent(func, &params);
}
void ULegend::AddLegendItem(ULegendItem* NewLegendItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Legend.AddLegendItem"));
    struct Params_AddLegendItem {
        ULegendItem* NewLegendItem; // 0x0
    }; // Size: 0x8
    Params_AddLegendItem params{};
    params.NewLegendItem = (ULegendItem*)NewLegendItem;
    ProcessEvent(func, &params);
}
ULegendItem* ULegend::GetLegendItem(int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Legend.GetLegendItem"));
    struct Params_GetLegendItem {
        int32_t Index; // 0x0
        char pad_4[0x4];
        ULegendItem* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLegendItem params{};
    params.Index = (int32_t)Index;
    ProcessEvent(func, &params);
    return (ULegendItem*)params.ReturnValue;
}
