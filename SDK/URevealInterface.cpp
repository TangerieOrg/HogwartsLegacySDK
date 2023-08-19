#include "AActor.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "URevealInterface.hpp"
URevealInterface* URevealInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RevealInterface");
    return (URevealInterface*)res;
}
void URevealInterface::OnEndReveal(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevealInterface.OnEndReveal"));
    struct Params_OnEndReveal {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnEndReveal params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
bool URevealInterface::StartReveal(AActor* Instigator, bool ShowOccluded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevealInterface.StartReveal"));
    struct Params_StartReveal {
        AActor* Instigator; // 0x0
        bool ShowOccluded; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_StartReveal params{};
    params.Instigator = (AActor*)Instigator;
    params.ShowOccluded = (bool)ShowOccluded;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void URevealInterface::OnHiddenObjectHinted(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevealInterface.OnHiddenObjectHinted"));
    struct Params_OnHiddenObjectHinted {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnHiddenObjectHinted params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void URevealInterface::OnHiddenObjectRevealed(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevealInterface.OnHiddenObjectRevealed"));
    struct Params_OnHiddenObjectRevealed {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnHiddenObjectRevealed params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void URevealInterface::OnBeginRevealFade(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevealInterface.OnBeginRevealFade"));
    struct Params_OnBeginRevealFade {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnBeginRevealFade params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
