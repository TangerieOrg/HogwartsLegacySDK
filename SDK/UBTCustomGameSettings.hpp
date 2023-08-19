#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UBTCustomGameSettings : public UObject {
public:
    TArray<FName> Actions; // 0x28
    static UBTCustomGameSettings* StaticClass();
    static UBTCustomGameSettings* GetInputSettings();
    void GetActionNames(TArray<FName>& ActionNames);
}; // Size: 0x38
#pragma pack(pop)
