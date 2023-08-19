#pragma once
#include <cstdint>
#include "EColorVisionDeficiency.hpp"
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UUIColorTable : public UObject {
public:
    static UUIColorTable* StaticClass();
    static FLinearColor GetColorByTag(FName pColorTag);
    static FLinearColor GetColorByRowHandleBP(FDataTableRowHandle pRowHandle);
    static FLinearColor GetColorByRowHandle(FDataTableRowHandle& pRowHandle);
    static FLinearColor CreateColorBlindColor(EColorVisionDeficiency pColorType, FLinearColor pColor, int32_t bCorrectDeficiency, int32_t bSimulateCorrectionWithDeficiency, int32_t Severity);
}; // Size: 0x28
#pragma pack(pop)
