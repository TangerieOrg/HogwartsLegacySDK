#pragma once
#include <cstdint>
#include "ABroomItemTool.hpp"
class USceneComponent;
#pragma pack(push, 1)
class ABP_BroomMoonTrimmerItem_C : public ABroomItemTool {
public:
    USceneComponent* DefaultSceneRoot; // 0x4a8
    static ABP_BroomMoonTrimmerItem_C* StaticClass();
}; // Size: 0x4b0
#pragma pack(pop)
