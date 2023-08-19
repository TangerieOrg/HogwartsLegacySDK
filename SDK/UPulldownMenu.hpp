#pragma once
#include <cstdint>
#include "UComboBoxString.hpp"
#pragma pack(push, 1)
class UPulldownMenu : public UComboBoxString {
public:
    bool LockPulldownWidth; // 0xe00
    char pad_e01[0x27];
    static UPulldownMenu* StaticClass();
}; // Size: 0xe28
#pragma pack(pop)
