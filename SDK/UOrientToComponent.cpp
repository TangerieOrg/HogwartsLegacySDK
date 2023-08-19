#include "UFunction.hpp"
#include "UOrientToComponent.hpp"
#include "USceneComponent.hpp"
UOrientToComponent* UOrientToComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OrientToComponent");
    return (UOrientToComponent*)res;
}
void UOrientToComponent::ForceUpdate(bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OrientToComponent.ForceUpdate"));
    struct Params_ForceUpdate {
        bool bSuccess; // 0x0
    }; // Size: 0x1
    Params_ForceUpdate params{};
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
