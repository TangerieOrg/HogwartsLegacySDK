#pragma once
#include <cstdint>
#include "UWidget.hpp"
#pragma pack(push, 1)
class UAkItemProperties : public UWidget {
public:
    char pad_108[0x40];
    static UAkItemProperties* StaticClass();
    void SetSearchText(FString newText);
    FString GetSelectedProperty();
    FString GetSearchText();
}; // Size: 0x148
#pragma pack(pop)
