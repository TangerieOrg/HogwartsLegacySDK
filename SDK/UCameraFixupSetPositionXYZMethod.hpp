#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraFixupSetPositionMethod.hpp"
class UTransformProvider;
class UVectorProvider;
#pragma pack(push, 1)
class UCameraFixupSetPositionXYZMethod : public UCameraFixupSetPositionMethod {
public:
    UTransformProvider* Target; // 0x28
    uint8_t DrawDebug : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x3];
    FVector Position; // 0x34
    UVectorProvider* PositionProvider; // 0x40
    static UCameraFixupSetPositionXYZMethod* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
