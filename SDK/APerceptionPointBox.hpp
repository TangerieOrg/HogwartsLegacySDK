#pragma once
#include <cstdint>
#include "APerceptionPointArea.hpp"
#pragma pack(push, 1)
class APerceptionPointBox : public APerceptionPointArea {
public:
    static APerceptionPointBox* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
