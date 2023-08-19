#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSpawnActorTaskScratchPad.hpp"
UAblSpawnActorTaskScratchPad* UAblSpawnActorTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblSpawnActorTaskScratchPad");
    return (UAblSpawnActorTaskScratchPad*)res;
}
