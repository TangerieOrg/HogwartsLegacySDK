#pragma once
#include <cstdint>
#include "FTransform.hpp"
class UAIPerformTaskBase;
#pragma pack(push, 1)
struct FAIPerformTaskContainer {
    UAIPerformTaskBase* TaskData; // 0x0
    char pad_8[0x8];
    FTransform WidgetTransform; // 0x10
}; // Size: 0x40
#pragma pack(pop)
