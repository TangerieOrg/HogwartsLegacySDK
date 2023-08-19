#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UHandleLink : public UObject {
public:
    char pad_28[0x10];
    UObject* m_pObject; // 0x38
    char pad_40[0x8];
    static UHandleLink* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
