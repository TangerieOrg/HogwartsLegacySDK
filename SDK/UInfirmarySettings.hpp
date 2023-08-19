#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInfirmarySettings : public UObject {
public:
    int32_t MaximumNumberOfStudentsInInfirmary; // 0x28
    char pad_2c[0x4];
    FString ActivityKey; // 0x30
    FString HospitalSiteLocation; // 0x40
    static UInfirmarySettings* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
