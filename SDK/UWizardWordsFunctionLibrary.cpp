#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UWizardWordsFunctionLibrary.hpp"
UWizardWordsFunctionLibrary* UWizardWordsFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.WizardWordsFunctionLibrary");
    return (UWizardWordsFunctionLibrary*)res;
}
FString UWizardWordsFunctionLibrary::EncryptString(FString Word) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.WizardWordsFunctionLibrary.EncryptString"));
    struct Params_EncryptString {
        FString Word; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_EncryptString params{};
    params.Word = (FString)Word;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
