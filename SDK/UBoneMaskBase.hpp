#pragma once
#include <cstdint>
#include "UAnimMetaData.hpp"
#pragma pack(push, 1)
class UBoneMaskBase : public UAnimMetaData {
public:
    char pad_28[0x8];
    static UBoneMaskBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
