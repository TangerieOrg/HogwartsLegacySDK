#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierOptions.hpp"
#pragma pack(push, 1)
class UBlackboardActorQualifierOptions : public UQualifierOptions {
public:
    FBlackboardKeySelector ActorKey; // 0x28
    static UBlackboardActorQualifierOptions* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
