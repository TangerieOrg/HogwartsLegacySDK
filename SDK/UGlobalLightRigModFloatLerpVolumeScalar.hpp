#pragma once
#include <cstdint>
#include "FLerpVolumesScalarName.hpp"
#include "UGlobalLightRigModFloatExternal.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModFloatLerpVolumeScalar : public UGlobalLightRigModFloatExternal {
public:
    FLerpVolumesScalarName Name; // 0x48
    static UGlobalLightRigModFloatLerpVolumeScalar* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
