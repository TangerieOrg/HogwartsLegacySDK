#include "AActor.hpp"
#include "UFrozenInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UFrozenInterface* UFrozenInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FrozenInterface");
    return (UFrozenInterface*)res;
}
void UFrozenInterface::OnAttemptToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenInterface.OnAttemptToFreeze"));
    struct Params_OnAttemptToFreeze {
    }; // Size: 0x0
    Params_OnAttemptToFreeze params{};
    ProcessEvent(func, &params);
}
void UFrozenInterface::OnThaw(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenInterface.OnThaw"));
    struct Params_OnThaw {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnThaw params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
bool UFrozenInterface::StartFreeze(AActor* Instigator, float Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenInterface.StartFreeze"));
    struct Params_StartFreeze {
        AActor* Instigator; // 0x0
        float Amount; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_StartFreeze params{};
    params.Instigator = (AActor*)Instigator;
    params.Amount = (float)Amount;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFrozenInterface::OnFailedToFreeze() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrozenInterface.OnFailedToFreeze"));
    struct Params_OnFailedToFreeze {
    }; // Size: 0x0
    Params_OnFailedToFreeze params{};
    ProcessEvent(func, &params);
}
