#pragma once
#include <cstdint>
#include "FSpinBoxStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#pragma pack(push, 1)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase {
public:
    FSpinBoxStyle SpinBoxStyle; // 0x30
    static USpinBoxWidgetStyle* StaticClass();
}; // Size: 0x318
#pragma pack(pop)
