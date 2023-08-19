#pragma once
#include <cstdint>
#include "FSlateBrush.hpp"
#include "UWidget.hpp"
class USlateBrushAsset;
#pragma pack(push, 1)
class UThrobber : public UWidget {
public:
    int32_t NumberOfPieces; // 0x108
    bool bAnimateHorizontally; // 0x10c
    bool bAnimateVertically; // 0x10d
    bool bAnimateOpacity; // 0x10e
    char pad_10f[0x1];
    USlateBrushAsset* PieceImage; // 0x110
    FSlateBrush Image; // 0x118
    char pad_1a0[0x10];
    static UThrobber* StaticClass();
    void SetNumberOfPieces(int32_t InNumberOfPieces);
    void SetAnimateVertically(bool bInAnimateVertically);
    void SetAnimateOpacity(bool bInAnimateOpacity);
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
}; // Size: 0x1b0
#pragma pack(pop)
