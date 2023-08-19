#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
struct FGearItemID;
#pragma pack(push, 1)
class UGearManagerFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UGearManagerFunctionLibrary* StaticClass();
    static bool NotEqual_GearItemIDGearItemID(FGearItemID& arg1, FGearItemID& arg);
    static bool IsValid(FGearItemID& GearItemID);
    static bool EqualEqual_GearItemIDGearItemID(FGearItemID& arg1, FGearItemID& arg2);
}; // Size: 0x28
#pragma pack(pop)
