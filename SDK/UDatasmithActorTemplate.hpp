#pragma once
#include <cstdint>
#include "UDatasmithObjectTemplate.hpp"
#pragma pack(push, 1)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate {
public:
    char pad_30[0xa0];
    static UDatasmithActorTemplate* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
