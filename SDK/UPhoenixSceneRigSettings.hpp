#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UPhoenixSceneRigSettings : public UObject {
public:
    UClass* SkipWidgetClass; // 0x28
    static UPhoenixSceneRigSettings* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
