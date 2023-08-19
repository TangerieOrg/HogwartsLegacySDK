#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UAcceptOutputProperties : public UInteractiveToolPropertySet {
public:
    bool bExportSeparatedPiecesAsNewMeshAssets; // 0x60
    char pad_61[0x7];
    static UAcceptOutputProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
