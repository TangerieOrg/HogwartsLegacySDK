#pragma once
#include <cstdint>
#include "EDatasmithCADRetessellationRule.hpp"
#include "FDatasmithTessellationOptions.hpp"
#pragma pack(push, 1)
struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions {
    EDatasmithCADRetessellationRule RetessellationRule; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
