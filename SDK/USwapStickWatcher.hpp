#pragma once
#include <cstdint>
#include "UStickWatcher.hpp"
#pragma pack(push, 1)
class USwapStickWatcher : public UStickWatcher {
public:
    char pad_130[0x10];
    static USwapStickWatcher* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
