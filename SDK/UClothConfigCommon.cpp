#include "UClothConfigBase.hpp"
#include "UClothConfigCommon.hpp"
UClothConfigCommon* UClothConfigCommon::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeCommon.ClothConfigCommon");
    return (UClothConfigCommon*)res;
}
