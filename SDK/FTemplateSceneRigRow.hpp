#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
class UClass;
class USceneRig;
#pragma pack(push, 1)
struct FTemplateSceneRigRow : public FTableRowBase {
    UClass* SceneRigClass; // 0x8
    USceneRig* TemplateSceneRig; // 0x10
}; // Size: 0x18
#pragma pack(pop)
