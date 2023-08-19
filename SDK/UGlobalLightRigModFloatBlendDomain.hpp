#pragma once
#include <cstdint>
#include "UGlobalLightRigModFloatExternal.hpp"
class URenderSettingsCustomBlendDomain;
#pragma pack(push, 1)
class UGlobalLightRigModFloatBlendDomain : public UGlobalLightRigModFloatExternal {
public:
    URenderSettingsCustomBlendDomain* BlendDomain; // 0x48
    static UGlobalLightRigModFloatBlendDomain* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
