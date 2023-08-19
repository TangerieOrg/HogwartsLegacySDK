#pragma once
#include <cstdint>
#include "FSoundGroup.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USoundGroups : public UObject {
public:
    TArray<FSoundGroup> SoundGroupProfiles; // 0x28
    char pad_38[0x50];
    static USoundGroups* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
