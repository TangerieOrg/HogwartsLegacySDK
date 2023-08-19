#include "FOdcLadderInfo.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULadderNavLinkComponent.hpp"
#include "UOdcNavLinkComponent.hpp"
ULadderNavLinkComponent* ULadderNavLinkComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LadderNavLinkComponent");
    return (ULadderNavLinkComponent*)res;
}
void ULadderNavLinkComponent::UpdateNavLink(FOdcLadderInfo& Info) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LadderNavLinkComponent.UpdateNavLink"));
    struct Params_UpdateNavLink {
        FOdcLadderInfo Info; // 0x0
    }; // Size: 0x28
    Params_UpdateNavLink params{};
    params.Info = (FOdcLadderInfo)Info;
    ProcessEvent(func, &params);
    Info = params.Info;
}
void ULadderNavLinkComponent::RegisterNavLink() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LadderNavLinkComponent.RegisterNavLink"));
    struct Params_RegisterNavLink {
    }; // Size: 0x0
    Params_RegisterNavLink params{};
    ProcessEvent(func, &params);
}
bool ULadderNavLinkComponent::HasValidLinks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LadderNavLinkComponent.HasValidLinks"));
    struct Params_HasValidLinks {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasValidLinks params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
