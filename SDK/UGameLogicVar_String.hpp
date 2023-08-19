#pragma once
#include <cstdint>
#include "UGameLogicBase.hpp"
#pragma pack(push, 1)
class UGameLogicVar_String : public UGameLogicBase {
public:
    char pad_28[0x20];
    static UGameLogicVar_String* StaticClass();
    void SetCachedValue(FString Value);
    FString GetCachedValue();
}; // Size: 0x48
#pragma pack(pop)
