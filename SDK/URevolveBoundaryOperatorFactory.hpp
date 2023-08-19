#pragma once
#include <cstdint>
#include "UObject.hpp"
class URevolveBoundaryTool;
#pragma pack(push, 1)
class URevolveBoundaryOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    URevolveBoundaryTool* RevolveBoundaryTool; // 0x30
    static URevolveBoundaryOperatorFactory* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
