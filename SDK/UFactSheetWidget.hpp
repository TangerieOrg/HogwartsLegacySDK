#pragma once
#include <cstdint>
#include "UTabPageWidget.hpp"
#pragma pack(push, 1)
class UFactSheetWidget : public UTabPageWidget {
public:
    static UFactSheetWidget* StaticClass();
    bool SetFactSheetData(FString ItemName);
}; // Size: 0x3c8
#pragma pack(pop)
