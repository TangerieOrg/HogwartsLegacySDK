#include "AAmbientGhost_Character.hpp"
#include "ACharacter.hpp"
#include "UFunction.hpp"
#include "USplineComponent.hpp"
void AAmbientGhost_Character::EnteredOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientGhost_Character.EnteredOuterRadius"));
    struct Params_EnteredOuterRadius {
    }; // Size: 0x0
    Params_EnteredOuterRadius params{};
    ProcessEvent(func, &params);
}
AAmbientGhost_Character* AAmbientGhost_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbientGhost_Character");
    return (AAmbientGhost_Character*)res;
}
void AAmbientGhost_Character::ExitedInnerRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientGhost_Character.ExitedInnerRadius"));
    struct Params_ExitedInnerRadius {
    }; // Size: 0x0
    Params_ExitedInnerRadius params{};
    ProcessEvent(func, &params);
}
void AAmbientGhost_Character::ExitedOuterRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientGhost_Character.ExitedOuterRadius"));
    struct Params_ExitedOuterRadius {
    }; // Size: 0x0
    Params_ExitedOuterRadius params{};
    ProcessEvent(func, &params);
}
void AAmbientGhost_Character::EnteredInnerRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientGhost_Character.EnteredInnerRadius"));
    struct Params_EnteredInnerRadius {
    }; // Size: 0x0
    Params_EnteredInnerRadius params{};
    ProcessEvent(func, &params);
}
