#include "FMaterialSwapKeyUI.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoKey.hpp"
UMultiFX2_MaterialPermuterSwapInfoKey* UMultiFX2_MaterialPermuterSwapInfoKey::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialPermuterSwapInfoKey");
    return (UMultiFX2_MaterialPermuterSwapInfoKey*)res;
}
