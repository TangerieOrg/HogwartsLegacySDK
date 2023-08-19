#pragma once
#include <cstdint>
#include "FRemoteControlField.hpp"
#pragma pack(push, 1)
struct FRemoteControlProperty : public FRemoteControlField {
    bool bIsEditableInPackaged; // 0x130
    char pad_131[0x7];
}; // Size: 0x138
#pragma pack(pop)
