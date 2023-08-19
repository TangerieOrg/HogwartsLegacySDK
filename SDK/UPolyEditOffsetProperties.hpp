#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet {
public:
    bool bUseFaceNormals; // 0x60
    char pad_61[0x7];
    static UPolyEditOffsetProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
