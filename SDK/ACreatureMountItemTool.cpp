#include "ACreatureMountHandler.hpp"
#include "ACreatureMountItemTool.hpp"
#include "AInventoryItemTool.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
ACreatureMountItemTool* ACreatureMountItemTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureMountItemTool");
    return (ACreatureMountItemTool*)res;
}
void ACreatureMountItemTool::SpawnAndMountCreature(bool bUseTransition, bool bInFlight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureMountItemTool.SpawnAndMountCreature"));
    struct Params_SpawnAndMountCreature {
        bool bUseTransition; // 0x0
        bool bInFlight; // 0x1
    }; // Size: 0x2
    Params_SpawnAndMountCreature params{};
    params.bUseTransition = (bool)bUseTransition;
    params.bInFlight = (bool)bInFlight;
    ProcessEvent(func, &params);
}
