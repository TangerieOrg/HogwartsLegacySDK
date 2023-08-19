#pragma once
#include <cstdint>
#include "UObject.hpp"
class UDrawAndRevolveTool;
#pragma pack(push, 1)
class URevolveOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UDrawAndRevolveTool* RevolveTool; // 0x30
    static URevolveOperatorFactory* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
