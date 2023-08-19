#pragma once
#include <cstdint>
#include "UObject.hpp"
class UWorld;
#pragma pack(push, 1)
class ULightMobilityManager : public UObject {
public:
    char pad_28[0x50];
    UWorld* World; // 0x78
    bool bAutoManageMobility; // 0x80
    char pad_81[0x7];
    static ULightMobilityManager* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
