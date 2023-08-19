#pragma once
#include <cstdint>
#include "FCameraStackMultiCrossBlendGroupTemplate.hpp"
#include "UCameraStackBehaviorMultiCrossBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorMultiCrossBlendStandalone : public UCameraStackBehaviorMultiCrossBlend {
public:
    TArray<FCameraStackMultiCrossBlendGroupTemplate> GroupTemplates; // 0x350
    bool bUpdateWeightsFromImplementation; // 0x360
    char pad_361[0x7];
    static UCameraStackBehaviorMultiCrossBlendStandalone* StaticClass();
}; // Size: 0x368
#pragma pack(pop)
