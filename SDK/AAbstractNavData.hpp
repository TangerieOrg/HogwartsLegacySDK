#pragma once
#include <cstdint>
#include "ANavigationData.hpp"
#pragma pack(push, 1)
class AAbstractNavData : public ANavigationData {
public:
    static AAbstractNavData* StaticClass();
}; // Size: 0x450
#pragma pack(pop)
