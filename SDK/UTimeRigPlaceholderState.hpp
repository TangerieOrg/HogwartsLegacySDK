#pragma once
#include <cstdint>
#include "UTimeRigElementState.hpp"
#pragma pack(push, 1)
class UTimeRigPlaceholderState : public UTimeRigElementState {
public:
    char pad_48[0x28];
    static UTimeRigPlaceholderState* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
