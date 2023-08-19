#include "AActor.hpp"
#include "FRandomStream.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UKismetArrayLibrary.hpp"
#include "UObject.hpp"
UKismetArrayLibrary* UKismetArrayLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetArrayLibrary");
    return (UKismetArrayLibrary*)res;
}
int32_t UKismetArrayLibrary::Array_Length(TArray<int32_t>& TargetArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Length"));
    struct Params_Array_Length {
        TArray<int32_t> TargetArray; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Array_Length params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    return (int32_t)params.ReturnValue;
}
void UKismetArrayLibrary::Array_Swap(TArray<int32_t>& TargetArray, int32_t FirstIndex, int32_t SecondIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Swap"));
    struct Params_Array_Swap {
        TArray<int32_t> TargetArray; // 0x0
        int32_t FirstIndex; // 0x10
        int32_t SecondIndex; // 0x14
    }; // Size: 0x18
    Params_Array_Swap params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.FirstIndex = (int32_t)FirstIndex;
    params.SecondIndex = (int32_t)SecondIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
}
void UKismetArrayLibrary::FilterArray(TArray<AActor*>& TargetArray, UClass* FilterClass, TArray<AActor*>& FilteredArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.FilterArray"));
    struct Params_FilterArray {
        TArray<AActor*> TargetArray; // 0x0
        UClass* FilterClass; // 0x10
        TArray<AActor*> FilteredArray; // 0x18
    }; // Size: 0x28
    Params_FilterArray params{};
    params.TargetArray = (TArray<AActor*>)TargetArray;
    params.FilterClass = (UClass*)FilterClass;
    params.FilteredArray = (TArray<AActor*>)FilteredArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    FilteredArray = params.FilteredArray;
}
void UKismetArrayLibrary::SetArrayPropertyByName(UObject* Object, FName PropertyName, TArray<int32_t>& Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.SetArrayPropertyByName"));
    struct Params_SetArrayPropertyByName {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
        TArray<int32_t> Value; // 0x10
    }; // Size: 0x20
    Params_SetArrayPropertyByName params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    params.Value = (TArray<int32_t>)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
}
void UKismetArrayLibrary::Array_ShuffleFromStream(TArray<int32_t>& TargetArray, FRandomStream& RandomStream) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_ShuffleFromStream"));
    struct Params_Array_ShuffleFromStream {
        TArray<int32_t> TargetArray; // 0x0
        FRandomStream RandomStream; // 0x10
    }; // Size: 0x18
    Params_Array_ShuffleFromStream params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.RandomStream = (FRandomStream)RandomStream;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    RandomStream = params.RandomStream;
}
void UKismetArrayLibrary::Array_Shuffle(TArray<int32_t>& TargetArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Shuffle"));
    struct Params_Array_Shuffle {
        TArray<int32_t> TargetArray; // 0x0
    }; // Size: 0x10
    Params_Array_Shuffle params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
}
void UKismetArrayLibrary::Array_Set(TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item, bool bSizeToFit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Set"));
    struct Params_Array_Set {
        TArray<int32_t> TargetArray; // 0x0
        int32_t Index; // 0x10
        int32_t Item; // 0x14
        bool bSizeToFit; // 0x18
    }; // Size: 0x19
    Params_Array_Set params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.Index = (int32_t)Index;
    params.Item = (int32_t)Item;
    params.bSizeToFit = (bool)bSizeToFit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    Item = params.Item;
}
void UKismetArrayLibrary::Array_Reverse(TArray<int32_t>& TargetArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Reverse"));
    struct Params_Array_Reverse {
        TArray<int32_t> TargetArray; // 0x0
    }; // Size: 0x10
    Params_Array_Reverse params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
}
void UKismetArrayLibrary::Array_Resize(TArray<int32_t>& TargetArray, int32_t Size) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Resize"));
    struct Params_Array_Resize {
        TArray<int32_t> TargetArray; // 0x0
        int32_t Size; // 0x10
    }; // Size: 0x14
    Params_Array_Resize params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.Size = (int32_t)Size;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
}
bool UKismetArrayLibrary::Array_RemoveItem(TArray<int32_t>& TargetArray, int32_t& Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_RemoveItem"));
    struct Params_Array_RemoveItem {
        TArray<int32_t> TargetArray; // 0x0
        int32_t Item; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Array_RemoveItem params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.Item = (int32_t)Item;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    Item = params.Item;
    return (bool)params.ReturnValue;
}
void UKismetArrayLibrary::Array_Remove(TArray<int32_t>& TargetArray, int32_t IndexToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Remove"));
    struct Params_Array_Remove {
        TArray<int32_t> TargetArray; // 0x0
        int32_t IndexToRemove; // 0x10
    }; // Size: 0x14
    Params_Array_Remove params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.IndexToRemove = (int32_t)IndexToRemove;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
}
void UKismetArrayLibrary::Array_RandomFromStream(TArray<int32_t>& TargetArray, FRandomStream& RandomStream, int32_t& OutItem, int32_t& OutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_RandomFromStream"));
    struct Params_Array_RandomFromStream {
        TArray<int32_t> TargetArray; // 0x0
        FRandomStream RandomStream; // 0x10
        int32_t OutItem; // 0x18
        int32_t OutIndex; // 0x1c
    }; // Size: 0x20
    Params_Array_RandomFromStream params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.RandomStream = (FRandomStream)RandomStream;
    params.OutItem = (int32_t)OutItem;
    params.OutIndex = (int32_t)OutIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    OutItem = params.OutItem;
    RandomStream = params.RandomStream;
    OutIndex = params.OutIndex;
}
void UKismetArrayLibrary::Array_Random(TArray<int32_t>& TargetArray, int32_t& OutItem, int32_t& OutIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Random"));
    struct Params_Array_Random {
        TArray<int32_t> TargetArray; // 0x0
        int32_t OutItem; // 0x10
        int32_t OutIndex; // 0x14
    }; // Size: 0x18
    Params_Array_Random params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.OutItem = (int32_t)OutItem;
    params.OutIndex = (int32_t)OutIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    OutItem = params.OutItem;
    OutIndex = params.OutIndex;
}
int32_t UKismetArrayLibrary::Array_LastIndex(TArray<int32_t>& TargetArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_LastIndex"));
    struct Params_Array_LastIndex {
        TArray<int32_t> TargetArray; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_Array_LastIndex params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    return (int32_t)params.ReturnValue;
}
bool UKismetArrayLibrary::Array_IsValidIndex(TArray<int32_t>& TargetArray, int32_t IndexToTest) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_IsValidIndex"));
    struct Params_Array_IsValidIndex {
        TArray<int32_t> TargetArray; // 0x0
        int32_t IndexToTest; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Array_IsValidIndex params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.IndexToTest = (int32_t)IndexToTest;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    return (bool)params.ReturnValue;
}
void UKismetArrayLibrary::Array_Insert(TArray<int32_t>& TargetArray, int32_t& NewItem, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Insert"));
    struct Params_Array_Insert {
        TArray<int32_t> TargetArray; // 0x0
        int32_t NewItem; // 0x10
        int32_t Index; // 0x14
    }; // Size: 0x18
    Params_Array_Insert params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.NewItem = (int32_t)NewItem;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    NewItem = params.NewItem;
}
bool UKismetArrayLibrary::Array_Contains(TArray<int32_t>& TargetArray, int32_t& ItemToFind) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Contains"));
    struct Params_Array_Contains {
        TArray<int32_t> TargetArray; // 0x0
        int32_t ItemToFind; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_Array_Contains params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.ItemToFind = (int32_t)ItemToFind;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    ItemToFind = params.ItemToFind;
    return (bool)params.ReturnValue;
}
bool UKismetArrayLibrary::Array_Identical(TArray<int32_t>& ArrayA, TArray<int32_t>& ArrayB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Identical"));
    struct Params_Array_Identical {
        TArray<int32_t> ArrayA; // 0x0
        TArray<int32_t> ArrayB; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_Array_Identical params{};
    params.ArrayA = (TArray<int32_t>)ArrayA;
    params.ArrayB = (TArray<int32_t>)ArrayB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ArrayB = params.ArrayB;
    ArrayA = params.ArrayA;
    return (bool)params.ReturnValue;
}
void UKismetArrayLibrary::Array_Get(TArray<int32_t>& TargetArray, int32_t Index, int32_t& Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Get"));
    struct Params_Array_Get {
        TArray<int32_t> TargetArray; // 0x0
        int32_t Index; // 0x10
        int32_t Item; // 0x14
    }; // Size: 0x18
    Params_Array_Get params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.Index = (int32_t)Index;
    params.Item = (int32_t)Item;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    Item = params.Item;
}
int32_t UKismetArrayLibrary::Array_Find(TArray<int32_t>& TargetArray, int32_t& ItemToFind) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Find"));
    struct Params_Array_Find {
        TArray<int32_t> TargetArray; // 0x0
        int32_t ItemToFind; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_Array_Find params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.ItemToFind = (int32_t)ItemToFind;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ItemToFind = params.ItemToFind;
    TargetArray = params.TargetArray;
    return (int32_t)params.ReturnValue;
}
void UKismetArrayLibrary::Array_Clear(TArray<int32_t>& TargetArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Clear"));
    struct Params_Array_Clear {
        TArray<int32_t> TargetArray; // 0x0
    }; // Size: 0x10
    Params_Array_Clear params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
}
void UKismetArrayLibrary::Array_Append(TArray<int32_t>& TargetArray, TArray<int32_t>& SourceArray) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Append"));
    struct Params_Array_Append {
        TArray<int32_t> TargetArray; // 0x0
        TArray<int32_t> SourceArray; // 0x10
    }; // Size: 0x20
    Params_Array_Append params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.SourceArray = (TArray<int32_t>)SourceArray;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    SourceArray = params.SourceArray;
}
int32_t UKismetArrayLibrary::Array_AddUnique(TArray<int32_t>& TargetArray, int32_t& NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_AddUnique"));
    struct Params_Array_AddUnique {
        TArray<int32_t> TargetArray; // 0x0
        int32_t NewItem; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_Array_AddUnique params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.NewItem = (int32_t)NewItem;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    NewItem = params.NewItem;
    return (int32_t)params.ReturnValue;
}
int32_t UKismetArrayLibrary::Array_Add(TArray<int32_t>& TargetArray, int32_t& NewItem) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetArrayLibrary.Array_Add"));
    struct Params_Array_Add {
        TArray<int32_t> TargetArray; // 0x0
        int32_t NewItem; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_Array_Add params{};
    params.TargetArray = (TArray<int32_t>)TargetArray;
    params.NewItem = (int32_t)NewItem;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    TargetArray = params.TargetArray;
    NewItem = params.NewItem;
    return (int32_t)params.ReturnValue;
}
