#pragma once
#include <cstdint>
class UPawnAction;
#pragma pack(push, 1)
struct FPawnActionStack {
    UPawnAction* TopAction; // 0x0
}; // Size: 0x8
#pragma pack(pop)
