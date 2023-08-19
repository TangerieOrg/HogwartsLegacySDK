#pragma once
#include <cstdint>
#include "EGameLogicEditorPanel.hpp"
#include "EGameLogicElementSize.hpp"
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
struct FGlobal_GameLogicElement;
#pragma pack(push, 1)
class UGameLogicGameSettings : public UDeveloperSettings {
public:
    TArray<FName> Realms; // 0x38
    char pad_48[0x50];
    TArray<FGlobal_GameLogicVar_Bool> BoolVars; // 0x98
    TArray<FGlobal_GameLogicVar_Int32> Int32Vars; // 0xa8
    TArray<FGlobal_GameLogicVar_Float> FloatVars; // 0xb8
    TArray<FGlobal_GameLogicVar_Timer> TimerVars; // 0xc8
    TArray<FGlobal_GameLogicVar_Enum> EnumVars; // 0xd8
    TArray<FGlobal_GameLogicVar_Bitfield> BitfieldVars; // 0xe8
    TArray<FGlobal_GameLogicVar_String> StringVars; // 0xf8
    TArray<FGlobal_GameLogicPropositional_Int32> PropInt32s; // 0x108
    TArray<FGlobal_GameLogicPropositional_Float> PropFloats; // 0x118
    TArray<FGlobal_GameLogicPropositional_Enum> PropEnums; // 0x128
    TArray<FGlobal_GameLogicPropositional_Bitfield> PropBitfields; // 0x138
    TArray<FGlobal_GameLogicPropositional_String> PropStrings; // 0x148
    TArray<FGlobal_GameLogicExpression> Expressions; // 0x158
    static UGameLogicGameSettings* StaticClass();
    static void SetElementSizeByPanelAndRealm(EGameLogicElementSize InSize, EGameLogicEditorPanel ElementType, FName RealmName);
    static void RemoveElementByIndex(EGameLogicEditorPanel ElementType, int32_t Index);
    static void MoveElementByIndex(EGameLogicEditorPanel ElementType, int32_t Index, int32_t IndexDelta, bool bUseRealm, FName RealmName);
    static bool IsValidElementName(FName& InName);
    static bool IsUniqueElementName(FName& InName);
    static int32_t GetIndexFromElement(EGameLogicEditorPanel ElementType, FGlobal_GameLogicElement& InElement, bool bUseRealm, FName RealmName);
    static EGameLogicElementSize GetElementSizeByPanelAndRealm(EGameLogicEditorPanel ElementType, FName RealmName);
    void GetElementNames(TArray<FName>& ElementNames);
    static int32_t GetCountFromElement(EGameLogicEditorPanel ElementType, bool bUseRealm, FName RealmName);
    static bool ElementPanelHasReferences(EGameLogicEditorPanel ElementType, FName RealmName);
    static bool ElementHasReferences(FName ElementName);
    static void DestroyRealm(FName RealmName);
    static bool DestroyElementsByRealm(EGameLogicEditorPanel ElementType, FName RealmName);
    static void CreateRealm(FName RealmName);
    static FName ComputeUniqueElementName(FName& BaseName);
    static FName AddElementToRealm(EGameLogicEditorPanel ElementType, FName RealmName, int32_t Index, bool bCopyIndex, int32_t IndexToCopy);
}; // Size: 0x168
#pragma pack(pop)
