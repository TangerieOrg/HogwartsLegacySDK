#include "FEncounterDuelTechniqueOverride.hpp"
#include "UCombatVolumeGroup.hpp"
#include "UDuelTechnique.hpp"
#include "UDuelTechniquesController.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UDuelTechniquesController* UDuelTechniquesController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechniquesController");
    return (UDuelTechniquesController*)res;
}
void UDuelTechniquesController::OnCombatVolumeGroupDestroyed(UCombatVolumeGroup* Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesController.OnCombatVolumeGroupDestroyed"));
    struct Params_OnCombatVolumeGroupDestroyed {
        UCombatVolumeGroup* Group; // 0x0
    }; // Size: 0x8
    Params_OnCombatVolumeGroupDestroyed params{};
    params.Group = (UCombatVolumeGroup*)Group;
    ProcessEvent(func, &params);
}
