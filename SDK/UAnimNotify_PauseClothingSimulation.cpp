#include "UAnimNotify.hpp"
#include "UAnimNotify_PauseClothingSimulation.hpp"
UAnimNotify_PauseClothingSimulation* UAnimNotify_PauseClothingSimulation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotify_PauseClothingSimulation");
    return (UAnimNotify_PauseClothingSimulation*)res;
}
