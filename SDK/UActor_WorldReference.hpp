#pragma once
#include <cstdint>
#include "FWorldActorReference.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_WorldReference : public UActorProvider {
public:
    FWorldActorReference ActorReference; // 0x38
    static UActor_WorldReference* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
