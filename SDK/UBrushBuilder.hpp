#pragma once
#include <cstdint>
#include "FBuilderPoly.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBrushBuilder : public UObject {
public:
    FString BitmapFilename; // 0x28
    FString ToolTip; // 0x38
    uint8_t NotifyBadParams : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x7];
    TArray<FVector> Vertices; // 0x50
    TArray<FBuilderPoly> Polys; // 0x60
    FName Layer; // 0x70
    uint8_t MergeCoplanars : 1; // 0x78
    uint8_t pad_bitfield_78_1 : 7;
    char pad_79[0x7];
    static UBrushBuilder* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
