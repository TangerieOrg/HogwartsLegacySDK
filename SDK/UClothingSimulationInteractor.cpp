#include "FVector.hpp"
#include "UClothingInteractor.hpp"
#include "UClothingSimulationInteractor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UClothingSimulationInteractor* UClothingSimulationInteractor::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
    return (UClothingSimulationInteractor*)res;
}
void UClothingSimulationInteractor::SetMaxNumIterations(int32_t MaxNumIterations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations"));
    struct Params_SetMaxNumIterations {
        int32_t MaxNumIterations; // 0x0
    }; // Size: 0x4
    Params_SetMaxNumIterations params{};
    params.MaxNumIterations = (int32_t)MaxNumIterations;
    ProcessEvent(func, &params);
}
void UClothingSimulationInteractor::SetNumSubsteps(int32_t NumSubsteps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps"));
    struct Params_SetNumSubsteps {
        int32_t NumSubsteps; // 0x0
    }; // Size: 0x4
    Params_SetNumSubsteps params{};
    params.NumSubsteps = (int32_t)NumSubsteps;
    ProcessEvent(func, &params);
}
void UClothingSimulationInteractor::SetNumIterations(int32_t NumIterations) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations"));
    struct Params_SetNumIterations {
        int32_t NumIterations; // 0x0
    }; // Size: 0x4
    Params_SetNumIterations params{};
    params.NumIterations = (int32_t)NumIterations;
    ProcessEvent(func, &params);
}
void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness"));
    struct Params_SetAnimDriveSpringStiffness {
        float InStiffness; // 0x0
    }; // Size: 0x4
    Params_SetAnimDriveSpringStiffness params{};
    params.InStiffness = (float)InStiffness;
    ProcessEvent(func, &params);
}
void UClothingSimulationInteractor::PhysicsAssetUpdated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated"));
    struct Params_PhysicsAssetUpdated {
    }; // Size: 0x0
    Params_PhysicsAssetUpdated params{};
    ProcessEvent(func, &params);
}
float UClothingSimulationInteractor::GetSimulationTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime"));
    struct Params_GetSimulationTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSimulationTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
int32_t UClothingSimulationInteractor::GetNumSubsteps() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps"));
    struct Params_GetNumSubsteps {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumSubsteps params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UClothingSimulationInteractor::GetNumKinematicParticles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles"));
    struct Params_GetNumKinematicParticles {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumKinematicParticles params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UClothingSimulationInteractor::GetNumIterations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations"));
    struct Params_GetNumIterations {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumIterations params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UClothingSimulationInteractor::GetNumDynamicParticles() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles"));
    struct Params_GetNumDynamicParticles {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumDynamicParticles params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UClothingSimulationInteractor::GetNumCloths() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths"));
    struct Params_GetNumCloths {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumCloths params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UClothingInteractor* UClothingSimulationInteractor::GetClothingInteractor(FString ClothingAssetName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor"));
    struct Params_GetClothingInteractor {
        FString ClothingAssetName; // 0x0
        UClothingInteractor* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetClothingInteractor params{};
    params.ClothingAssetName = (FString)ClothingAssetName;
    ProcessEvent(func, &params);
    return (UClothingInteractor*)params.ReturnValue;
}
void UClothingSimulationInteractor::EnableGravityOverride(FVector& InVector) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride"));
    struct Params_EnableGravityOverride {
        FVector InVector; // 0x0
    }; // Size: 0xc
    Params_EnableGravityOverride params{};
    params.InVector = (FVector)InVector;
    ProcessEvent(func, &params);
    InVector = params.InVector;
}
void UClothingSimulationInteractor::DisableGravityOverride() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride"));
    struct Params_DisableGravityOverride {
    }; // Size: 0x0
    Params_DisableGravityOverride params{};
    ProcessEvent(func, &params);
}
void UClothingSimulationInteractor::ClothConfigUpdated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated"));
    struct Params_ClothConfigUpdated {
    }; // Size: 0x0
    Params_ClothConfigUpdated params{};
    ProcessEvent(func, &params);
}
