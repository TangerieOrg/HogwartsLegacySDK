#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UPlatformEventsComponent.hpp"
UPlatformEventsComponent* UPlatformEventsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlatformEventsComponent");
    return (UPlatformEventsComponent*)res;
}
bool UPlatformEventsComponent::SupportsConvertibleLaptops() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlatformEventsComponent.SupportsConvertibleLaptops"));
    struct Params_SupportsConvertibleLaptops {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SupportsConvertibleLaptops params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPlatformEventsComponent::PlatformEventDelegate__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Engine.PlatformEventsComponent.PlatformEventDelegate__DelegateSignature"));
    struct Params_PlatformEventDelegate__DelegateSignature {
    }; // Size: 0x0
    Params_PlatformEventDelegate__DelegateSignature params{};
    ProcessEvent(func, &params);
}
bool UPlatformEventsComponent::IsInTabletMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlatformEventsComponent.IsInTabletMode"));
    struct Params_IsInTabletMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInTabletMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPlatformEventsComponent::IsInLaptopMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PlatformEventsComponent.IsInLaptopMode"));
    struct Params_IsInLaptopMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInLaptopMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
