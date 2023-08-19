#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UMeshStatisticsProperties : public UInteractiveToolPropertySet {
public:
    FString Mesh; // 0x60
    FString UV; // 0x70
    FString Attributes; // 0x80
    static UMeshStatisticsProperties* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
