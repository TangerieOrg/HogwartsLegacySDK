#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UMountStreamingComponent : public UActorComponent {
public:
    bool bAllowInteriorStreaming; // 0xc8
    char pad_c9[0x7];
    static UMountStreamingComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
