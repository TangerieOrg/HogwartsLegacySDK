#include "AActor.hpp"
#include "UFunction.hpp"
#include "UStateEffectComponent.hpp"
#include "UUncurseComponent.hpp"
UUncurseComponent* UUncurseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UncurseComponent");
    return (UUncurseComponent*)res;
}
void UUncurseComponent::AddToInstanceList(AActor* InInstigator, int32_t InMaxInstancesPerInstigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UncurseComponent.AddToInstanceList"));
    struct Params_AddToInstanceList {
        AActor* InInstigator; // 0x0
        int32_t InMaxInstancesPerInstigator; // 0x8
    }; // Size: 0xc
    Params_AddToInstanceList params{};
    params.InInstigator = (AActor*)InInstigator;
    params.InMaxInstancesPerInstigator = (int32_t)InMaxInstancesPerInstigator;
    ProcessEvent(func, &params);
}
