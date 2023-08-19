#pragma once
#include <cstdint>
#include "UFieldGuideButtonBase.hpp"
#pragma pack(push, 1)
class UFieldGuideButton_Challenges : public UFieldGuideButtonBase {
public:
    FName NewItemCategory; // 0x4b0
    static UFieldGuideButton_Challenges* StaticClass();
}; // Size: 0x4b8
#pragma pack(pop)
