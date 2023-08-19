#include "AActor.hpp"
#include "UFiniteInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UFiniteInterface* UFiniteInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FiniteInterface");
    return (UFiniteInterface*)res;
}
void UFiniteInterface::StartFinite(AActor* Instigator, bool RemovedEffect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FiniteInterface.StartFinite"));
    struct Params_StartFinite {
        AActor* Instigator; // 0x0
        bool RemovedEffect; // 0x8
    }; // Size: 0x9
    Params_StartFinite params{};
    params.Instigator = (AActor*)Instigator;
    params.RemovedEffect = (bool)RemovedEffect;
    ProcessEvent(func, &params);
}
