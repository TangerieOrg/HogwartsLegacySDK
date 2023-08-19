#include "UBlueprintFunctionLibrary.hpp"
#include "UEnum.hpp"
#include "UFunction.hpp"
#include "UKismetNodeHelperLibrary.hpp"
void UKismetNodeHelperLibrary::ClearBit(int32_t& Data, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.ClearBit"));
    struct Params_ClearBit {
        int32_t Data; // 0x0
        int32_t Index; // 0x4
    }; // Size: 0x8
    Params_ClearBit params{};
    params.Data = (int32_t)Data;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
bool UKismetNodeHelperLibrary::HasMarkedBit(int32_t Data, int32_t NumBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.HasMarkedBit"));
    struct Params_HasMarkedBit {
        int32_t Data; // 0x0
        int32_t NumBits; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasMarkedBit params{};
    params.Data = (int32_t)Data;
    params.NumBits = (int32_t)NumBits;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UKismetNodeHelperLibrary::GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.GetFirstUnmarkedBit"));
    struct Params_GetFirstUnmarkedBit {
        int32_t Data; // 0x0
        int32_t StartIdx; // 0x4
        int32_t NumBits; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetFirstUnmarkedBit params{};
    params.Data = (int32_t)Data;
    params.StartIdx = (int32_t)StartIdx;
    params.NumBits = (int32_t)NumBits;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UKismetNodeHelperLibrary::GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.GetRandomUnmarkedBit"));
    struct Params_GetRandomUnmarkedBit {
        int32_t Data; // 0x0
        int32_t StartIdx; // 0x4
        int32_t NumBits; // 0x8
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetRandomUnmarkedBit params{};
    params.Data = (int32_t)Data;
    params.StartIdx = (int32_t)StartIdx;
    params.NumBits = (int32_t)NumBits;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UKismetNodeHelperLibrary::MarkBit(int32_t& Data, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.MarkBit"));
    struct Params_MarkBit {
        int32_t Data; // 0x0
        int32_t Index; // 0x4
    }; // Size: 0x8
    Params_MarkBit params{};
    params.Data = (int32_t)Data;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
UKismetNodeHelperLibrary* UKismetNodeHelperLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetNodeHelperLibrary");
    return (UKismetNodeHelperLibrary*)res;
}
bool UKismetNodeHelperLibrary::HasUnmarkedBit(int32_t Data, int32_t NumBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.HasUnmarkedBit"));
    struct Params_HasUnmarkedBit {
        int32_t Data; // 0x0
        int32_t NumBits; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasUnmarkedBit params{};
    params.Data = (int32_t)Data;
    params.NumBits = (int32_t)NumBits;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
uint8_t UKismetNodeHelperLibrary::GetValidValue(UEnum* Enum, uint8_t EnumeratorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.GetValidValue"));
    struct Params_GetValidValue {
        UEnum* Enum; // 0x0
        uint8_t EnumeratorValue; // 0x8
        uint8_t ReturnValue; // 0x9
    }; // Size: 0xa
    Params_GetValidValue params{};
    params.Enum = (UEnum*)Enum;
    params.EnumeratorValue = (uint8_t)EnumeratorValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
int32_t UKismetNodeHelperLibrary::GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.GetUnmarkedBit"));
    struct Params_GetUnmarkedBit {
        int32_t Data; // 0x0
        int32_t StartIdx; // 0x4
        int32_t NumBits; // 0x8
        bool bRandom; // 0xc
        char pad_d[0x3];
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetUnmarkedBit params{};
    params.Data = (int32_t)Data;
    params.StartIdx = (int32_t)StartIdx;
    params.NumBits = (int32_t)NumBits;
    params.bRandom = (bool)bRandom;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
uint8_t UKismetNodeHelperLibrary::GetEnumeratorValueFromIndex(UEnum* Enum, uint8_t EnumeratorIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.GetEnumeratorValueFromIndex"));
    struct Params_GetEnumeratorValueFromIndex {
        UEnum* Enum; // 0x0
        uint8_t EnumeratorIndex; // 0x8
        uint8_t ReturnValue; // 0x9
    }; // Size: 0xa
    Params_GetEnumeratorValueFromIndex params{};
    params.Enum = (UEnum*)Enum;
    params.EnumeratorIndex = (uint8_t)EnumeratorIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
FString UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(UEnum* Enum, uint8_t EnumeratorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.GetEnumeratorUserFriendlyName"));
    struct Params_GetEnumeratorUserFriendlyName {
        UEnum* Enum; // 0x0
        uint8_t EnumeratorValue; // 0x8
        char pad_9[0x7];
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetEnumeratorUserFriendlyName params{};
    params.Enum = (UEnum*)Enum;
    params.EnumeratorValue = (uint8_t)EnumeratorValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName UKismetNodeHelperLibrary::GetEnumeratorName(UEnum* Enum, uint8_t EnumeratorValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.GetEnumeratorName"));
    struct Params_GetEnumeratorName {
        UEnum* Enum; // 0x0
        uint8_t EnumeratorValue; // 0x8
        char pad_9[0x3];
        FName ReturnValue; // 0xc
    }; // Size: 0x14
    Params_GetEnumeratorName params{};
    params.Enum = (UEnum*)Enum;
    params.EnumeratorValue = (uint8_t)EnumeratorValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UKismetNodeHelperLibrary::ClearAllBits(int32_t& Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.ClearAllBits"));
    struct Params_ClearAllBits {
        int32_t Data; // 0x0
    }; // Size: 0x4
    Params_ClearAllBits params{};
    params.Data = (int32_t)Data;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
bool UKismetNodeHelperLibrary::BitIsMarked(int32_t Data, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetNodeHelperLibrary.BitIsMarked"));
    struct Params_BitIsMarked {
        int32_t Data; // 0x0
        int32_t Index; // 0x4
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_BitIsMarked params{};
    params.Data = (int32_t)Data;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
