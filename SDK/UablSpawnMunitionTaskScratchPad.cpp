#include "UAblAbilityTaskScratchPad.hpp"
#include "UablSpawnMunitionTaskScratchPad.hpp"
UablSpawnMunitionTaskScratchPad* UablSpawnMunitionTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablSpawnMunitionTaskScratchPad");
    return (UablSpawnMunitionTaskScratchPad*)res;
}
