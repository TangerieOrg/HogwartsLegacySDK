#include "FSkinFXMaterialScalarProperty.hpp"
#include "USkinFXParameterDriverMod.hpp"
#include "USkinFXParameterDriverModScalar.hpp"
USkinFXParameterDriverModScalar* USkinFXParameterDriverModScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXParameterDriverModScalar");
    return (USkinFXParameterDriverModScalar*)res;
}
