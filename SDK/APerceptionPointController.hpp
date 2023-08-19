#pragma once
#include <cstdint>
#include "AAIController.hpp"
#pragma pack(push, 1)
class APerceptionPointController : public AAIController {
public:
    char pad_350[0x8];
    static APerceptionPointController* StaticClass();
}; // Size: 0x358
#pragma pack(pop)
