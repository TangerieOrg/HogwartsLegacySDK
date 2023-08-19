#include "FRegionPopuplData.hpp"
#include "UFunction.hpp"
#include "UMapRegionInfoWidget.hpp"
#include "UPhoenixUserWidget.hpp"
void UMapRegionInfoWidget::ShowBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapRegionInfoWidget.ShowBP"));
    struct Params_ShowBP {
    }; // Size: 0x0
    Params_ShowBP params{};
    ProcessEvent(func, &params);
}
UMapRegionInfoWidget* UMapRegionInfoWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapRegionInfoWidget");
    return (UMapRegionInfoWidget*)res;
}
void UMapRegionInfoWidget::Show() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapRegionInfoWidget.Show"));
    struct Params_Show {
    }; // Size: 0x0
    Params_Show params{};
    ProcessEvent(func, &params);
}
void UMapRegionInfoWidget::SetDataBP(FString RegionName, FString EnemyLevel, int32_t MinLevel, int32_t MaxLevel, TArray<FRegionPopuplData>& RegionData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapRegionInfoWidget.SetDataBP"));
    struct Params_SetDataBP {
        FString RegionName; // 0x0
        FString EnemyLevel; // 0x10
        int32_t MinLevel; // 0x20
        int32_t MaxLevel; // 0x24
        TArray<FRegionPopuplData> RegionData; // 0x28
    }; // Size: 0x38
    Params_SetDataBP params{};
    params.RegionName = (FString)RegionName;
    params.EnemyLevel = (FString)EnemyLevel;
    params.MinLevel = (int32_t)MinLevel;
    params.MaxLevel = (int32_t)MaxLevel;
    params.RegionData = (TArray<FRegionPopuplData>)RegionData;
    ProcessEvent(func, &params);
    RegionData = params.RegionData;
}
void UMapRegionInfoWidget::HideBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapRegionInfoWidget.HideBP"));
    struct Params_HideBP {
    }; // Size: 0x0
    Params_HideBP params{};
    ProcessEvent(func, &params);
}
void UMapRegionInfoWidget::SetData(FString& RegionName, FString& EnemyLevel, int32_t MinLevel, int32_t MaxLevel, TArray<FRegionPopuplData>& RegionData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapRegionInfoWidget.SetData"));
    struct Params_SetData {
        FString RegionName; // 0x0
        FString EnemyLevel; // 0x10
        int32_t MinLevel; // 0x20
        int32_t MaxLevel; // 0x24
        TArray<FRegionPopuplData> RegionData; // 0x28
    }; // Size: 0x38
    Params_SetData params{};
    params.RegionName = (FString)RegionName;
    params.EnemyLevel = (FString)EnemyLevel;
    params.MinLevel = (int32_t)MinLevel;
    params.MaxLevel = (int32_t)MaxLevel;
    params.RegionData = (TArray<FRegionPopuplData>)RegionData;
    ProcessEvent(func, &params);
    RegionName = params.RegionName;
    EnemyLevel = params.EnemyLevel;
    RegionData = params.RegionData;
}
void UMapRegionInfoWidget::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapRegionInfoWidget.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
