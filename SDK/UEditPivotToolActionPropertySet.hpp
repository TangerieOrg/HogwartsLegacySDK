#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet {
public:
    char pad_60[0x8];
    bool bUseWorldBox; // 0x68
    char pad_69[0x7];
    static UEditPivotToolActionPropertySet* StaticClass();
    void Top();
    void Right();
    void Left();
    void Front();
    void Center();
    void Bottom();
    void Back();
}; // Size: 0x70
#pragma pack(pop)
