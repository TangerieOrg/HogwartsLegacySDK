#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGCObjectReferencer : public UObject {
public:
    char pad_28[0x48];
    static UGCObjectReferencer* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
