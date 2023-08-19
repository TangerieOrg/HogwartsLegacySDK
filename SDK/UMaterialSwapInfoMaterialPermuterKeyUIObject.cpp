#include "FMaterialSwapKeyUI.hpp"
#include "UMaterialSwapInfoMaterialPermuterKeyUIObject.hpp"
#include "UMaterialSwapInfoObject.hpp"
UMaterialSwapInfoMaterialPermuterKeyUIObject* UMaterialSwapInfoMaterialPermuterKeyUIObject::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialSwapInfoMaterialPermuterKeyUIObject");
    return (UMaterialSwapInfoMaterialPermuterKeyUIObject*)res;
}
