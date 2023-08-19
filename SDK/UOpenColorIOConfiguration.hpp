#pragma once
#include <cstdint>
#include "FFilePath.hpp"
#include "FOpenColorIOColorSpace.hpp"
#include "UObject.hpp"
class UOpenColorIOColorTransform;
#pragma pack(push, 1)
class UOpenColorIOConfiguration : public UObject {
public:
    FFilePath ConfigurationFile; // 0x28
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces; // 0x38
    TArray<UOpenColorIOColorTransform*> ColorTransforms; // 0x48
    char pad_58[0x28];
    static UOpenColorIOConfiguration* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
