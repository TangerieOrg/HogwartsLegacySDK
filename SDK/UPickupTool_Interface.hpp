#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UPickupTool_Interface : public UInterface {
public:
    static UPickupTool_Interface* StaticClass();
    void DeactivateTool();
}; // Size: 0x28
#pragma pack(pop)
