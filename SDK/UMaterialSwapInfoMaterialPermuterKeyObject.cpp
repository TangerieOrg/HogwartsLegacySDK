#include "FMaterialSwapKey.hpp"
#include "UMaterialSwapInfoMaterialPermuterKeyObject.hpp"
#include "UMaterialSwapInfoObjectBase.hpp"
UMaterialSwapInfoMaterialPermuterKeyObject* UMaterialSwapInfoMaterialPermuterKeyObject::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapInfoMaterialPermuterKeyObject");
    return (UMaterialSwapInfoMaterialPermuterKeyObject*)res;
}
