#pragma once
#include <cstdint>
#include "UObject.hpp"
class UEditNormalsTool;
#pragma pack(push, 1)
class UEditNormalsOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UEditNormalsTool* Tool; // 0x30
    char pad_38[0x8];
    static UEditNormalsOperatorFactory* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
