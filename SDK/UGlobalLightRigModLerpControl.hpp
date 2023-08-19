#pragma once
#include <cstdint>
#include "EGlobalLightRigModParam.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGlobalLightRigModLerpControl : public UObject {
public:
    EGlobalLightRigModParam Param; // 0x28
    bool bEnabled; // 0x29
    char pad_2a[0x6];
    static UGlobalLightRigModLerpControl* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
