#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UNavigationDataInterface : public UInterface {
public:
    static UNavigationDataInterface* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
