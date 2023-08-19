#include "FMaterialSwapInfoOverrideMaterials.hpp"
#include "UMaterialSwapInfoObject.hpp"
#include "UMaterialSwapInfoOverrideMaterialsObject.hpp"
UMaterialSwapInfoOverrideMaterialsObject* UMaterialSwapInfoOverrideMaterialsObject::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapInfoOverrideMaterialsObject");
    return (UMaterialSwapInfoOverrideMaterialsObject*)res;
}
