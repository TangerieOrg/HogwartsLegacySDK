#include "FMaterialSwapInfoOverrideMaterials.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoOverrideMaterials.hpp"
UMultiFX2_MaterialPermuterSwapInfoOverrideMaterials* UMultiFX2_MaterialPermuterSwapInfoOverrideMaterials::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialPermuterSwapInfoOverrideMaterials");
    return (UMultiFX2_MaterialPermuterSwapInfoOverrideMaterials*)res;
}
