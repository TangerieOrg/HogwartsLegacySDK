#pragma once
#include <cstdint>
#include "ENpcReactFlyToLocationOption.hpp"
#include "UAblFlyToLocationTaskBase.hpp"
#pragma pack(push, 1)
class UAblNpcReactFlyToLocation : public UAblFlyToLocationTaskBase {
public:
    ENpcReactFlyToLocationOption TargetLocation; // 0x70
    char pad_71[0x7];
    static UAblNpcReactFlyToLocation* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
