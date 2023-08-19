#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UBaseProvider.hpp"
class UObject;
#pragma pack(push, 1)
class UVector2DProvider : public UBaseProvider {
public:
    static UVector2DProvider* StaticClass();
    FVector2D GetVector2DBP(UObject* Context);
}; // Size: 0x28
#pragma pack(pop)
