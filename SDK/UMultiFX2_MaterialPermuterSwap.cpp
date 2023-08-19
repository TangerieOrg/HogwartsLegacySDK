#include "FMaterialSwapParameters.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_MaterialPermuterSwap.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
UMultiFX2_MaterialPermuterSwap* UMultiFX2_MaterialPermuterSwap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialPermuterSwap");
    return (UMultiFX2_MaterialPermuterSwap*)res;
}
