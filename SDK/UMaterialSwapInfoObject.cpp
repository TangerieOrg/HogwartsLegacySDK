#include "UMaterialSwapInfoObject.hpp"
#include "UMaterialSwapInfoObjectBase.hpp"
UMaterialSwapInfoObject* UMaterialSwapInfoObject::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapInfoObject");
    return (UMaterialSwapInfoObject*)res;
}
