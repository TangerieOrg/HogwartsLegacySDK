#include "FDirectionalLightParametersRelative.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsRelativeFull.hpp"
UDirectionalLightParamsRelativeFull* UDirectionalLightParamsRelativeFull::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsRelativeFull");
    return (UDirectionalLightParamsRelativeFull*)res;
}
