#pragma once
#include <cstdint>
#include "EFieldFilterType.hpp"
#include "UFieldSystemMetaData.hpp"
#pragma pack(push, 1)
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData {
public:
    EFieldFilterType FilterType; // 0xc8
    char pad_c9[0x7];
    static UFieldSystemMetaDataFilter* StaticClass();
    UFieldSystemMetaDataFilter* SetMetaDataFilterType(EFieldFilterType FilterType);
}; // Size: 0xd0
#pragma pack(pop)
