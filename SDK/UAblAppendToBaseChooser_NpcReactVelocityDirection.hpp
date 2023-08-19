#pragma once
#include <cstdint>
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#pragma pack(push, 1)
class UAblAppendToBaseChooser_NpcReactVelocityDirection : public UAblAnimationTagChooser_AppendToBaseChooser {
public:
    bool bAllowForwardBackwardOnly; // 0x28
    bool bAllowLeftRightOnly; // 0x29
    bool bInverse; // 0x2a
    char pad_2b[0x5];
    static UAblAppendToBaseChooser_NpcReactVelocityDirection* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
