#pragma once
#include <cstdint>
#include "FSubsurfaceProfileStruct.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USubsurfaceProfile : public UObject {
public:
    FSubsurfaceProfileStruct Settings; // 0x28
    char pad_b4[0x4];
    static USubsurfaceProfile* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
