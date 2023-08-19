#include "UAnimNotify.hpp"
#include "UAnimNotify_ResetActorClothingSimulation.hpp"
UAnimNotify_ResetActorClothingSimulation* UAnimNotify_ResetActorClothingSimulation::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimNotify_ResetActorClothingSimulation");
    return (UAnimNotify_ResetActorClothingSimulation*)res;
}
