#pragma once
#include <cstdint>
#include "FAkWwiseObjectDetails.hpp"
#include "UWidget.hpp"
#pragma pack(push, 1)
class UAkWwiseTree : public UWidget {
public:
    char pad_108[0x40];
    static UAkWwiseTree* StaticClass();
    void SetSearchText(FString newText);
    FAkWwiseObjectDetails GetSelectedItem();
    FString GetSearchText();
}; // Size: 0x148
#pragma pack(pop)
