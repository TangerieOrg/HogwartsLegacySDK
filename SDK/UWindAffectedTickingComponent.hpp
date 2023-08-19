#pragma once
#include <cstdint>
#include "UWindAffectedComponent.hpp"
#pragma pack(push, 1)
class UWindAffectedTickingComponent : public UWindAffectedComponent {
public:
    bool bTickBeforeBeginPlay; // 0x240
    char pad_241[0xf];
    static UWindAffectedTickingComponent* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
