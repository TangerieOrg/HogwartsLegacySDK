#pragma once
#include <cstdint>
#include "UFXAutoTriggerUpdateBase.hpp"
class UClass;
class UFXAutoTriggerUpdateLocalSkinFXVar;
#pragma pack(push, 1)
class UFXAutoTriggerUpdateSkinFXParameters : public UFXAutoTriggerUpdateBase {
public:
    UClass* SkinFX; // 0x28
    TArray<UFXAutoTriggerUpdateLocalSkinFXVar*> Vars; // 0x30
    static UFXAutoTriggerUpdateSkinFXParameters* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
