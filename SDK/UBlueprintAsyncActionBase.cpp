#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBlueprintAsyncActionBase* UBlueprintAsyncActionBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlueprintAsyncActionBase");
    return (UBlueprintAsyncActionBase*)res;
}
void UBlueprintAsyncActionBase::Activate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.BlueprintAsyncActionBase.Activate"));
    struct Params_Activate {
    }; // Size: 0x0
    Params_Activate params{};
    ProcessEvent(func, &params);
}
