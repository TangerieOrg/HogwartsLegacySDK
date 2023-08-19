#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AccessibilitySubtitle : public USceneRigActionBase {
public:
    FString LocDirectKey; // 0x88
    static USceneAction_AccessibilitySubtitle* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
