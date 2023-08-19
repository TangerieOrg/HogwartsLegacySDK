#pragma once
#include <cstdint>
#include "EAIRequestPriority\Type.hpp"
#include "EPawnActionResult\Type.hpp"
#include "UObject.hpp"
class UPawnActionsComponent;
class UBrainComponent;
class UClass;
#pragma pack(push, 1)
class UPawnAction : public UObject {
public:
    UPawnAction* ChildAction; // 0x28
    UPawnAction* ParentAction; // 0x30
    UPawnActionsComponent* OwnerComponent; // 0x38
    UObject* Instigator; // 0x40
    UBrainComponent* BrainComp; // 0x48
    char pad_50[0x30];
    uint8_t bAllowNewSameClassInstance : 1; // 0x80
    uint8_t bReplaceActiveSameClassInstance : 1; // 0x80
    uint8_t bShouldPauseMovement : 1; // 0x80
    uint8_t bAlwaysNotifyOnFinished : 1; // 0x80
    uint8_t pad_bitfield_80_4 : 4;
    char pad_81[0xf];
    static UPawnAction* StaticClass();
    EAIRequestPriority::Type GetActionPriority();
    void Finish(EPawnActionResult::Type WithResult);
    static UPawnAction* CreateActionInstance(UObject* WorldContextObject, UClass* ActionClass);
}; // Size: 0x90
#pragma pack(pop)
