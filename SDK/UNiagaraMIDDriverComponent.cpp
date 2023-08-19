#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UNiagaraMIDDriverComponent.hpp"
#include "UNiagaraMaterialDriverComponent.hpp"
UNiagaraMIDDriverComponent* UNiagaraMIDDriverComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.NiagaraMIDDriverComponent");
    return (UNiagaraMIDDriverComponent*)res;
}
void UNiagaraMIDDriverComponent::AddMID(UMaterialInstanceDynamic* Mid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.NiagaraMIDDriverComponent.AddMID"));
    struct Params_AddMID {
        UMaterialInstanceDynamic* Mid; // 0x0
    }; // Size: 0x8
    Params_AddMID params{};
    params.Mid = (UMaterialInstanceDynamic*)Mid;
    ProcessEvent(func, &params);
}
void UNiagaraMIDDriverComponent::RemoveMID(UMaterialInstanceDynamic* Mid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.NiagaraMIDDriverComponent.RemoveMID"));
    struct Params_RemoveMID {
        UMaterialInstanceDynamic* Mid; // 0x0
    }; // Size: 0x8
    Params_RemoveMID params{};
    params.Mid = (UMaterialInstanceDynamic*)Mid;
    ProcessEvent(func, &params);
}
void UNiagaraMIDDriverComponent::EmptyMIDs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.NiagaraMIDDriverComponent.EmptyMIDs"));
    struct Params_EmptyMIDs {
    }; // Size: 0x0
    Params_EmptyMIDs params{};
    ProcessEvent(func, &params);
}
