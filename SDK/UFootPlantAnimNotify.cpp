#include "EFootPlantEnum.hpp"
#include "UAnimNotify.hpp"
#include "UFootPlantAnimNotify.hpp"
UFootPlantAnimNotify* UFootPlantAnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.FootPlantAnimNotify");
    return (UFootPlantAnimNotify*)res;
}
