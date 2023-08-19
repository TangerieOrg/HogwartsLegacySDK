#include "ELakeToolVersion.hpp"
#include "FLakeParameters.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULakeComponent.hpp"
#include "ULakeParameterGeneratorBase.hpp"
#include "UTexture.hpp"
ULakeComponent* ULakeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeComponent");
    return (ULakeComponent*)res;
}
void ULakeComponent::CreatePresetFromParameters() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Flow.LakeComponent.CreatePresetFromParameters"));
    struct Params_CreatePresetFromParameters {
    }; // Size: 0x0
    Params_CreatePresetFromParameters params{};
    ProcessEvent(func, &params);
}
