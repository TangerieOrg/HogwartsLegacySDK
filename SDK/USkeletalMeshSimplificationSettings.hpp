#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class USkeletalMeshSimplificationSettings : public UDeveloperSettings {
public:
    FName SkeletalMeshReductionModuleName; // 0x38
    static USkeletalMeshSimplificationSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
