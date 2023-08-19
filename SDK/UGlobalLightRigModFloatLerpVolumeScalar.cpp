#include "FLerpVolumesScalarName.hpp"
#include "UGlobalLightRigModFloatExternal.hpp"
#include "UGlobalLightRigModFloatLerpVolumeScalar.hpp"
UGlobalLightRigModFloatLerpVolumeScalar* UGlobalLightRigModFloatLerpVolumeScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightRigModFloatLerpVolumeScalar");
    return (UGlobalLightRigModFloatLerpVolumeScalar*)res;
}
