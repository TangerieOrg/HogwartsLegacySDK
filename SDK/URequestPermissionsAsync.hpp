#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
#pragma pack(push, 1)
class URequestPermissionsAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x38];
    static URequestPermissionsAsync* StaticClass();
    static URequestPermissionsAsync* GFERequestPermissions(UObject* WorldContextObject, bool Video, bool Screenshots);
}; // Size: 0x68
#pragma pack(pop)
