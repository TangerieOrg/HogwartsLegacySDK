#pragma once
#include <cstdint>
#include "UWidget.hpp"
class UObject;
#pragma pack(push, 1)
class UComboBox : public UWidget {
public:
    TArray<UObject*> Items; // 0x108
    char pad_118[0x10];
    bool bIsFocusable; // 0x128
    char pad_129[0x17];
    static UComboBox* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
