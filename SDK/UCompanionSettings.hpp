#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "FOdcPathSpec.hpp"
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UCompanionSettings : public UObject {
public:
    FSoftObjectPath CompanionConfigData; // 0x28
    FDbSingleColumnInfo TestCompanionName; // 0x40
    char pad_c8[0x50];
    TArray<uint32_t> BuffLevels; // 0x118
    FOdcPathSpec CompanionPathSpecs; // 0x128
    static UCompanionSettings* StaticClass();
}; // Size: 0x178
#pragma pack(pop)
