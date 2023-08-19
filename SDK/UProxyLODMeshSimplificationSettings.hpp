#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UProxyLODMeshSimplificationSettings : public UDeveloperSettings {
public:
    FName ProxyLODMeshReductionModuleName; // 0x38
    static UProxyLODMeshSimplificationSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
