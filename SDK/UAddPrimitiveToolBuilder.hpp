#pragma once
#include <cstdint>
#include "UInteractiveToolBuilder.hpp"
#pragma pack(push, 1)
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder {
public:
    char pad_28[0x10];
    static UAddPrimitiveToolBuilder* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
