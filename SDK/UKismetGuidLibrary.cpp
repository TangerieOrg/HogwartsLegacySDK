#include "FGuid.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetGuidLibrary.hpp"
UKismetGuidLibrary* UKismetGuidLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetGuidLibrary");
    return (UKismetGuidLibrary*)res;
}
void UKismetGuidLibrary::Parse_StringToGuid(FString GuidString, FGuid& OutGuid, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetGuidLibrary.Parse_StringToGuid"));
    struct Params_Parse_StringToGuid {
        FString GuidString; // 0x0
        FGuid OutGuid; // 0x10
        bool Success; // 0x20
    }; // Size: 0x21
    Params_Parse_StringToGuid params{};
    params.GuidString = (FString)GuidString;
    params.OutGuid = (FGuid)OutGuid;
    params.Success = (bool)Success;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutGuid = params.OutGuid;
    Success = params.Success;
}
bool UKismetGuidLibrary::NotEqual_GuidGuid(FGuid& A, FGuid& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetGuidLibrary.NotEqual_GuidGuid"));
    struct Params_NotEqual_GuidGuid {
        FGuid A; // 0x0
        FGuid B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_NotEqual_GuidGuid params{};
    params.A = (FGuid)A;
    params.B = (FGuid)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
FGuid UKismetGuidLibrary::NewGuid() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetGuidLibrary.NewGuid"));
    struct Params_NewGuid {
        FGuid ReturnValue; // 0x0
    }; // Size: 0x10
    Params_NewGuid params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FGuid)params.ReturnValue;
}
FString UKismetGuidLibrary::Conv_GuidToString(FGuid& InGuid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetGuidLibrary.Conv_GuidToString"));
    struct Params_Conv_GuidToString {
        FGuid InGuid; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Conv_GuidToString params{};
    params.InGuid = (FGuid)InGuid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InGuid = params.InGuid;
    return (FString)params.ReturnValue;
}
void UKismetGuidLibrary::Invalidate_Guid(FGuid& InGuid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetGuidLibrary.Invalidate_Guid"));
    struct Params_Invalidate_Guid {
        FGuid InGuid; // 0x0
    }; // Size: 0x10
    Params_Invalidate_Guid params{};
    params.InGuid = (FGuid)InGuid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InGuid = params.InGuid;
}
bool UKismetGuidLibrary::IsValid_Guid(FGuid& InGuid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetGuidLibrary.IsValid_Guid"));
    struct Params_IsValid_Guid {
        FGuid InGuid; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsValid_Guid params{};
    params.InGuid = (FGuid)InGuid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InGuid = params.InGuid;
    return (bool)params.ReturnValue;
}
bool UKismetGuidLibrary::EqualEqual_GuidGuid(FGuid& A, FGuid& B) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetGuidLibrary.EqualEqual_GuidGuid"));
    struct Params_EqualEqual_GuidGuid {
        FGuid A; // 0x0
        FGuid B; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_EqualEqual_GuidGuid params{};
    params.A = (FGuid)A;
    params.B = (FGuid)B;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    return (bool)params.ReturnValue;
}
