#pragma once
#include <cstdint>
#include "FDatasmithTessellationOptions.hpp"
#include "UDatasmithOptionsBase.hpp"
#pragma pack(push, 1)
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase {
public:
    FDatasmithTessellationOptions OPTIONS; // 0x28
    static UDatasmithCommonTessellationOptions* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
