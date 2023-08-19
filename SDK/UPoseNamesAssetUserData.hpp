#pragma once
#include <cstdint>
#include "UAssetUserData.hpp"
#pragma pack(push, 1)
class UPoseNamesAssetUserData : public UAssetUserData {
public:
    TArray<FName> PoseNames; // 0x28
    static UPoseNamesAssetUserData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
