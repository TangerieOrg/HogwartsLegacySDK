#include "UMultiFX2_MaterialPermuterSwapInfoBase.hpp"
#include "UObject.hpp"
UMultiFX2_MaterialPermuterSwapInfoBase* UMultiFX2_MaterialPermuterSwapInfoBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_MaterialPermuterSwapInfoBase");
    return (UMultiFX2_MaterialPermuterSwapInfoBase*)res;
}
