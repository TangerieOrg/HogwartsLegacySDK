#pragma once
#include <cstdint>
#include "EMeshSculptFalloffType.hpp"
#include "EMeshVertexSculptBrushType.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet {
public:
    EMeshVertexSculptBrushType PrimaryBrushType; // 0x60
    EMeshSculptFalloffType PrimaryFalloffType; // 0x61
    bool bFreezeTarget; // 0x62
    bool bSmoothErases; // 0x63
    char pad_64[0x4];
    static UVertexBrushSculptProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
