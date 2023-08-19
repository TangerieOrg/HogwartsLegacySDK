#pragma once
#include <cstdint>
#include "ATargetPoint.hpp"
#include "EVolumeType.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class ANamedPoint : public ATargetPoint {
public:
    FString m_nameOverride; // 0x248
    bool m_bAppendLevelName; // 0x258
    EVolumeType VolumeType; // 0x259
    char pad_25a[0x6];
    UPrimitiveComponent* Volume; // 0x260
    char pad_268[0x8];
    static ANamedPoint* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
