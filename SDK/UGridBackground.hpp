#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#pragma pack(push, 1)
class UGridBackground : public UCanvasPanel {
public:
    float LineWidth; // 0x130
    FLinearColor GridColor; // 0x134
    char pad_144[0x4];
    static UGridBackground* StaticClass();
    void PopulateGrid(FVector2D GridSpacing, int32_t Rows, int32_t Columns);
}; // Size: 0x148
#pragma pack(pop)
