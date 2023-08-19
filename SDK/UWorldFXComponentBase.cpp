#include "FWorldFXFullTracker.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "UWorldFXComponentBase.hpp"
UWorldFXComponentBase* UWorldFXComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXComponentBase");
    return (UWorldFXComponentBase*)res;
}
void UWorldFXComponentBase::ForceRefreshPreview() {
    static auto func = (UFunction*)(find_uobject("Function /Script/WorldFX.WorldFXComponentBase.ForceRefreshPreview"));
    struct Params_ForceRefreshPreview {
    }; // Size: 0x0
    Params_ForceRefreshPreview params{};
    ProcessEvent(func, &params);
}
