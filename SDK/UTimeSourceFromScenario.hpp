#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "UTimeSourceLocal.hpp"
#pragma pack(push, 1)
class UTimeSourceFromScenario : public UTimeSourceLocal {
public:
    FDataTableRowHandle Scenario; // 0x38
    float Rate; // 0x48
    bool bUseRate; // 0x4c
    char pad_4d[0x3];
    static UTimeSourceFromScenario* StaticClass();
    void EditorForceUpdate();
}; // Size: 0x50
#pragma pack(pop)
