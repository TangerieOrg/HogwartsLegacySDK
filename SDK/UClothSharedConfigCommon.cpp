#include "UClothConfigCommon.hpp"
#include "UClothSharedConfigCommon.hpp"
UClothSharedConfigCommon* UClothSharedConfigCommon::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
    return (UClothSharedConfigCommon*)res;
}
