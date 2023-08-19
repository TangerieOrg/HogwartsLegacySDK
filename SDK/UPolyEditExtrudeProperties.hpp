#pragma once
#include <cstdint>
#include "EPolyEditExtrudeDirection.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet {
public:
    EPolyEditExtrudeDirection Direction; // 0x60
    bool bShellsToSolids; // 0x64
    char pad_65[0x3];
    static UPolyEditExtrudeProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
