#pragma once
#include <cstdint>
#include "EWindSourceCombine.hpp"
#include "UWindSourceComponentBase.hpp"
class UWindGustController;
#pragma pack(push, 1)
class UWindSourceComponentBaseData : public UWindSourceComponentBase {
public:
    UWindGustController* WindGustController; // 0x220
    float Outdoors; // 0x228
    float Priority; // 0x22c
    EWindSourceCombine SourceCombine; // 0x230
    char pad_231[0xf];
    static UWindSourceComponentBaseData* StaticClass();
    void SetWindGustController(UWindGustController* InWindGustController);
    void SetSourceCombine(EWindSourceCombine InNewSourceCombine);
    void SetPriority(float InNewPriority);
    void SetOutdoors(float InNewOutdoors);
}; // Size: 0x240
#pragma pack(pop)
