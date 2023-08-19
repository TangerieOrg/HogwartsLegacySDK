#include "AActor.hpp"
#include "AAncientMagicTarget.hpp"
#include "UFunction.hpp"
AAncientMagicTarget* AAncientMagicTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AncientMagicTarget");
    return (AAncientMagicTarget*)res;
}
void AAncientMagicTarget::SetDebugVisible(bool DebugVisibleIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicTarget.SetDebugVisible"));
    struct Params_SetDebugVisible {
        bool DebugVisibleIn; // 0x0
    }; // Size: 0x1
    Params_SetDebugVisible params{};
    params.DebugVisibleIn = (bool)DebugVisibleIn;
    ProcessEvent(func, &params);
}
void AAncientMagicTarget::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicTarget.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void AAncientMagicTarget::OnDiscover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicTarget.OnDiscover"));
    struct Params_OnDiscover {
    }; // Size: 0x0
    Params_OnDiscover params{};
    ProcessEvent(func, &params);
}
void AAncientMagicTarget::OnReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicTarget.OnReset"));
    struct Params_OnReset {
    }; // Size: 0x0
    Params_OnReset params{};
    ProcessEvent(func, &params);
}
void AAncientMagicTarget::Discover() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AncientMagicTarget.Discover"));
    struct Params_Discover {
    }; // Size: 0x0
    Params_Discover params{};
    ProcessEvent(func, &params);
}
