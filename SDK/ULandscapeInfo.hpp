#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class ALandscapeStreamingProxy;
#pragma pack(push, 1)
class ULandscapeInfo : public UObject {
public:
    char pad_28[0x1c];
    FGuid LandscapeGuid; // 0x44
    int32_t ComponentSizeQuads; // 0x54
    int32_t SubsectionSizeQuads; // 0x58
    int32_t ComponentNumSubsections; // 0x5c
    FVector DrawScale; // 0x60
    char pad_6c[0xa4];
    TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
    char pad_120[0xf0];
    static ULandscapeInfo* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
