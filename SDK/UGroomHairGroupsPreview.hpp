#pragma once
#include <cstdint>
#include "FGroomHairGroupPreview.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UGroomHairGroupsPreview : public UObject {
public:
    TArray<FGroomHairGroupPreview> Groups; // 0x28
    static UGroomHairGroupsPreview* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
