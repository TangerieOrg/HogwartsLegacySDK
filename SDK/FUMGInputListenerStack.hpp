#pragma once
#include <cstdint>
#include "FUMGInputListener.hpp"
#pragma pack(push, 1)
struct FUMGInputListenerStack {
    TArray<FUMGInputListener> InputListenerStack; // 0x0
}; // Size: 0x10
#pragma pack(pop)
