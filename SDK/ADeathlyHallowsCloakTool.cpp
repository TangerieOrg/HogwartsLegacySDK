#include "AActor.hpp"
#include "ADeathlyHallowsCloakTool.hpp"
#include "ASpellTool.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMultiFX2_Base.hpp"
ADeathlyHallowsCloakTool* ADeathlyHallowsCloakTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DeathlyHallowsCloakTool");
    return (ADeathlyHallowsCloakTool*)res;
}
void ADeathlyHallowsCloakTool::OnDisillusionmentStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DeathlyHallowsCloakTool.OnDisillusionmentStart"));
    struct Params_OnDisillusionmentStart {
    }; // Size: 0x0
    Params_OnDisillusionmentStart params{};
    ProcessEvent(func, &params);
}
void ADeathlyHallowsCloakTool::OnDisillusionmentEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DeathlyHallowsCloakTool.OnDisillusionmentEnd"));
    struct Params_OnDisillusionmentEnd {
    }; // Size: 0x0
    Params_OnDisillusionmentEnd params{};
    ProcessEvent(func, &params);
}
void ADeathlyHallowsCloakTool::CasterHealthZero(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DeathlyHallowsCloakTool.CasterHealthZero"));
    struct Params_CasterHealthZero {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_CasterHealthZero params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
