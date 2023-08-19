#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FChromaSDKAppInfoType {
    FString Title; // 0x0
    FString Description; // 0x10
    FString Author_Name; // 0x20
    FString Author_Contact; // 0x30
    int32_t SupportedDevice; // 0x40
    int32_t Category; // 0x44
}; // Size: 0x48
#pragma pack(pop)
