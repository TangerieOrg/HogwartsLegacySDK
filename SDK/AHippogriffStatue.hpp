#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AHippogriffStatue : public AActor {
public:
    static AHippogriffStatue* StaticClass();
    void RepairAll();
}; // Size: 0x248
#pragma pack(pop)
