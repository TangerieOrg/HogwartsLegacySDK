#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UClass;
#pragma pack(push, 1)
struct FWidgetType : public FTableRowBase {
    UClass* Widget; // 0x8
}; // Size: 0x10
#pragma pack(pop)
