#include "FExpHeightFogParameters.hpp"
#include "UExpHeightFogParams.hpp"
#include "UExpHeightFogParamsFull.hpp"
UExpHeightFogParamsFull* UExpHeightFogParamsFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.ExpHeightFogParamsFull");
    return (UExpHeightFogParamsFull*)res;
}
