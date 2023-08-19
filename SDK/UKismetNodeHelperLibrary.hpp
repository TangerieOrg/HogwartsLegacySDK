#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UEnum;
#pragma pack(push, 1)
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetNodeHelperLibrary* StaticClass();
    static void MarkBit(int32_t& Data, int32_t Index);
    static bool HasUnmarkedBit(int32_t Data, int32_t NumBits);
    static bool HasMarkedBit(int32_t Data, int32_t NumBits);
    static uint8_t GetValidValue(UEnum* Enum, uint8_t EnumeratorValue);
    static int32_t GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom);
    static int32_t GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
    static int32_t GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
    static uint8_t GetEnumeratorValueFromIndex(UEnum* Enum, uint8_t EnumeratorIndex);
    static FString GetEnumeratorUserFriendlyName(UEnum* Enum, uint8_t EnumeratorValue);
    static FName GetEnumeratorName(UEnum* Enum, uint8_t EnumeratorValue);
    static void ClearBit(int32_t& Data, int32_t Index);
    static void ClearAllBits(int32_t& Data);
    static bool BitIsMarked(int32_t Data, int32_t Index);
}; // Size: 0x28
#pragma pack(pop)
