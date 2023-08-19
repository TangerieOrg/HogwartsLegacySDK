#include "UClothingInteractor.hpp"
#include "UObject.hpp"
UClothingInteractor* UClothingInteractor::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeInterface.ClothingInteractor");
    return (UClothingInteractor*)res;
}
