#pragma once
#include <cstdint>
#include "UObject.hpp"
class UOpenColorIOConfiguration;
#pragma pack(push, 1)
class UOpenColorIOColorTransform : public UObject {
public:
    UOpenColorIOConfiguration* ConfigurationOwner; // 0x28
    FString SourceColorSpace; // 0x30
    FString DestinationColorSpace; // 0x40
    char pad_50[0x48];
    static UOpenColorIOColorTransform* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
