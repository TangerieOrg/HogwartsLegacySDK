#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UUsdPrimTwin : public UObject {
public:
    char pad_28[0x18];
    FString PrimPath; // 0x40
    char pad_50[0x88];
    static UUsdPrimTwin* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
