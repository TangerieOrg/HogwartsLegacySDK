#pragma once
#include <cstdint>
#include "FControlRigGizmoDefinition.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UControlRigGizmoLibrary : public UObject {
public:
    char pad_28[0x8];
    FControlRigGizmoDefinition DefaultGizmo; // 0x30
    char pad_90[0x28];
    FName MaterialColorParameter; // 0xb8
    TArray<FControlRigGizmoDefinition> Gizmos; // 0xc0
    char pad_d0[0x10];
    static UControlRigGizmoLibrary* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
