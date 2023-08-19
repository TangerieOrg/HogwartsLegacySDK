#pragma once
#include <cstdint>
#include "UObject.hpp"
class UHoleFillTool;
#pragma pack(push, 1)
class UHoleFillOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UHoleFillTool* FillTool; // 0x30
    static UHoleFillOperatorFactory* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
