#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "UInvalidationBox.hpp"
UInvalidationBox* UInvalidationBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.InvalidationBox");
    return (UInvalidationBox*)res;
}
void UInvalidationBox::SetCanCache(bool CanCache) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InvalidationBox.SetCanCache"));
    struct Params_SetCanCache {
        bool CanCache; // 0x0
    }; // Size: 0x1
    Params_SetCanCache params{};
    params.CanCache = (bool)CanCache;
    ProcessEvent(func, &params);
}
void UInvalidationBox::InvalidateCache() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InvalidationBox.InvalidateCache"));
    struct Params_InvalidateCache {
    }; // Size: 0x0
    Params_InvalidateCache params{};
    ProcessEvent(func, &params);
}
bool UInvalidationBox::GetCanCache() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.InvalidationBox.GetCanCache"));
    struct Params_GetCanCache {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetCanCache params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
