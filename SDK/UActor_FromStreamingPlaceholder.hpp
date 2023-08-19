#pragma once
#include <cstdint>
#include "FWorldActorReference.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_FromStreamingPlaceholder : public UActorProvider {
public:
    char pad_38[0x8];
    FWorldActorReference StreamingPlaceholder; // 0x40
    static UActor_FromStreamingPlaceholder* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
