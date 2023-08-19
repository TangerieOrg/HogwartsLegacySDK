#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UGlobalLightingSingleton : public UObject {
public:
    char pad_28[0xf0];
    static UGlobalLightingSingleton* StaticClass();
    static void RegisterGlobalLightingObject(UObject* BlendableLightingObject);
    static void IsRegisteredGlobalLightingObject(UObject* BlendableLightingObject, bool& registered);
    static void DeregisterGlobalLightingObject(UObject* BlendableLightingObject);
}; // Size: 0x118
#pragma pack(pop)
