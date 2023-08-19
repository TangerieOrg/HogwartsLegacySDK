#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UTimeSourceScrubbableControlBase : public UDataAsset {
public:
    static UTimeSourceScrubbableControlBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
