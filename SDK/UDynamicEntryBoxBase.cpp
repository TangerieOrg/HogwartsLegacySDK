#include "EDynamicBoxType.hpp"
#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FRadialBoxSettings.hpp"
#include "FSlateChildSize.hpp"
#include "FUserWidgetPool.hpp"
#include "FVector2D.hpp"
#include "UDynamicEntryBoxBase.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
UDynamicEntryBoxBase* UDynamicEntryBoxBase::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.DynamicEntryBoxBase");
    return (UDynamicEntryBoxBase*)res;
}
void UDynamicEntryBoxBase::SetRadialSettings(FRadialBoxSettings& InSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings"));
    struct Params_SetRadialSettings {
        FRadialBoxSettings InSettings; // 0x0
    }; // Size: 0x10
    Params_SetRadialSettings params{};
    params.InSettings = (FRadialBoxSettings)InSettings;
    ProcessEvent(func, &params);
    InSettings = params.InSettings;
}
void UDynamicEntryBoxBase::SetEntrySpacing(FVector2D& InEntrySpacing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing"));
    struct Params_SetEntrySpacing {
        FVector2D InEntrySpacing; // 0x0
    }; // Size: 0x8
    Params_SetEntrySpacing params{};
    params.InEntrySpacing = (FVector2D)InEntrySpacing;
    ProcessEvent(func, &params);
    InEntrySpacing = params.InEntrySpacing;
}
int32_t UDynamicEntryBoxBase::GetNumEntries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries"));
    struct Params_GetNumEntries {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumEntries params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<UUserWidget*> UDynamicEntryBoxBase::GetAllEntries() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries"));
    struct Params_GetAllEntries {
        TArray<UUserWidget*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllEntries params{};
    ProcessEvent(func, &params);
    return (TArray<UUserWidget*>)params.ReturnValue;
}
