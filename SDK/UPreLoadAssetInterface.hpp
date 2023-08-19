#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UPreLoadAssetInterface : public UInterface {
public:
    static UPreLoadAssetInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
