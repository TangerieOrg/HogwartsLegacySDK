#pragma once
#include <cstdint>
#include "UCameraFixupOperation.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UCameraFixupSetTargetOperation : public UCameraFixupOperation {
public:
    UTransformProvider* Target; // 0x30
    uint8_t DrawDebug : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    static UCameraFixupSetTargetOperation* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
