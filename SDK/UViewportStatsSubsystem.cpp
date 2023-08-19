#include "UFunction.hpp"
#include "UViewportStatsSubsystem.hpp"
#include "UWorldSubsystem.hpp"
UViewportStatsSubsystem* UViewportStatsSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ViewportStatsSubsystem");
    return (UViewportStatsSubsystem*)res;
}
void UViewportStatsSubsystem::AddTimedDisplay() {}
void UViewportStatsSubsystem::RemoveDisplayDelegate(int32_t IndexToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ViewportStatsSubsystem.RemoveDisplayDelegate"));
    struct Params_RemoveDisplayDelegate {
        int32_t IndexToRemove; // 0x0
    }; // Size: 0x4
    Params_RemoveDisplayDelegate params{};
    params.IndexToRemove = (int32_t)IndexToRemove;
    ProcessEvent(func, &params);
}
void UViewportStatsSubsystem::AddDisplayDelegate() {}
