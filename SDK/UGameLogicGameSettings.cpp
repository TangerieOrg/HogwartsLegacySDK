#include "EGameLogicEditorPanel.hpp"
#include "EGameLogicElementSize.hpp"
#include "FGlobal_GameLogicElement.hpp"
#include "FGlobal_GameLogicExpression.hpp"
#include "FGlobal_GameLogicPropositional_Bitfield.hpp"
#include "FGlobal_GameLogicPropositional_Enum.hpp"
#include "FGlobal_GameLogicPropositional_Float.hpp"
#include "FGlobal_GameLogicPropositional_Int32.hpp"
#include "FGlobal_GameLogicPropositional_String.hpp"
#include "FGlobal_GameLogicVar_Bitfield.hpp"
#include "FGlobal_GameLogicVar_Bool.hpp"
#include "FGlobal_GameLogicVar_Enum.hpp"
#include "FGlobal_GameLogicVar_Float.hpp"
#include "FGlobal_GameLogicVar_Int32.hpp"
#include "FGlobal_GameLogicVar_String.hpp"
#include "FGlobal_GameLogicVar_Timer.hpp"
#include "UDeveloperSettings.hpp"
#include "UFunction.hpp"
#include "UGameLogicGameSettings.hpp"
bool UGameLogicGameSettings::ElementPanelHasReferences(EGameLogicEditorPanel ElementType, FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.ElementPanelHasReferences"));
    struct Params_ElementPanelHasReferences {
        EGameLogicEditorPanel ElementType; // 0x0
        char pad_1[0x3];
        FName RealmName; // 0x4
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_ElementPanelHasReferences params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UGameLogicGameSettings* UGameLogicGameSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicGameSettings");
    return (UGameLogicGameSettings*)res;
}
void UGameLogicGameSettings::SetElementSizeByPanelAndRealm(EGameLogicElementSize InSize, EGameLogicEditorPanel ElementType, FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.SetElementSizeByPanelAndRealm"));
    struct Params_SetElementSizeByPanelAndRealm {
        EGameLogicElementSize InSize; // 0x0
        EGameLogicEditorPanel ElementType; // 0x1
        char pad_2[0x2];
        FName RealmName; // 0x4
    }; // Size: 0xc
    Params_SetElementSizeByPanelAndRealm params{};
    params.InSize = (EGameLogicElementSize)InSize;
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameLogicGameSettings::RemoveElementByIndex(EGameLogicEditorPanel ElementType, int32_t Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.RemoveElementByIndex"));
    struct Params_RemoveElementByIndex {
        EGameLogicEditorPanel ElementType; // 0x0
        char pad_1[0x3];
        int32_t Index; // 0x4
    }; // Size: 0x8
    Params_RemoveElementByIndex params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.Index = (int32_t)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UGameLogicGameSettings::IsValidElementName(FName& InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.IsValidElementName"));
    struct Params_IsValidElementName {
        FName InName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsValidElementName params{};
    params.InName = (FName)InName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InName = params.InName;
    return (bool)params.ReturnValue;
}
void UGameLogicGameSettings::MoveElementByIndex(EGameLogicEditorPanel ElementType, int32_t Index, int32_t IndexDelta, bool bUseRealm, FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.MoveElementByIndex"));
    struct Params_MoveElementByIndex {
        EGameLogicEditorPanel ElementType; // 0x0
        char pad_1[0x3];
        int32_t Index; // 0x4
        int32_t IndexDelta; // 0x8
        bool bUseRealm; // 0xc
        char pad_d[0x3];
        FName RealmName; // 0x10
    }; // Size: 0x18
    Params_MoveElementByIndex params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.Index = (int32_t)Index;
    params.IndexDelta = (int32_t)IndexDelta;
    params.bUseRealm = (bool)bUseRealm;
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
EGameLogicElementSize UGameLogicGameSettings::GetElementSizeByPanelAndRealm(EGameLogicEditorPanel ElementType, FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.GetElementSizeByPanelAndRealm"));
    struct Params_GetElementSizeByPanelAndRealm {
        EGameLogicEditorPanel ElementType; // 0x0
        char pad_1[0x3];
        FName RealmName; // 0x4
        EGameLogicElementSize ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetElementSizeByPanelAndRealm params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EGameLogicElementSize)params.ReturnValue;
}
bool UGameLogicGameSettings::IsUniqueElementName(FName& InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.IsUniqueElementName"));
    struct Params_IsUniqueElementName {
        FName InName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsUniqueElementName params{};
    params.InName = (FName)InName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InName = params.InName;
    return (bool)params.ReturnValue;
}
int32_t UGameLogicGameSettings::GetIndexFromElement(EGameLogicEditorPanel ElementType, FGlobal_GameLogicElement& InElement, bool bUseRealm, FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.GetIndexFromElement"));
    struct Params_GetIndexFromElement {
        EGameLogicEditorPanel ElementType; // 0x0
        char pad_1[0x7];
        FGlobal_GameLogicElement InElement; // 0x8
        bool bUseRealm; // 0x28
        char pad_29[0x3];
        FName RealmName; // 0x2c
        int32_t ReturnValue; // 0x34
    }; // Size: 0x38
    Params_GetIndexFromElement params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.InElement = (FGlobal_GameLogicElement)InElement;
    params.bUseRealm = (bool)bUseRealm;
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InElement = params.InElement;
    return (int32_t)params.ReturnValue;
}
FName UGameLogicGameSettings::AddElementToRealm(EGameLogicEditorPanel ElementType, FName RealmName, int32_t Index, bool bCopyIndex, int32_t IndexToCopy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.AddElementToRealm"));
    struct Params_AddElementToRealm {
        EGameLogicEditorPanel ElementType; // 0x0
        char pad_1[0x3];
        FName RealmName; // 0x4
        int32_t Index; // 0xc
        bool bCopyIndex; // 0x10
        char pad_11[0x3];
        int32_t IndexToCopy; // 0x14
        FName ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddElementToRealm params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.RealmName = (FName)RealmName;
    params.Index = (int32_t)Index;
    params.bCopyIndex = (bool)bCopyIndex;
    params.IndexToCopy = (int32_t)IndexToCopy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UGameLogicGameSettings::DestroyElementsByRealm(EGameLogicEditorPanel ElementType, FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.DestroyElementsByRealm"));
    struct Params_DestroyElementsByRealm {
        EGameLogicEditorPanel ElementType; // 0x0
        char pad_1[0x3];
        FName RealmName; // 0x4
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_DestroyElementsByRealm params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameLogicGameSettings::GetElementNames(TArray<FName>& ElementNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.GetElementNames"));
    struct Params_GetElementNames {
        TArray<FName> ElementNames; // 0x0
    }; // Size: 0x10
    Params_GetElementNames params{};
    params.ElementNames = (TArray<FName>)ElementNames;
    ProcessEvent(func, &params);
    ElementNames = params.ElementNames;
}
int32_t UGameLogicGameSettings::GetCountFromElement(EGameLogicEditorPanel ElementType, bool bUseRealm, FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.GetCountFromElement"));
    struct Params_GetCountFromElement {
        EGameLogicEditorPanel ElementType; // 0x0
        bool bUseRealm; // 0x1
        char pad_2[0x2];
        FName RealmName; // 0x4
        int32_t ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetCountFromElement params{};
    params.ElementType = (EGameLogicEditorPanel)ElementType;
    params.bUseRealm = (bool)bUseRealm;
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UGameLogicGameSettings::ElementHasReferences(FName ElementName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.ElementHasReferences"));
    struct Params_ElementHasReferences {
        FName ElementName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ElementHasReferences params{};
    params.ElementName = (FName)ElementName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UGameLogicGameSettings::DestroyRealm(FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.DestroyRealm"));
    struct Params_DestroyRealm {
        FName RealmName; // 0x0
    }; // Size: 0x8
    Params_DestroyRealm params{};
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGameLogicGameSettings::CreateRealm(FName RealmName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.CreateRealm"));
    struct Params_CreateRealm {
        FName RealmName; // 0x0
    }; // Size: 0x8
    Params_CreateRealm params{};
    params.RealmName = (FName)RealmName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UGameLogicGameSettings::ComputeUniqueElementName(FName& BaseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameLogicRuntime.GameLogicGameSettings.ComputeUniqueElementName"));
    struct Params_ComputeUniqueElementName {
        FName BaseName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ComputeUniqueElementName params{};
    params.BaseName = (FName)BaseName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BaseName = params.BaseName;
    return (FName)params.ReturnValue;
}
