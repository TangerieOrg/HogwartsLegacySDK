#pragma once
#include <cstdint>
#include "UGlobalLightRigModLerpControl.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModLerpBinary : public UGlobalLightRigModLerpControl {
public:
    bool bInvert; // 0x30
    char pad_31[0x7];
    static UGlobalLightRigModLerpBinary* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
