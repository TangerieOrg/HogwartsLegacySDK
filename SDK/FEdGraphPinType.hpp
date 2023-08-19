#pragma once
#include <cstdint>
#include "EPinContainerType.hpp"
#include "FEdGraphTerminalType.hpp"
#include "FSimpleMemberReference.hpp"
#pragma pack(push, 1)
struct FEdGraphPinType {
    FName PinCategory; // 0x0
    FName PinSubCategory; // 0x8
    char pad_10[0x8];
    FSimpleMemberReference PinSubCategoryMemberReference; // 0x18
    FEdGraphTerminalType PinValueType; // 0x38
    EPinContainerType ContainerType; // 0x54
    uint8_t bIsArray : 1; // 0x55
    uint8_t bIsReference : 1; // 0x55
    uint8_t bIsConst : 1; // 0x55
    uint8_t bIsWeakPointer : 1; // 0x55
    uint8_t bIsUObjectWrapper : 1; // 0x55
    uint8_t pad_bitfield_55_5 : 3;
    char pad_56[0x2];
}; // Size: 0x58
#pragma pack(pop)
