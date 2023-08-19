#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
#include "FDbSingleColumnInfo.hpp"
#pragma pack(push, 1)
class APortkeyInventoryItemTool : public AInventoryItemTool {
public:
    FDbSingleColumnInfo TargetFastTravelLocation; // 0x430
    static APortkeyInventoryItemTool* StaticClass();
    void Transport();
}; // Size: 0x4b8
#pragma pack(pop)
