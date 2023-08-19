#include "UChaosClothingSimulationInteractor.hpp"
#include "UClothingSimulationInteractor.hpp"
UChaosClothingSimulationInteractor* UChaosClothingSimulationInteractor::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCloth.ChaosClothingSimulationInteractor");
    return (UChaosClothingSimulationInteractor*)res;
}
