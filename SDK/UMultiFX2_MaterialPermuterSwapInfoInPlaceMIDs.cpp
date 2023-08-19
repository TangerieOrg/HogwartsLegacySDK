#include "FMaterialSwapInfoInPlaceMIDs.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#include "UMultiFX2_MaterialPermuterSwapInfoInPlaceMIDs.hpp"
UMultiFX2_MaterialPermuterSwapInfoInPlaceMIDs* UMultiFX2_MaterialPermuterSwapInfoInPlaceMIDs::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialPermuterSwapInfoInPlaceMIDs");
    return (UMultiFX2_MaterialPermuterSwapInfoInPlaceMIDs*)res;
}
