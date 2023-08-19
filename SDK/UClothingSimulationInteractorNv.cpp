#include "UClothingSimulationInteractor.hpp"
#include "UClothingSimulationInteractorNv.hpp"
#include "UFunction.hpp"
UClothingSimulationInteractorNv* UClothingSimulationInteractorNv::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv");
    return (UClothingSimulationInteractorNv*)res;
}
void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness"));
    struct Params_SetAnimDriveDamperStiffness {
        float InStiffness; // 0x0
    }; // Size: 0x4
    Params_SetAnimDriveDamperStiffness params{};
    params.InStiffness = (float)InStiffness;
    ProcessEvent(func, &params);
}
