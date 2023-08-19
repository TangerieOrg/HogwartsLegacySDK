#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#include "FTimeRigInputSymbol.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "UTimeRigElement.hpp"
class UTimeRigInstanceContext;
class UTimeRigElementState;
#pragma pack(push, 1)
class UTimeRigInterval : public UTimeRigElement {
public:
    FTimeRigInputSymbol Start; // 0x50
    FTimeRigOutputSymbol Finish; // 0x68
    float SortOrder; // 0x80
    bool UsePostActorTick; // 0x84
    char pad_85[0x3];
    static UTimeRigInterval* StaticClass();
    void OnStartChanged(FTimeRigCoordinate Previous, FTimeRigCoordinate Current, UTimeRigInstanceContext* Context, UTimeRigElementState* State);
    void OnFinishChanged(FTimeRigCoordinate Previous, FTimeRigCoordinate Current, UTimeRigInstanceContext* Context, UTimeRigElementState* State);
}; // Size: 0x88
#pragma pack(pop)
