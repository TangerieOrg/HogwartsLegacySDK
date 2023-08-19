#pragma once
#include <cstdint>
#include "UExpHeightFogTransmuter.hpp"
class UGlobalLightRigModCollection;
#pragma pack(push, 1)
class UExpHeightFogTransmuterGlobalLightRigModCollection : public UExpHeightFogTransmuter {
public:
    UGlobalLightRigModCollection* ModCollection; // 0x28
    static UExpHeightFogTransmuterGlobalLightRigModCollection* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
