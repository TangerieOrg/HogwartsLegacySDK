#pragma once
#include <cstdint>
#include "EBaseCreateFromSelectedTargetType.hpp"
#include "UOnAcceptHandleSourcesProperties.hpp"
#pragma pack(push, 1)
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties {
public:
    EBaseCreateFromSelectedTargetType WriteOutputTo; // 0x68
    char pad_6c[0x4];
    FString OutputName; // 0x70
    FString OutputAsset; // 0x80
    static UBaseCreateFromSelectedHandleSourceProperties* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
