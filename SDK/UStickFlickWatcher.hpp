#pragma once
#include <cstdint>
#include "UStickWatcher.hpp"
#pragma pack(push, 1)
class UStickFlickWatcher : public UStickWatcher {
public:
    char pad_130[0x18];
    static UStickFlickWatcher* StaticClass();
}; // Size: 0x148
#pragma pack(pop)
