#pragma once
#include <cstdint>
#include "UObject.hpp"
class UMapPath;
#pragma pack(push, 1)
class UMapPathData : public UObject {
public:
    TArray<UMapPath*> AllPaths; // 0x28
    static UMapPathData* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
