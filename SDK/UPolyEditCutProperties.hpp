#pragma once
#include <cstdint>
#include "EPolyEditCutPlaneOrientation.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UPolyEditCutProperties : public UInteractiveToolPropertySet {
public:
    EPolyEditCutPlaneOrientation Orientation; // 0x60
    bool bSnapToVertices; // 0x64
    char pad_65[0x3];
    static UPolyEditCutProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
