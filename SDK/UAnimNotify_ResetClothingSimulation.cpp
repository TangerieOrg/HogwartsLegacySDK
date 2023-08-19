#include "UAnimNotify.hpp"
#include "UAnimNotify_ResetClothingSimulation.hpp"
UAnimNotify_ResetClothingSimulation* UAnimNotify_ResetClothingSimulation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotify_ResetClothingSimulation");
    return (UAnimNotify_ResetClothingSimulation*)res;
}
