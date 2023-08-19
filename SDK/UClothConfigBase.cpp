#include "UClothConfigBase.hpp"
#include "UObject.hpp"
UClothConfigBase* UClothConfigBase::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase");
    return (UClothConfigBase*)res;
}
