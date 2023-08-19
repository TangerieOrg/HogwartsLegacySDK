#include "UAnimSequence.hpp"
#include "UFlyingStairComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
#include "UStaticMeshComponent.hpp"
UFlyingStairComponent* UFlyingStairComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingStairComponent");
    return (UFlyingStairComponent*)res;
}
void UFlyingStairComponent::Demolish() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairComponent.Demolish"));
    struct Params_Demolish {
    }; // Size: 0x0
    Params_Demolish params{};
    ProcessEvent(func, &params);
}
bool UFlyingStairComponent::NeedsToBeBuilt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairComponent.NeedsToBeBuilt"));
    struct Params_NeedsToBeBuilt {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_NeedsToBeBuilt params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UFlyingStairComponent::IsBuilt() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairComponent.IsBuilt"));
    struct Params_IsBuilt {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBuilt params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFlyingStairComponent::Build() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingStairComponent.Build"));
    struct Params_Build {
    }; // Size: 0x0
    Params_Build params{};
    ProcessEvent(func, &params);
}
