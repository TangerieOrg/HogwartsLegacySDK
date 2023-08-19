#include "UFunction.hpp"
#include "ULoadComplete.hpp"
#include "UObject.hpp"
ULoadComplete* ULoadComplete::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.LoadComplete");
    return (ULoadComplete*)res;
}
void ULoadComplete::OnLoadCompleteCallback() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.LoadComplete.OnLoadCompleteCallback"));
    struct Params_OnLoadCompleteCallback {
    }; // Size: 0x0
    Params_OnLoadCompleteCallback params{};
    ProcessEvent(func, &params);
}
