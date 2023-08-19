#pragma once
#include <cstdint>
#include "USoundSubmixBase.hpp"
#pragma pack(push, 1)
class USoundSubmixWithParentBase : public USoundSubmixBase {
public:
    USoundSubmixBase* ParentSubmix; // 0x38
    static USoundSubmixWithParentBase* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
