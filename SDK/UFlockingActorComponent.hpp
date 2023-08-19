#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UFlockingActorComponent : public UActorComponent {
public:
    bool bEditorOnly; // 0xc8
    char pad_c9[0x7];
    static UFlockingActorComponent* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
