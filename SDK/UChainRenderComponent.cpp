#include "FRotator.hpp"
#include "FVector.hpp"
#include "UChainRenderComponent.hpp"
#include "UFunction.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "USplineComponent.hpp"
UChainRenderComponent* UChainRenderComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ChainRenderComponent");
    return (UChainRenderComponent*)res;
}
void UChainRenderComponent::SetSpline(USplineComponent* InSplineComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ChainRenderComponent.SetSpline"));
    struct Params_SetSpline {
        USplineComponent* InSplineComponent; // 0x0
    }; // Size: 0x8
    Params_SetSpline params{};
    params.InSplineComponent = (USplineComponent*)InSplineComponent;
    ProcessEvent(func, &params);
}
