#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UPlayerTemplateDataAsset;
#pragma pack(push, 1)
struct FPlayerTemplateNameToDataAsset : public FTableRowBase {
    UPlayerTemplateDataAsset* PlayerTemplateDataAsset; // 0x8
}; // Size: 0x10
#pragma pack(pop)
