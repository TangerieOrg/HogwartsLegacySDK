#include "UChaosClothingSimulationFactory.hpp"
#include "UClothingSimulationFactory.hpp"
UChaosClothingSimulationFactory* UChaosClothingSimulationFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCloth.ChaosClothingSimulationFactory");
    return (UChaosClothingSimulationFactory*)res;
}
