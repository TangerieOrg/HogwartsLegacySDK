#pragma once
#include <cstdint>
#include "UGizmoBaseFloatParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource {
public:
    char pad_48[0x10];
    float MinParameter; // 0x58
    float MaxParameter; // 0x5c
    static UGizmoAxisIntervalParameterSource* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
