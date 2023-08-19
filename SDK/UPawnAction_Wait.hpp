#pragma once
#include <cstdint>
#include "UPawnAction.hpp"
#pragma pack(push, 1)
class UPawnAction_Wait : public UPawnAction {
public:
    float TimeToWait; // 0x90
    char pad_94[0xc];
    static UPawnAction_Wait* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
