#pragma once
#include <cstdint>
#include "FActiveGizmo.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UInteractiveGizmoManager : public UObject {
public:
    char pad_28[0x8];
    TArray<FActiveGizmo> ActiveGizmos; // 0x30
    char pad_40[0x78];
    static UInteractiveGizmoManager* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
