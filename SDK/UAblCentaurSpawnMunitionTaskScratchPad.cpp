#include "AActor.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCentaurSpawnMunitionTaskScratchPad.hpp"
UAblCentaurSpawnMunitionTaskScratchPad* UAblCentaurSpawnMunitionTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCentaurSpawnMunitionTaskScratchPad");
    return (UAblCentaurSpawnMunitionTaskScratchPad*)res;
}
