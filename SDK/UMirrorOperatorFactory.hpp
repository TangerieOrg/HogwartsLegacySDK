#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMirrorTool;
#pragma pack(push, 1)
class UMirrorOperatorFactory : public UObject {
public:
    char pad_28[0x8];
    UMirrorTool* MirrorTool; // 0x30
    char pad_38[0x8];
    static UMirrorOperatorFactory* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
