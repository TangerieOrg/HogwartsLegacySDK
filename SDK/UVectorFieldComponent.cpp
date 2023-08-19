#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UVectorField.hpp"
#include "UVectorFieldComponent.hpp"
UVectorFieldComponent* UVectorFieldComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VectorFieldComponent");
    return (UVectorFieldComponent*)res;
}
void UVectorFieldComponent::SetIntensity(float NewIntensity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VectorFieldComponent.SetIntensity"));
    struct Params_SetIntensity {
        float NewIntensity; // 0x0
    }; // Size: 0x4
    Params_SetIntensity params{};
    params.NewIntensity = (float)NewIntensity;
    ProcessEvent(func, &params);
}
