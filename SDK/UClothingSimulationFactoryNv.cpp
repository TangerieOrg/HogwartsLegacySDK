#include "UClothingSimulationFactory.hpp"
#include "UClothingSimulationFactoryNv.hpp"
UClothingSimulationFactoryNv* UClothingSimulationFactoryNv::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv");
    return (UClothingSimulationFactoryNv*)res;
}
