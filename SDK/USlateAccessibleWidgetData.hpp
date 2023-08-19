#pragma once
#include <cstdint>
#include "ESlateAccessibleBehavior.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USlateAccessibleWidgetData : public UObject {
public:
    bool bCanChildrenBeAccessible; // 0x28
    ESlateAccessibleBehavior AccessibleBehavior; // 0x29
    ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a
    char pad_2b[0x55];
    static USlateAccessibleWidgetData* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
