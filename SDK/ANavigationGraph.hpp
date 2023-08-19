#pragma once
#include <cstdint>
#include "ANavigationData.hpp"
#pragma pack(push, 1)
class ANavigationGraph : public ANavigationData {
public:
    static ANavigationGraph* StaticClass();
}; // Size: 0x450
#pragma pack(pop)
