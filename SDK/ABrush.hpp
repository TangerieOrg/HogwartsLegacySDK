#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EBrushType.hpp"
#include "FColor.hpp"
#include "FGeomSelection.hpp"
class UModel;
class UBrushComponent;
#pragma pack(push, 1)
class ABrush : public AActor {
public:
    EBrushType BrushType; // 0x248
    char pad_249[0x3];
    FColor BrushColor; // 0x24c
    int32_t PolyFlags; // 0x250
    uint8_t bColored : 1; // 0x254
    uint8_t bSolidWhenSelected : 1; // 0x254
    uint8_t bPlaceableFromClassBrowser : 1; // 0x254
    uint8_t bNotForClientOrServer : 1; // 0x254
    uint8_t pad_bitfield_254_4 : 4;
    char pad_255[0x3];
    UModel* Brush; // 0x258
    UBrushComponent* BrushComponent; // 0x260
    uint8_t bInManipulation : 1; // 0x268
    uint8_t pad_bitfield_268_1 : 7;
    char pad_269[0x7];
    TArray<FGeomSelection> SavedSelections; // 0x270
    static ABrush* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
