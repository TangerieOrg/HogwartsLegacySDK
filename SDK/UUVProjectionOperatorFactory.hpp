#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUVProjectionTool;
#pragma pack(push, 1)
class UUVProjectionOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UUVProjectionTool* Tool; // 0x30
    char pad_38[0x8];
    static UUVProjectionOperatorFactory* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
