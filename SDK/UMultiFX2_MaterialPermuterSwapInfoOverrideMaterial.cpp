#include "FMaterialSwapInfoOverrideMaterial.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoOverrideMaterial.hpp"
UMultiFX2_MaterialPermuterSwapInfoOverrideMaterial* UMultiFX2_MaterialPermuterSwapInfoOverrideMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialPermuterSwapInfoOverrideMaterial");
    return (UMultiFX2_MaterialPermuterSwapInfoOverrideMaterial*)res;
}
