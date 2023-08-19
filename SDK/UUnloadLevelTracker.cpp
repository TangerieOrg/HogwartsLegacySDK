#include "UFunction.hpp"
#include "ULevelStreaming.hpp"
#include "UObject.hpp"
#include "UObjectStateManager.hpp"
#include "UUnloadLevelTracker.hpp"
#include "UWorld.hpp"
UUnloadLevelTracker* UUnloadLevelTracker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UnloadLevelTracker");
    return (UUnloadLevelTracker*)res;
}
void UUnloadLevelTracker::OnLevelUnloaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UnloadLevelTracker.OnLevelUnloaded"));
    struct Params_OnLevelUnloaded {
    }; // Size: 0x0
    Params_OnLevelUnloaded params{};
    ProcessEvent(func, &params);
}
void UUnloadLevelTracker::Cleanup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UnloadLevelTracker.Cleanup"));
    struct Params_Cleanup {
    }; // Size: 0x0
    Params_Cleanup params{};
    ProcessEvent(func, &params);
}
