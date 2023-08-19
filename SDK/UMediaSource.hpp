#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMediaSource : public UObject {
public:
    char pad_28[0x58];
    static UMediaSource* StaticClass();
    bool Validate();
    void SetMediaOptionString(FName& Key, FString Value);
    void SetMediaOptionInt64(FName& Key, int64_t Value);
    void SetMediaOptionFloat(FName& Key, float Value);
    void SetMediaOptionBool(FName& Key, bool Value);
    FString GetUrl();
}; // Size: 0x80
#pragma pack(pop)
