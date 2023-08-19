#include "AActor.hpp"
#include "ADecalActor.hpp"
#include "UDecalComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
ADecalActor* ADecalActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DecalActor");
    return (ADecalActor*)res;
}
void ADecalActor::SetDecalMaterial(UMaterialInterface* NewDecalMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalActor.SetDecalMaterial"));
    struct Params_SetDecalMaterial {
        UMaterialInterface* NewDecalMaterial; // 0x0
    }; // Size: 0x8
    Params_SetDecalMaterial params{};
    params.NewDecalMaterial = (UMaterialInterface*)NewDecalMaterial;
    ProcessEvent(func, &params);
}
UMaterialInterface* ADecalActor::GetDecalMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalActor.GetDecalMaterial"));
    struct Params_GetDecalMaterial {
        UMaterialInterface* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDecalMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInterface*)params.ReturnValue;
}
UMaterialInstanceDynamic* ADecalActor::CreateDynamicMaterialInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DecalActor.CreateDynamicMaterialInstance"));
    struct Params_CreateDynamicMaterialInstance {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_CreateDynamicMaterialInstance params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
