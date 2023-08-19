#include "UClothingSimulationFactory.hpp"
#include "UObject.hpp"
UClothingSimulationFactory* UClothingSimulationFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory");
    return (UClothingSimulationFactory*)res;
}
