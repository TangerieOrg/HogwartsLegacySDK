#pragma once
#include <cstdint>
#include "FDatasmithStaticParameterSetTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate {
public:
    char pad_30[0x118];
    FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
    static UDatasmithMaterialInstanceTemplate* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
