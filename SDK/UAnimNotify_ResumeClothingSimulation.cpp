#include "UAnimNotify.hpp"
#include "UAnimNotify_ResumeClothingSimulation.hpp"
UAnimNotify_ResumeClothingSimulation* UAnimNotify_ResumeClothingSimulation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimNotify_ResumeClothingSimulation");
    return (UAnimNotify_ResumeClothingSimulation*)res;
}
