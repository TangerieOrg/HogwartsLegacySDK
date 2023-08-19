#include "FMaterialSwapInfoOverrideMaterial.hpp"
#include "UMaterialSwapInfoObject.hpp"
#include "UMaterialSwapInfoOverrideMaterialObject.hpp"
UMaterialSwapInfoOverrideMaterialObject* UMaterialSwapInfoOverrideMaterialObject::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapInfoOverrideMaterialObject");
    return (UMaterialSwapInfoOverrideMaterialObject*)res;
}
