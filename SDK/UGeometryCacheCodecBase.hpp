#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGeometryCacheCodecBase : public UObject {
public:
    TArray<int32_t> TopologyRanges; // 0x28
    static UGeometryCacheCodecBase* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
