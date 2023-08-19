#include "FDirectionalLightBasicParametersRelative.hpp"
#include "FDirectionalLightShaftsRelative.hpp"
#include "UDirectionalLightParams.hpp"
#include "UDirectionalLightParamsRelativeSimple.hpp"
UDirectionalLightParamsRelativeSimple* UDirectionalLightParamsRelativeSimple::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.DirectionalLightParamsRelativeSimple");
    return (UDirectionalLightParamsRelativeSimple*)res;
}
