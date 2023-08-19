#include "AActor.hpp"
#include "UArrestoMomentumComponent.hpp"
#include "UArrestoMomentumInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
void UArrestoMomentumInterface::OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ArrestoMomentumInterface.OnArrestoMomentumEnd"));
    struct Params_OnArrestoMomentumEnd {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
    }; // Size: 0x10
    Params_OnArrestoMomentumEnd params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    ProcessEvent(func, &params);
}
UArrestoMomentumInterface* UArrestoMomentumInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ArrestoMomentumInterface");
    return (UArrestoMomentumInterface*)res;
}
void UArrestoMomentumInterface::OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ArrestoMomentumInterface.OnArrestoMomentumBegin"));
    struct Params_OnArrestoMomentumBegin {
        AActor* Instigator; // 0x0
        UArrestoMomentumComponent* ArrestoMomentumComponent; // 0x8
        float TimeDilation; // 0x10
    }; // Size: 0x14
    Params_OnArrestoMomentumBegin params{};
    params.Instigator = (AActor*)Instigator;
    params.ArrestoMomentumComponent = (UArrestoMomentumComponent*)ArrestoMomentumComponent;
    params.TimeDilation = (float)TimeDilation;
    ProcessEvent(func, &params);
}
bool UArrestoMomentumInterface::DisallowArrestoMomentum() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ArrestoMomentumInterface.DisallowArrestoMomentum"));
    struct Params_DisallowArrestoMomentum {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DisallowArrestoMomentum params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
