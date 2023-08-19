#pragma once
#include <cstdint>
#include "UObject.hpp"
class UInputRouter;
class UInteractiveToolManager;
class UInteractiveGizmoManager;
#pragma pack(push, 1)
class UInteractiveToolsContext : public UObject {
public:
    char pad_28[0x30];
    UInputRouter* InputRouter; // 0x58
    UInteractiveToolManager* ToolManager; // 0x60
    UInteractiveGizmoManager* GizmoManager; // 0x68
    char pad_70[0x28];
    static UInteractiveToolsContext* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
