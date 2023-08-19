#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UObject;
#pragma pack(push, 1)
class UAssetWidgetInterface : public UInterface {
public:
    static UAssetWidgetInterface* StaticClass();
    bool OnIsAssetAcceptableForDrop(UObject* Asset);
    bool OnAssetDropped(UObject* Asset);
}; // Size: 0x28
#pragma pack(pop)
