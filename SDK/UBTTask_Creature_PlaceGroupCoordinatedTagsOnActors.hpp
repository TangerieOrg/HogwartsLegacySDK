#pragma once
#include <cstdint>
#include "FTagPlacementOrder.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_PlaceGroupCoordinatedTagsOnActors : public UBTTaskNode {
public:
    TArray<FTagPlacementOrder> AllOrders; // 0x70
    static UBTTask_Creature_PlaceGroupCoordinatedTagsOnActors* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
