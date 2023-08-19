#include "FBox.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFoliageRemoverActorComponent.hpp"
#include "UFunction.hpp"
void UFoliageRemoverActorComponent::RespawnFoliage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverActorComponent.RespawnFoliage"));
    struct Params_RespawnFoliage {
    }; // Size: 0x0
    Params_RespawnFoliage params{};
    ProcessEvent(func, &params);
}
UFoliageRemoverActorComponent* UFoliageRemoverActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FoliageRemoverActorComponent");
    return (UFoliageRemoverActorComponent*)res;
}
void UFoliageRemoverActorComponent::RemoveFoliage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverActorComponent.RemoveFoliage"));
    struct Params_RemoveFoliage {
    }; // Size: 0x0
    Params_RemoveFoliage params{};
    ProcessEvent(func, &params);
}
void UFoliageRemoverActorComponent::SetBoxSize(FVector& Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverActorComponent.SetBoxSize"));
    struct Params_SetBoxSize {
        FVector Size; // 0x0
    }; // Size: 0xc
    Params_SetBoxSize params{};
    params.Size = (FVector)Size;
    ProcessEvent(func, &params);
    Size = params.Size;
}
FBox UFoliageRemoverActorComponent::GetBoxInWorldSpace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FoliageRemoverActorComponent.GetBoxInWorldSpace"));
    struct Params_GetBoxInWorldSpace {
        FBox ReturnValue; // 0x0
    }; // Size: 0x1c
    Params_GetBoxInWorldSpace params{};
    ProcessEvent(func, &params);
    return (FBox)params.ReturnValue;
}
