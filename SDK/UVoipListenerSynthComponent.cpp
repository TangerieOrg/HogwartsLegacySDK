#include "UFunction.hpp"
#include "USynthComponent.hpp"
#include "UVoipListenerSynthComponent.hpp"
UVoipListenerSynthComponent* UVoipListenerSynthComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent");
    return (UVoipListenerSynthComponent*)res;
}
bool UVoipListenerSynthComponent::IsIdling() {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling"));
    struct Params_IsIdling {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsIdling params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
