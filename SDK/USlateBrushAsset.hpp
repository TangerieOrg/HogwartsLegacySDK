#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USlateBrushAsset : public UObject {
public:
    FSlateBrush Brush; // 0x28
    static USlateBrushAsset* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
