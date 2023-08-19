#include "AChompingCabbage_InvTool.hpp"
#include "AInventoryItemTool.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
AChompingCabbage_InvTool* AChompingCabbage_InvTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ChompingCabbage_InvTool");
    return (AChompingCabbage_InvTool*)res;
}
void AChompingCabbage_InvTool::SpawnChompingCabbageEnemy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ChompingCabbage_InvTool.SpawnChompingCabbageEnemy"));
    struct Params_SpawnChompingCabbageEnemy {
    }; // Size: 0x0
    Params_SpawnChompingCabbageEnemy params{};
    ProcessEvent(func, &params);
}
