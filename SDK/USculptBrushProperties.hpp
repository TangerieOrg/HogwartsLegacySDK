#pragma once
#include <cstdint>
#include "UBrushBaseProperties.hpp"
#pragma pack(push, 1)
class USculptBrushProperties : public UBrushBaseProperties {
public:
    float Depth; // 0x78
    bool bHitBackFaces; // 0x7c
    char pad_7d[0x3];
    float Lazyness; // 0x80
    bool bShowPerBrushProps; // 0x84
    char pad_85[0x3];
    static USculptBrushProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
