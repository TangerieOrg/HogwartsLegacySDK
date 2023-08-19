#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClass;
#pragma pack(push, 1)
class UHoverDroneConfigObject : public UObject {
public:
    UClass* m_HoverDroneControllerClass; // 0x28
    char pad_30[0x8];
    static UHoverDroneConfigObject* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
