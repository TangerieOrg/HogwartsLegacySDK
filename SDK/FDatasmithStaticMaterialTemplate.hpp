#pragma once
#include <cstdint>
class UMaterialInterface;
#pragma pack(push, 1)
struct FDatasmithStaticMaterialTemplate {
    FName MaterialSlotName; // 0x0
    UMaterialInterface* MaterialInterface; // 0x8
}; // Size: 0x10
#pragma pack(pop)
