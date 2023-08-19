#pragma once
#include <cstdint>
#include "USceneRigStory.hpp"
#pragma pack(push, 1)
class UGhostStory : public USceneRigStory {
public:
    char pad_138[0x8];
    static UGhostStory* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
