#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class AActor;
class UClass;
struct FRandomStream;
#pragma pack(push, 1)
class UKismetArrayLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetArrayLibrary* StaticClass();
    static void SetArrayPropertyByName(UObject* Object, FName PropertyName, TArray<int32_t>& Value);
    static void FilterArray(TArray<AActor*>& TargetArray, UClass* FilterClass, TArray<AActor*>& FilteredArray);
    static void Array_Swap(TArray<int32_t>& TargetArray, int32_t FirstIndex, int32_t SecondIndex);
    static void Array_ShuffleFromStream(TArray<int32_t>& TargetArray, FRandomStream& RandomStream);
    static void Array_Shuffle(TArray<int32_t>& TargetArray);
    static void Array_Set(TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item, bool bSizeToFit);
    static void Array_Reverse(TArray<int32_t>& TargetArray);
    static void Array_Resize(TArray<int32_t>& TargetArray, int32_t Size);
    static bool Array_RemoveItem(TArray<int32_t>& TargetArray, int32_t& Item);
    static void Array_Remove(TArray<int32_t>& TargetArray, int32_t IndexToRemove);
    static void Array_RandomFromStream(TArray<int32_t>& TargetArray, FRandomStream& RandomStream, int32_t& OutItem, int32_t& OutIndex);
    static void Array_Random(TArray<int32_t>& TargetArray, int32_t& OutItem, int32_t& OutIndex);
    static int32_t Array_Length(TArray<int32_t>& TargetArray);
    static int32_t Array_LastIndex(TArray<int32_t>& TargetArray);
    static bool Array_IsValidIndex(TArray<int32_t>& TargetArray, int32_t IndexToTest);
    static void Array_Insert(TArray<int32_t>& TargetArray, int32_t& NewItem, int32_t Index);
    static bool Array_Identical(TArray<int32_t>& ArrayA, TArray<int32_t>& ArrayB);
    static void Array_Get(TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item);
    static int32_t Array_Find(TArray<int32_t>& TargetArray, int32_t& ItemToFind);
    static bool Array_Contains(TArray<int32_t>& TargetArray, int32_t& ItemToFind);
    static void Array_Clear(TArray<int32_t>& TargetArray);
    static void Array_Append(TArray<int32_t>& TargetArray, TArray<int32_t>& SourceArray);
    static int32_t Array_AddUnique(TArray<int32_t>& TargetArray, int32_t& NewItem);
    static int32_t Array_Add(TArray<int32_t>& TargetArray, int32_t& NewItem);
}; // Size: 0x28
#pragma pack(pop)
