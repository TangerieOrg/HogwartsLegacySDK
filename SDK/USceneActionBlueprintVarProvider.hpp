#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneActionBlueprintVarProvider : public UObject {
public:
    FName Name; // 0x28
    bool bOnce; // 0x30
    char pad_31[0x7];
    static USceneActionBlueprintVarProvider* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
