#pragma once
#include <cstdint>
#include "EHandleSourcesMethod.hpp"
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet {
public:
    EHandleSourcesMethod OnToolAccept; // 0x60
    char pad_61[0x7];
    static UOnAcceptHandleSourcesProperties* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
