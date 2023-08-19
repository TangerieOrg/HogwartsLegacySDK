#pragma once
#include <cstdint>
#include "ANavigationObjectBase.hpp"
#pragma pack(push, 1)
class APlayerStart : public ANavigationObjectBase {
public:
    FName PlayerStartTag; // 0x270
    static APlayerStart* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
