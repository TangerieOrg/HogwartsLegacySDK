#include "EAcknowledgementRuleType.hpp"
#include "EAcknowledgementSpeakerType.hpp"
#include "UAcknowledgementEnumsBlueprintLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
UAcknowledgementEnumsBlueprintLibrary* UAcknowledgementEnumsBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AcknowledgementEnumsBlueprintLibrary");
    return (UAcknowledgementEnumsBlueprintLibrary*)res;
}
FName UAcknowledgementEnumsBlueprintLibrary::GetEAcknowledgementSpeakerTypeNameFromID(EAcknowledgementSpeakerType inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementEnumsBlueprintLibrary.GetEAcknowledgementSpeakerTypeNameFromID"));
    struct Params_GetEAcknowledgementSpeakerTypeNameFromID {
        EAcknowledgementSpeakerType inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetEAcknowledgementSpeakerTypeNameFromID params{};
    params.inID = (EAcknowledgementSpeakerType)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
EAcknowledgementSpeakerType UAcknowledgementEnumsBlueprintLibrary::GetEAcknowledgementSpeakerTypeFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementEnumsBlueprintLibrary.GetEAcknowledgementSpeakerTypeFromName"));
    struct Params_GetEAcknowledgementSpeakerTypeFromName {
        FName strName; // 0x0
        EAcknowledgementSpeakerType ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetEAcknowledgementSpeakerTypeFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (EAcknowledgementSpeakerType)params.ReturnValue;
}
FName UAcknowledgementEnumsBlueprintLibrary::GetEAcknowledgementRuleTypeNameFromID(EAcknowledgementRuleType inID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementEnumsBlueprintLibrary.GetEAcknowledgementRuleTypeNameFromID"));
    struct Params_GetEAcknowledgementRuleTypeNameFromID {
        EAcknowledgementRuleType inID; // 0x0
        char pad_1[0x3];
        FName ReturnValue; // 0x4
    }; // Size: 0xc
    Params_GetEAcknowledgementRuleTypeNameFromID params{};
    params.inID = (EAcknowledgementRuleType)inID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
EAcknowledgementRuleType UAcknowledgementEnumsBlueprintLibrary::GetEAcknowledgementRuleTypeFromName(FName& strName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementEnumsBlueprintLibrary.GetEAcknowledgementRuleTypeFromName"));
    struct Params_GetEAcknowledgementRuleTypeFromName {
        FName strName; // 0x0
        EAcknowledgementRuleType ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetEAcknowledgementRuleTypeFromName params{};
    params.strName = (FName)strName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    strName = params.strName;
    return (EAcknowledgementRuleType)params.ReturnValue;
}
