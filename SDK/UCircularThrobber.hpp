#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "UWidget.hpp"
class USlateBrushAsset;
#pragma pack(push, 1)
class UCircularThrobber : public UWidget {
public:
    int32_t NumberOfPieces; // 0x108
    float Period; // 0x10c
    float Radius; // 0x110
    char pad_114[0x4];
    USlateBrushAsset* PieceImage; // 0x118
    FSlateBrush Image; // 0x120
    bool bEnableRadius; // 0x1a8
    char pad_1a9[0x17];
    static UCircularThrobber* StaticClass();
    void SetRadius(float InRadius);
    void SetPeriod(float InPeriod);
    void SetNumberOfPieces(int32_t InNumberOfPieces);
}; // Size: 0x1c0
#pragma pack(pop)
