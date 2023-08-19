#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInteractiveToolPropertySet : public UObject {
public:
    char pad_28[0x10];
    UInteractiveToolPropertySet* CachedProperties; // 0x38
    bool bIsPropertySetEnabled; // 0x40
    char pad_41[0x1f];
    static UInteractiveToolPropertySet* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
